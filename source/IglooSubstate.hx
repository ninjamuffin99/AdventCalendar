package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;

/**
 * ...
 * @author NInjaMuffin99
 */
class IglooSubstate extends BaseState
{
	private var exitShit:FlxObject;
	private var exitingShit:Bool = false;
	private var menorah:FlxSprite;
	
	override public function create():Void 
	{
		
		initCameras();
		
		
		FlxG.camera.fade(FlxColor.BLACK, 1, true);
		
		var iglooBG:FlxSprite = new FlxSprite().loadGraphic(AssetPaths.igloo_room__png);
		add(iglooBG);
		
		initCollision();
		
		menorah = new FlxSprite(106, 65).loadGraphic(AssetPaths.menorah__png);
		menorah.immovable = true;
		_grpCollision.add(menorah);
		
		
		initCharacterBases();
		
		
		player = new Player(45, 100, Player.daDayLol);
		player.updateSprite(Player.daDayLol);
		_grpCharacters.add(player);
		
		playerHitbox = new FlxObject(0, 0, player.width + 6, player.height + 6);
		add(playerHitbox);
		
		thumbnail = new Thumbnail(0, 0, 0);
		add(thumbnail);
		FlxTween.tween(thumbnail.offset, {y: 5}, 1.2, {ease:FlxEase.quadInOut, type:FlxTweenType.PINGPONG});
		
		exitShit = new FlxObject(0, 0, 25, 400);
		add(exitShit);
		
		var camFollow:FlxObject = new FlxObject(120, 90, 1, 1);
		add(camFollow);
		FlxG.camera.focusOn(camFollow.getPosition());
		
		gameCamera.zoom += 0.5;
		
		FlxG.log.add("should be done lol");
		
		super.create();
		
	}
	
	override function initCollision():Void 
	{
		super.initCollision();
		
		for (i in wallsArray)
		{
			var collision:FlxObject = new FlxObject(i[0], i[1], i[2], i[3]);
			collision.immovable = true;
			_grpCollision.add(collision);
		}
	}
	
	override public function update(elapsed:Float):Void 
	{
		playerHitbox.setPosition(player.x - 3, player.y - 3);
		
		if (FlxG.overlap(player, exitShit) && !exitingShit)
		{
			exitingShit = true;
			
			FlxG.camera.fade(FlxColor.BLACK, 1, false, function(){FlxG.switchState(new PlayState()); });
		}
		
		if (FlxG.overlap(playerHitbox, menorah))
		{
			thumbnail.overlappin = true;
			thumbnail.setPosition(menorah.x - 10, menorah.y - thumbnail.height - 8);
			thumbnail.newThumb( -1);
			
			
			if (FlxG.onMobile)
			{
				for (touch in FlxG.touches.list)
				{
					if (touch.justPressed)
					{
						if (touch.overlaps(menorah) || touch.overlaps(thumbnail))
						{
							openSubState(new GallerySubstate( -1));
						}
					}
					
				}
			}
			
			
			if (FlxG.keys.justPressed.SPACE)
			{
				openSubState(new GallerySubstate( -1));
			}
		}
		
		super.update(elapsed);
	}
	
	private var wallsArray:Array<Dynamic> =
	[
		// TOPS
		[
			20,
			80,
			25,
			10
		],
		[
			45,
			70,
			25,
			10
		],
		[
			70,
			70,
			95,
			5
		],
		[
			165,
			70,
			25,
			10
		],
		[
			190,
			80,
			15,
			10
		],
		// BOTOM JUST CHANGE THE Y POSITION
		[
			20,
			110,
			25,
			10
		],
		[
			45,
			117,
			25,
			10
		],
		[
			70,
			122,
			95,
			5
		],
		[
			165,
			117,
			25,
			10
		],
		[
			190,
			110,
			15,
			10
		],
		//right side
		[
			204,
			90,
			3,
			30
		]
		
	];
}