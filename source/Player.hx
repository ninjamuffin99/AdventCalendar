package;

import flixel.FlxG;
import flixel.math.FlxAngle;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.math.FlxVelocity;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author NInjaMuffin99
 */
class Player extends Character 
{
	
	private var C:Float = 0;

	// only used for the igloo lol
	public static var daDayLol:Int = 0;

	public function new(?X:Float = 0, ?Y:Float = 0, curDay:Int = 0 ) 
	{
		super(X, Y);
		
		this.curDay = curDay;
		
		loadGraphic(AssetPaths.tankMan__png, true, 16, 16);
		
		resizeHitbox();
	}
	
	override public function updateSprite(theDay:Int):Void 
	{
		super.updateSprite(theDay);
		
		// changes the static variable
		daDayLol = theDay;
	}
	
	private var jumpBoost:Int = 0;
	private var justStepped:Bool = false;
	
	override public function update(elapsed:Float):Void 
	{
		
		if (FlxG.onMobile)
		{
			
			touchControls();
		}
		else
		{
			keyboardControls();
		}
		
		super.update(elapsed);
	}
	
	private function touchControls():Void
	{
		
		// basically means that the touchscreen is bein pressed right guys
		for (touch in FlxG.touches.list)
		{
			if (touch.pressed)
			{
				bobShit();
				
				velocity.set(C);
				velocity.rotate(FlxPoint.weak(), FlxAngle.angleBetweenTouch(this, FlxG.touches.list[0], true));
				
			}
			else
			{
				jumpBoost = 0;
			}
		}
		
	}
	
	private function keyboardControls():Void
	{
		
		if (FlxG.keys.anyPressed([A, S, D, W, "UP", "DOWN", "LEFT", "RIGHT"]))
		{
			bobShit();
			
			var vertSlow:Float = 0.9;
			
			if (FlxG.keys.anyPressed(["S", "DOWN"]))
			{
				velocity.y = C * vertSlow;
			}
			if (FlxG.keys.anyPressed(["W", "UP"]))
			{
				velocity.y = -C * vertSlow;
			}
			if (FlxG.keys.anyPressed(["A", "LEFT"]))
			{
				velocity.x = -C;
			}
			if (FlxG.keys.anyPressed(["D", "RIGHT"]))
			{
				velocity.x = C;
			}
		}
		else
			jumpBoost = 0;
	}
	
	private function bobShit():Void
	{
		
		jumpBoost++;
		
		
		C = FlxMath.fastCos(8 * jumpBoost * FlxG.elapsed);
		
		if (C < 0)
		{
			if (!justStepped)
			{
				justStepped = true;
				FlxG.sound.play("assets/sounds/walk" + FlxG.random.int(1, 3) + PlayState.soundEXT, 0.2);
			}
			
			jumpBoost += 4;
			C = 0;
		}
		else
			justStepped = false;
		
		offset.y = (C * 1.3) + actualOffsetLOL;
		
		C *= speed;
	}
	
}