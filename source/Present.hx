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

	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, SimpleGraphic);
		
		loadGraphic(AssetPaths.present__png);
		drag.x = drag.y = 5000;
		
		offset.y = height - 8;
		height -= offset.y;
		
	}
	
}