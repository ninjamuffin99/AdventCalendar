package;

import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.effects.particles.FlxEmitter;
import flixel.effects.particles.FlxParticle;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.group.FlxSpriteGroup;
import flixel.math.FlxAngle;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.math.FlxVector;
import flixel.text.FlxText;
import flixel.ui.FlxSpriteButton;
import flixel.util.FlxColor;
import flixel.util.FlxSort;
import flixel.util.helpers.FlxPointRangeBounds;
import io.newgrounds.NG;
import io.newgrounds.objects.events.Response;
import io.newgrounds.objects.events.Result.GetDateTimeResult;

/**
 * ...
 * @author 
 */
class PlayState extends FlxState 
{
	private var player:Player;
	
	private var _grpThumbnails:FlxTypedGroup<FlxSpriteButton>;
	private var _grpThumbnailPics:FlxTypedGroup<FlxSprite>;
	private var _grpCharacters:FlxTypedSpriteGroup<FlxSprite>;
	private var _grpEntites:FlxTypedGroup<FlxObject>;
	
	private var curDate:Date;
	
	private var gameCamera:FlxCamera;
	private var uiCamera:FlxCamera;
	
	private var sprSnow:FlxSprite;
	
	private var tree:Tree;
	
	private var collisionBounds:FlxObject;
	private var treeOGhitbox:FlxObject;
	
	override public function create():Void 
	{	
		#if !mobile
			FlxG.mouse.visible = true;
		#end
		
		var ngAPI:NGio = new NGio(APIStuff.APIID, APIStuff.EncKey);
		
		// curDate is initialized as local time just incase the newgrounds api gunks up
		curDate = Date.now();
		
		NGio.ngDataLoaded.add(function()
		{
			NG.core.calls.gateway.getDatetime().addDataHandler(
			function(response:Response<GetDateTimeResult>):Void
			{
				if (response.success && response.result.success) 
				{
					var data:GetDateTimeResult = response.result.data;
					FlxG.log.add("TIME DATA HERE");
					FlxG.log.add(data.datetime);
					var dateTimeFixed:String = data.datetime.substring(0, 10);
					FlxG.log.add("Fixed string: " + dateTimeFixed);
					curDate = Date.fromString(dateTimeFixed);
					
					FlxG.log.add("Current day of the month: " + curDate.getDate());
				}
				else
				{
					curDate = Date.now();
					FlxG.log.add("MADE DATE TIME CURRENT TIME");
				}
				
			}).send();
		});
		
	
		
		_grpThumbnails = new FlxTypedGroup<FlxSpriteButton>();
		add(_grpThumbnails);
		
		_grpThumbnailPics = new FlxTypedGroup<FlxSprite>();
		add(_grpThumbnailPics);
		
		for (i in 0...grid.length)
		{
			var gridPos:FlxPoint = new FlxPoint(120 * (i % 4) + 10, (120 * Std.int(i / 4)) + 60);
			
			var gridBG:FlxSpriteButton = new FlxSpriteButton(gridPos.x, gridPos.y, null, function(){
				openSubState(new GallerySubstate(i));
			});
			gridBG.makeGraphic(100, 100);
			_grpThumbnails.add(gridBG);
			
			var gridThing:FlxSprite = new FlxSprite(gridPos.x, gridPos.y);
			gridThing.loadGraphic(grid[i][0]);
			
			var testSize:Int = 90;
			if (gridThing.width > gridThing.height)
				gridThing.setGraphicSize(testSize);
			else
				gridThing.setGraphicSize(0, testSize);
			
			gridThing.updateHitbox();
			gridThing.setPosition(gridBG.getMidpoint().x - (gridThing.width / 2), gridBG.getMidpoint().y - (gridThing.height / 2)); 
			_grpThumbnailPics.add(gridThing);
		}
		
		gameCamera = new FlxCamera(0, 0, FlxG.width, FlxG.height);
		uiCamera = new FlxCamera(0, 0, FlxG.width, FlxG.height);

		gameCamera.zoom = 2.5;
		
		gameCamera.bgColor = 0xff626a71;
		uiCamera.bgColor = FlxColor.TRANSPARENT;

		FlxG.cameras.reset(gameCamera);
		FlxG.cameras.add(uiCamera);

		FlxCamera.defaultCameras = [gameCamera];

		_grpThumbnails.forEach(function(s:FlxSpriteButton){
			s.cameras = [uiCamera];
		});
		
		_grpThumbnailPics.forEach(function(s:FlxSprite){
			s.cameras = [uiCamera];
		});
		
		for (i in 0...4) 
		{
			var parralaxxx:Float = 2 * (i + 1);
			
			var _emitterBG:FlxEmitter;
			
			_emitterBG = new FlxEmitter(-150, -50, 200);
			_emitterBG.makeParticles(Math.ceil(5 / parralaxxx), Math.ceil(5 / parralaxxx), FlxColor.WHITE, 200);
			
			add(_emitterBG);
			_emitterBG.start(false, 0.3);
			
			FlxG.log.add(_emitterBG);
			
			
			
			_emitterBG.velocity.active = false;
			_emitterBG.lifespan.set(20);
			_emitterBG.acceleration.start.min.x = 2 / parralaxxx;
			_emitterBG.acceleration.start.max.x = 10 / parralaxxx;
			_emitterBG.acceleration.start.min.y = 25 / parralaxxx;
			_emitterBG.acceleration.start.max.y = 40 / parralaxxx;
			_emitterBG.acceleration.end.min.x = 1 / parralaxxx;
			_emitterBG.acceleration.end.max.x = 30 / parralaxxx;
			_emitterBG.acceleration.end.min.y = 25 / parralaxxx;
			_emitterBG.acceleration.end.max.y = 40 / parralaxxx;
			_emitterBG.width = FlxG.width + 150;
			
			_emitterBG.cameras = [uiCamera];
			_emitterBG.forEach(function(p:FlxParticle){p.cameras = [uiCamera]; });
			
		}
		
		var bgTest:FlxSprite = new FlxSprite(288, 162).makeGraphic(370, 235, FlxColor.WHITE);
		// add(bgTest);
		
		sprSnow = new FlxSprite(288 - 36, 162 - 11).loadGraphic(AssetPaths.snow__png);
		add(sprSnow);
		
		collisionBounds = new FlxObject(sprSnow.x, 308, sprSnow.width, 3);
		collisionBounds.immovable = true;
		add(collisionBounds);
		
		initCharacters();
		
		tree = new Tree();
		_grpCharacters.add(tree);
		tree.setPosition(collisionBounds.x + 400, collisionBounds.y + 170);
		
		treeOGhitbox = new FlxObject(tree.x, tree.y - tree.treeSize.height, tree.treeSize.width, tree.treeSize.height);
		add(treeOGhitbox);
		
		FlxG.camera.follow(player, FlxCameraFollowStyle.LOCKON, 0.5);
		
		var zoomOffset:Float = 250;
		FlxG.camera.setScrollBounds(sprSnow.x, sprSnow.width + zoomOffset, sprSnow.y - 100, sprSnow.y + sprSnow.height);
		
		
		
		super.create();
	}
	
	private function initCharacters():Void
	{
		_grpEntites = new FlxTypedGroup<FlxObject>();
		add(_grpEntites);
		
		_grpCharacters = new FlxTypedSpriteGroup<FlxSprite>();
		_grpEntites.add(_grpCharacters);
		
		
		
		player = new Player(450, collisionBounds.y + 50);
		_grpCharacters.add(player);
		
		for (c in 0...24)
		{
			var npc:NPC = new NPC(450 + FlxG.random.float( -150, 150), collisionBounds.y + 100 + FlxG.random.float( -90, 90));
			_grpCharacters.add(npc);
		}
	}
	
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		FlxG.collide(collisionBounds, _grpCharacters);
		FlxG.collide(_grpCharacters, _grpEntites);
		
		_grpCharacters.sort(FlxSort.byY);
		
		if (FlxG.overlap(player, treeOGhitbox))
		{
			tree.alpha = 0.5;
		}
		else	
			tree.alpha = 1;
	}
	
	// SYNTAX GUIDE
	// link to image
	// Info
	public static var grid:Array<Dynamic> = 
	[
		[
			"assets/images/scepterD.png",
			"Test Info"
			
		]
	];

	
}