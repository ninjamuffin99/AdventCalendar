package;

import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.group.FlxSpriteGroup.FlxTypedSpriteGroup;
import flixel.util.FlxColor;

/**
 * ...
 * @author NInjaMuffin99
 */
class BaseState extends FlxState 
{
	
	private var player:Player;
	private var gameCamera:FlxCamera;
	private var uiCamera:FlxCamera;
	
	
	private var presOverlaps:Int = 0;
	
	private var _grpEntites:FlxTypedGroup<FlxObject>;
	private var _grpCharacters:FlxTypedSpriteGroup<SpriteShit>;

	override public function create():Void 
	{
		super.create();
	}
	
	private function initCharacterBases():Void
	{
		_grpEntites = new FlxTypedGroup<FlxObject>();
		add(_grpEntites);
		
		_grpCharacters = new FlxTypedSpriteGroup<SpriteShit>();
		_grpEntites.add(_grpCharacters);
		
	}
	
	private function initCameras():Void
	{
		
		gameCamera = new FlxCamera(0, 0, FlxG.width, FlxG.height);
		uiCamera = new FlxCamera(0, 0, FlxG.width, FlxG.height);
		
		gameCamera.zoom = 2.5;
		
		gameCamera.bgColor = 0xff626a71;
		uiCamera.bgColor = FlxColor.TRANSPARENT;
		
		FlxG.cameras.reset(gameCamera);
		// FlxG.cameras.add(uiCamera);
		
		FlxCamera.defaultCameras = [gameCamera];
		
	}
	
}