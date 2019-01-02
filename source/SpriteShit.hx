package;

import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * This is a bullshit class IDK lOLOL
 * @author NInjaMuffin99
 */
class SpriteShit extends FlxSprite 
{
	public var curDay:Int = 0;
	
	private var oldPos:FlxPoint = new FlxPoint();
	public var posDiff:FlxPoint = new FlxPoint();
	public var nameShit:String = "";
	

	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, SimpleGraphic);
		
		
		oldPos = getPosition();
	}
	
	override public function update(elapsed:Float):Void 
	{
		
		oldPos.x -= x;
		oldPos.y -= y;
		
		posDiff = oldPos;
		
		oldPos = getPosition();
		
		
		super.update(elapsed);
	}
	
}