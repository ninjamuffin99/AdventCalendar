package;

import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author NInjaMuffin99
 */
class Character extends FlxSprite 
{
	private var speed:Float = 55;

	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, SimpleGraphic);
		
		drag.x = drag.y = 2500;
		makeGraphic(16, 16);
		
		setFacingFlip(FlxObject.LEFT, false, false);
		setFacingFlip(FlxObject.RIGHT, true, false);
		
		
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		if (velocity.x > 0)
		{
			facing = FlxObject.RIGHT;
			offset.x = 4;
		}
		else if (velocity.x < 0)
		{
			facing = FlxObject.LEFT;
			offset.x = 8;
		}
		
	}
	
	private function resizeHitbox():Void
	{
		height = 4;
		width = 4;
		offset.y = 12;
		offset.x = 8;
	}
	
}