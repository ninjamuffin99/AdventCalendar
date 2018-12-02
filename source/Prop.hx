package;

import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author NInjaMuffin99
 */
class Prop extends SpriteShit 
{

	public function new(?X:Float=0, ?Y:Float=0, propPath:String) 
	{
		super(X, Y);
		
		loadGraphic(propPath);
		drag.x = drag.y = 5000;
		
		offset.y = height - 8;
		height -= offset.y;
	}
	
}