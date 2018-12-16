package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.util.FlxColor;

/**
 * ...
 * @author NInjaMuffin99
 */
class IglooSubstate extends BaseState
{
	private var exitShit:FlxObject;
	private var exitingShit:Bool = false;
	
	override public function create():Void 
	{
		
		initCameras();
		
		
		FlxG.camera.fade(FlxColor.BLACK, 1, true);
		
		var iglooBG:FlxSprite = new FlxSprite().loadGraphic(AssetPaths.igloo_room__png);
		add(iglooBG);
		
		initCharacterBases();
		initCollision();
		
		player = new Player(45, 100, Player.daDayLol);
		_grpCharacters.add(player);
		
		exitShit = new FlxObject(0, 0, 25, 400);
		add(exitShit);
		
		FlxG.camera.follow(iglooBG);
		
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
		if (FlxG.overlap(player, exitShit) && !exitingShit)
		{
			exitingShit = true;
			
			FlxG.camera.fade(FlxColor.BLACK, 1, false, function(){FlxG.switchState(new PlayState()); });
		}
		
		super.update(elapsed);
	}
	
	private var wallsArray:Array<Dynamic> =
	[
		[
			30,
			80,
			15,
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
		]
		
	];
}