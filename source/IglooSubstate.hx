package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.util.FlxColor;

/**
 * ...
 * @author NInjaMuffin99
 */
class IglooSubstate extends BaseState
{
	
	private var player:Player;
	
	override public function create():Void 
	{
		
		super.create();
		
		
		FlxG.camera.fade(FlxColor.BLACK, 1, true);
		
		var iglooBG:FlxSprite = new FlxSprite().loadGraphic(AssetPaths.igloo_room__png);
		iglooBG.scrollFactor.set();
		add(iglooBG);
		
		player = new Player(10, 10, Player.daDayLol);
		player.scrollFactor.set();
		add(player);
		
		FlxG.log.add("should be done lol");
		
	}
}