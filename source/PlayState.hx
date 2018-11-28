package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.effects.particles.FlxEmitter;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.group.FlxSpriteGroup;
import flixel.math.FlxAngle;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.math.FlxVector;
import flixel.text.FlxText;
import flixel.ui.FlxSpriteButton;
import flixel.util.FlxColor;
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
	private var _grpThumbnails:FlxTypedGroup<FlxSpriteButton>;
	
	private var _emitter:FlxEmitter;
	private var _emitterBG:FlxEmitter;
	private var curDate:Date;
	
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
		
		_emitter = new FlxEmitter(-130, -50, 200);
		_emitter.makeParticles(2, 2, FlxColor.WHITE, 200);
		
		add(_emitter);
		_emitter.start(false, 0.1);
		
		_emitter.velocity.active = false;
		_emitter.lifespan.set(20);
		_emitter.acceleration.start.min.x = 2;
		_emitter.acceleration.start.max.x = 10;
		_emitter.acceleration.start.min.y = 25;
		_emitter.acceleration.start.max.y = 40;
		_emitter.acceleration.end.min.x = 1;
		_emitter.acceleration.end.max.x = 30;
		_emitter.acceleration.end.min.y = 25;
		_emitter.acceleration.end.max.y = 40;
		_emitter.width = FlxG.width + 150;
		
		
		_emitterBG = new FlxEmitter(-130, -50, 200);
		_emitterBG.makeParticles(1, 1, FlxColor.WHITE, 200);
		
		add(_emitterBG);
		_emitterBG.start(false, 0.1);
		
		var parralaxxx:Float = 3;
		
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
		
		
		_grpThumbnails = new FlxTypedGroup<FlxSpriteButton>();
		add(_grpThumbnails);
		
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
			add(gridThing);
		}
		
		super.create();
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
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