package;

import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author NInjaMuffin99
 */
class Character extends SpriteShit 
{
	private var speed:Float = 95;
	private var actualOffsetLOL:Float = 12;

	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, SimpleGraphic);
		
		drag.x = drag.y = 2500;
		makeGraphic(16, 16);
		
		setFacingFlip(FlxObject.LEFT, false, false);
		setFacingFlip(FlxObject.RIGHT, true, false);
		
		
	}
	
	
	public function updateSprite(theDay:Int, isCabin:Bool = false):Void
	{
		if (isCabin)
		{
			loadGraphic(AssetPaths.spritesheetArtists__png, true, 16, 16);
			animation.frameIndex = theDay;
			resizeHitbox();
		}
		else
		{
			if (theDay == 8)
			{
				loadGraphic(AssetPaths.Daddy__png, false, 24, 24);
				actualOffsetLOL = 20;
				
				resizeHitbox();
			}
			else
			{
				// already should have loaded the sprite data i think
				animation.frameIndex = theDay;
			}
		}
		// if the day is the 9th, since the input is curDate.getDate() - 1 usually...
		
		
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
	
	public function resizeHitbox():Void
	{
		// offsets to the bottom, then shrinks the sprite
		offset.y = height - 4;
		height = 4;
		// this code kinda only applies to the normal sprites, not exactly dad but whatever
		offset.x = width / 2;
		width = offset.x / 2;
	}
	
}