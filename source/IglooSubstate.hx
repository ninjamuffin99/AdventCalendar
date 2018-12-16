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
		
		exitShit = new FlxObject(0, 0, 30, 400);
		add(exitShit);
		
		FlxG.camera.follow(iglooBG);
		
		FlxG.log.add("should be done lol");
		
		super.create();
		
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
}