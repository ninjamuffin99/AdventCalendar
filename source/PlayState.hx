package;

import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.effects.particles.FlxEmitter;
import flixel.effects.particles.FlxParticle;
import flixel.group.FlxGroup;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.group.FlxSpriteGroup;
import flixel.math.FlxAngle;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.math.FlxVector;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
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
	private var camFollow:FlxObject;
	private var camOffset:Float = 70;
	private var playerHitbox:FlxObject;
	
	private var snowStamp:FlxSprite;
	
	private var thumbnail:Thumbnail;

	private var _grpCharacters:FlxTypedSpriteGroup<SpriteShit>;
	private var _grpEntites:FlxTypedGroup<FlxObject>;
	private var _grpCollision:FlxGroup;
	
	private var curDate:Date;
	
	private var gameCamera:FlxCamera;
	private var uiCamera:FlxCamera;
	
	private var sprSnow:FlxSprite;
	private var snowStamps:FlxSprite;
	
	private var tree:Tree;
	
	private var collisionBounds:FlxObject;
	private var treeOGhitbox:FlxObject;
	
	private var presOverlaps:Int = 0;
	
	
	private var camZoomPos:FlxPoint;
	
	public static var soundEXT:String = "";
	
	override public function create():Void 
	{	
		camZoomPos = new FlxPoint(288 - 36, 162 - 11);
		
		#if !flash
			soundEXT = ".ogg";
			
			
		#else
			soundEXT = ".mp3";
		#end
		
		FlxG.sound.playMusic("assets/music/song1" + soundEXT, 0);
		FlxG.sound.music.fadeIn(5, 0, 0.7);
		
		#if !mobile
			FlxG.mouse.visible = true;
		#end
		
		var ngAPI:NGio = new NGio(APIStuff.APIID, APIStuff.EncKey);
		
		// curDate is initialized as local time just incase the newgrounds api gunks up
		curDate = Date.now();
		/*
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
		*/
		gameCamera = new FlxCamera(0, 0, FlxG.width, FlxG.height);
		uiCamera = new FlxCamera(0, 0, FlxG.width, FlxG.height);

		gameCamera.zoom = 2.5;
		
		gameCamera.bgColor = 0xff626a71;
		uiCamera.bgColor = FlxColor.TRANSPARENT;

		FlxG.cameras.reset(gameCamera);
		FlxG.cameras.add(uiCamera);

		FlxCamera.defaultCameras = [gameCamera];
		
		var bgTest:FlxSprite = new FlxSprite(288, 162).makeGraphic(370, 235, FlxColor.WHITE);
		// add(bgTest);
		
		var sprSky:FlxSprite = new FlxSprite(camZoomPos.x, camZoomPos.y).loadGraphic(AssetPaths.AdventCalendarBG__png);
		sprSky.scrollFactor.set(0.05, 0.05);
		add(sprSky);
		
		var sprClouds2:FlxSprite = new FlxSprite(sprSky.x, sprSky.y).loadGraphic(AssetPaths.clouds2__png);
		sprClouds2.scrollFactor.set(0.1, 0.1);
		sprClouds2.alpha = 0.5;
		add(sprClouds2);
		
		var sprClouds1:FlxSprite = new FlxSprite(sprSky.x, sprSky.y).loadGraphic(AssetPaths.clouds1__png);
		sprClouds1.scrollFactor.set(0.2, 0.2);
		sprClouds1.alpha = 0.5;
		add(sprClouds1);
		
		var sprMountains:FlxSprite = new FlxSprite(sprSky.x, sprSky.y).loadGraphic(AssetPaths.mountains__png);
		sprMountains.scrollFactor.set(0.3, 0.3);
		add(sprMountains);
		
		var sprSnow1:FlxSprite = new FlxSprite(sprSky.x, sprSky.y - 65).loadGraphic(AssetPaths.snow1__png);
		add(sprSnow1);
		sprSnow1.scrollFactor.set(0.4, 0.4);
		
		// initSnow();
		
		var sprGround:FlxSprite = new FlxSprite(sprSky.x, sprSky.y - 35).loadGraphic(AssetPaths.ground__png);
		sprGround.scrollFactor.set(0.6, 0.6);
		add(sprGround);
		
		var sprSnow2:FlxSprite = new FlxSprite(sprSky.x, sprSky.y - 96).loadGraphic(AssetPaths.snow2__png);
		sprSnow2.scrollFactor.set(0.75, 0.75);
		add(sprSnow2);
		
		sprSnow = new FlxSprite(288 - 36, 162 - 11).loadGraphic(AssetPaths.snow__png);
		add(sprSnow);
		
		// initSnow();
		
		_grpCollision = new FlxGroup();
		add(_grpCollision);
		
		collisionBounds = new FlxObject(sprSnow.x, 306, sprSnow.width, 3);
		collisionBounds.immovable = true;
		add(collisionBounds);
		
		var collisionBottom:FlxObject = new FlxObject(sprSnow.x, 451, sprSnow.width, 3);
		collisionBottom.immovable = true;
		_grpCollision.add(collisionBottom);
		
		var collLeft:FlxObject = new FlxObject(sprSnow.x, sprSnow.y, 3, sprSnow.height);
		collLeft.immovable = true;
		_grpCollision.add(collLeft);
		
		var collRight:FlxObject = new FlxObject(sprSnow.x + sprSnow.width - 1, sprSnow.y, 3, sprSnow.height);
		collRight.immovable = true;
		_grpCollision.add(collRight);
		
		initSnow();
		
		initCharacters();
		initPresents();
		
		tree = new Tree();
		_grpCharacters.add(tree);
		tree.setPosition(collisionBounds.x + 230, collisionBounds.y + 42);
		
		treeOGhitbox = new FlxObject(tree.x, tree.y - tree.treeSize.height, tree.treeSize.width, tree.treeSize.height);
		add(treeOGhitbox);
		
		FlxG.camera.follow(camFollow, FlxCameraFollowStyle.LOCKON, 0.05);
		
		var zoomOffset:Float = 250;
		FlxG.camera.setScrollBounds(sprSnow.x, sprSnow.width + zoomOffset, sprSnow.y - 100, sprSnow.y + sprSnow.height);
		FlxG.camera.focusOn(player.getPosition());
		FlxG.camera.fade(FlxColor.BLACK, 2.5, true);
		
		snowStamp = new FlxSprite(0, 0);
		snowStamp.loadGraphic(AssetPaths.stamp__png);
		add(snowStamp);
		
		super.create();
	}
	
	private var snowLayer:Int = 2;
	
	private function initSnow():Void
	{
		var parralaxxx:Float = 5 * (snowLayer + 1);
		var parralaxxxSnowSize:Float = 5 * (snowLayer + 1);
			
		var _emitterBG:FlxEmitter;
		
		_emitterBG = new FlxEmitter(camZoomPos.x - 50, camZoomPos.y- 90, 200);
		_emitterBG.makeParticles(Math.ceil(5 / parralaxxxSnowSize), Math.ceil(5 / parralaxxx), FlxColor.WHITE, 200);
		
		add(_emitterBG);
		_emitterBG.start(false, 0.3);
		
		FlxG.log.add("add emitter");
		
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
		_emitterBG.width = 400;
		
		// _emitterBG.cameras = [uiCamera];
		_emitterBG.forEach(function(p:FlxParticle)
		{
			// p.cameras = [uiCamera]; 
			// p.scrollFactor.x = snowLayer / 2;
		});
		
		
		
		snowLayer -= 1;
	}
	
	private function initCharacters():Void
	{
		_grpEntites = new FlxTypedGroup<FlxObject>();
		add(_grpEntites);
		
		_grpCharacters = new FlxTypedSpriteGroup<SpriteShit>();
		_grpEntites.add(_grpCharacters);
		
		
		
		player = new Player(315, collisionBounds.y + 65);
		_grpCharacters.add(player);
		
		playerHitbox = new FlxObject(0, 0, player.width + 6, player.height + 6);
		add(playerHitbox);
		
		thumbnail = new Thumbnail(0, 0, 0);
		add(thumbnail);
		FlxTween.tween(thumbnail.offset, {y: 5}, 1.2, {ease:FlxEase.quadInOut, type:FlxTweenType.PINGPONG});
		
		camFollow = new FlxObject(0, 0, 1, 1);
		add(camFollow);
		
		var days = curDate.getDate() - 1;
		if (days > 24)
			days = 24;
		
		
		for (c in 0...days)
		{
			var npc:NPC = new NPC(450 + FlxG.random.float( -150, 150), collisionBounds.y + 90 + FlxG.random.float( -90, 90));
			_grpCharacters.add(npc);
		}
	}
	
	private function initPresents():Void
	{
		var days = curDate.getDate();
		if (days > 24)
			days = 24;
		
		
		// CODE FOR DAY 1 INITIAL SHIT
		days = 1;
		
		for (p in 0...days)
		{
			var present:Present = new Present(presPositions[p][0], presPositions[p][1]);
			_grpCharacters.add(present);
			present.curDay = p;
			present.ID = 1;
		}
		
		var tank:Prop = new Prop(590, 420, "assets/images/snowTank.png");
		tank.width -= 25;
		tank.immovable = true;
		_grpCharacters.add(tank);
		
		var fort:Prop = new Prop(640, 340, "assets/images/snowFort.png");
		_grpCharacters.add(fort);
		fort.offset.x += fort.width;
		fort.width = 30;
		fort.offset.x -= fort.width + 8;
		fort.immovable = true;
	}
	
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		camFollow.setPosition(player.x, player.y - camOffset);
		playerHitbox.setPosition(player.x - 3, player.y - 3);
		presOverlaps = 0;
		
		if (player.y < collisionBounds.y + 20)
		{
			if (camOffset < 90)
			{
				camOffset += 10 * FlxG.elapsed;
			}
			else
			{
				tree.alpha -= 0.3 * FlxG.elapsed;
			}
		}
		else
		{
			if (camOffset > 70)
			{
				camOffset -= 10 * FlxG.elapsed;
			}
		}
		
		FlxG.collide(collisionBounds, _grpCharacters);
		FlxG.collide(_grpCharacters, _grpEntites);
		FlxG.collide(_grpCharacters, _grpCollision);
		
		_grpCharacters.sort(FlxSort.byY);
		
		if (FlxG.overlap(player, treeOGhitbox))
		{
			if (tree.alpha > 0.55)
			{
				tree.alpha -= 0.025;
			}
		}
		else
		{
			if (tree.alpha < 1 && player.y > collisionBounds.y + 20)
			{
				tree.alpha += 0.025;
			}
		}
		
		_grpCharacters.forEach(function(s:SpriteShit)
		{
			// Present
			if (s.ID == 1)
			{
				if (s.posDiff.x != 0 || s.posDiff.y != 0)
				{
					// sprSnow.stamp(snowStamp, Std.int(s.x), Std.int(s.y));
				}
				
				if (presOverlaps < 1)
				{
					if (FlxG.overlap(playerHitbox, s))
					{
						presOverlaps += 1;
						thumbnail.overlappin = true;
						thumbnail.setPosition(s.x - 20, s.y - thumbnail.height - 8);
						thumbnail.newThumb(s.curDay);
						
						if (FlxG.keys.justPressed.SPACE && s.curDay < grid.length)
						{
							FlxG.log.add(s.curDay);
							
							if (s.curDay == 0)
							{
								var medal = NG.core.medals.get(medalNames[0]);
								if (!medal.unlocked)
									medal.sendUnlock();
							}
							
							if (s.curDay == curDate.getDate() - 1)
							{
								var medal = NG.core.medals.get(medalNames[s.curDay]);
								if (!medal.unlocked)
									medal.sendUnlock();
							}
							
							s.animation.play("opened");
							openSubState(new GallerySubstate(s.curDay));
						}
					}
				}
				
			}
		});
		
	}
	
	// SYNTAX GUIDE
	// link to image
	// Info
	public static var grid:Array<Dynamic> = 
	[
		[
			"assets/images/superPhil.jpg",
			"Art by SuperPhil",
			"assets/images/thumbs/thumb-superPhil.png"
		],
		[
			"assets/images/scepterD.png",
			"Test Info",
			"assets/images/thumbs/thumb-scepterD.png"
			
		]
	];
	
	private var presPositions:Array<Dynamic> = 
	[
		[
			470,
			390
		]
	];
	
	private var medalNames:Array<Int> = 
	[
		55976,
		55977,
		55978,
		55979,
		55980,
		55981,
		55982,
		55983,
		55984,
		55985 // dec 10th
	];

	
}