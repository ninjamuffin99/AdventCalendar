package;

import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.group.FlxSpriteGroup.FlxTypedSpriteGroup;
import flixel.util.FlxColor;
import flixel.util.FlxSort;

/**
 * ...
 * @author NInjaMuffin99
 */
class BaseState extends FlxState 
{
	
	private var player:Player;
	private var playerHitbox:FlxObject;
	private var gameCamera:FlxCamera;
	private var uiCamera:FlxCamera;
	
	
	private var presOverlaps:Int = 0;
	
	private var _grpEntites:FlxTypedGroup<FlxObject>;
	private var _grpCharacters:FlxTypedSpriteGroup<SpriteShit>;
	private var _grpCollision:FlxGroup;
	
	private var _grpEvidence:FlxTypedGroup<Evidence>;
	
	private var thumbnail:Thumbnail;
	

	override public function create():Void 
	{
		super.create();
	}
	
	private function initCharacterBases():Void
	{
		initEvidence();
		
		_grpEntites = new FlxTypedGroup<FlxObject>();
		add(_grpEntites);
		
		_grpCharacters = new FlxTypedSpriteGroup<SpriteShit>();
		_grpEntites.add(_grpCharacters);
		
		
	}
	
	private function initEvidence():Void
	{
		
		_grpEvidence = new FlxTypedGroup<Evidence>();
		add(_grpEvidence);
		
		
	}
	
	private function initCameras():Void
	{
		
		gameCamera = new FlxCamera(0, 0, FlxG.width, FlxG.height);
		uiCamera = new FlxCamera(0, 0, FlxG.width, FlxG.height);
		
		gameCamera.zoom = 2.5;
		
		
		uiCamera.bgColor = FlxColor.TRANSPARENT;
		
		FlxG.cameras.reset(gameCamera);
		// FlxG.cameras.add(uiCamera);
		
		FlxCamera.defaultCameras = [gameCamera];
		
	}
	
	private function initCollision():Void
	{
		_grpCollision = new FlxGroup();
		add(_grpCollision);
	}
	
	override public function update(elapsed:Float):Void 
	{
		FlxG.watch.addMouse();
		
		FlxG.collide(_grpCharacters, _grpEntites);
		FlxG.collide(_grpCharacters, _grpCollision);
		
		_grpCharacters.sort(FlxSort.byY);
		
		_grpEvidence.forEach(function(ev:Evidence)
		{
			if (FlxG.overlap(playerHitbox, ev))
			{
				BulletinState.evAmount[ev.ID] = true;
				ev.visible = false;
				ev.kill();
			}
		});
		
		super.update(elapsed);
	}
	
}