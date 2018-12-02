package;

import flixel.FlxSprite;
import flixel.math.FlxRect;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author NInjaMuffin99
 */
class Tree extends SpriteShit 
{
	public var treeSize:FlxRect;

	public function new(?X:Float=0, ?Y:Float=0, curDay:Int) 
	{
		super(X, Y);
		
		this.curDay = curDay;
		
		loadGraphic("assets/images/christmasTree_" + curDay + ".png");
		
		treeSize = new FlxRect(0, 0, width, height);
		
		offset.y = height - 20;
		height = 16;
		
		offset.x = 54;
		
		width -= offset.x * 2;
		
		treeSize.width = width;
		
		
		immovable = true;
		
		
	}
	
}