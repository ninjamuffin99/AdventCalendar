package;

import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;

/**
 * ...
 * @author NInjaMuffin99
 */
class Present extends SpriteShit
{

	public function new(?X:Float=0, ?Y:Float=0, curDay:Int) 
	{
		super(X, Y);
		
		this.curDay = curDay;
		
		loadGraphic("assets/images/presents/present_" + (curDay + 1) +".png", true, 16, 0);
		animation.add("closed", [0]);
		animation.add("opened", [1]);
		drag.x = drag.y = 5000;
		
		offset.y = height - 8;
		height -= offset.y;
		
	}
	
}