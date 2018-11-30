package;

import flixel.FlxG;
import flixel.math.FlxMath;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author NInjaMuffin99
 */
class Player extends Character 
{

	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, SimpleGraphic);
		
		loadGraphic(AssetPaths.tankMan__png);
		
		resizeHitbox();
	}
	
	private var jumpBoost:Int = 0;
	
	override public function update(elapsed:Float):Void 
	{
		
		if (FlxG.keys.anyPressed([A, S, D, W]))
		{
			
			jumpBoost++;
			
			
			var C = FlxMath.fastCos(5.8 * jumpBoost * FlxG.elapsed);
			
			if (C < 0)
			{
				jumpBoost += 4;
				C = 0;
			}
			
			offset.y = (C * 1.3) + 12;
			
			C *= speed;
			
			FlxG.watch.addQuick("C SHIT", C);
			
			var vertSlow:Float = 0.9;
			
			if (FlxG.keys.pressed.S)
			{
				velocity.y = C * vertSlow;
			}
			if (FlxG.keys.pressed.W)
			{
				velocity.y = -C * vertSlow;
			}
			if (FlxG.keys.pressed.A)
			{
				velocity.x = -C;
			}
			if (FlxG.keys.pressed.D)
			{
				velocity.x = C;
			}
		}
		else
			jumpBoost = 0;
		
		
		super.update(elapsed);
	}
	
}