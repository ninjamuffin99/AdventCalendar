package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxGraphicAsset;
import haxe.io.StringInput;

/**
 * ...
 * @author NInjaMuffin99
 */
class NPC extends Character 
{
	
	private var _brain:FSM;
	private var _idleTmr:Float = 0;
	private var _moveDir:Float;

	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, SimpleGraphic);
		
		_brain = new FSM(idle);
		
		loadGraphic(AssetPaths.tankMan__png, true, 16, 16);
		

		drag.x = drag.y = drag.x * 0.07;
		
		resizeHitbox();
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		_brain.update();
	}
	
	
	override public function updateSprite(theDay:Int, isCabin:Bool = false):Void 
	{
		super.updateSprite(theDay, isCabin);
		
		if (isCabin)
		{
			if (theDay != 25)
			{
				nameShit = PlayState.grid[theDay][3];
			}
			else
				nameShit = "ninjamuffin99";
			
		}
	}
	
	public function idle():Void
	{
		if (_idleTmr <= 0)
		{
			if (FlxG.random.bool(1))
			{
				_moveDir = -1;
				velocity.x = velocity.y = 0;
			}
			else
			{
				_moveDir = FlxG.random.int(0, 8) * 45;
				
				velocity.set(speed * 0.8, 0);
				velocity.rotate(FlxPoint.weak(), _moveDir);
			}
			_idleTmr = FlxG.random.float(1, 5);
		}
		else
			_idleTmr -= FlxG.elapsed;
	}
	
}