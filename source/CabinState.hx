package;
import flixel.FlxG;

/**
 * ...
 * @author NInjaMuffin99
 */
class CabinState extends BaseState 
{

	override public function create():Void 
	{
		initCameras();
		
		initCharacterBases();
		initCollision();
		
		player = new Player(10, 10, Player.daDayLol);
		player.updateSprite(Player.daDayLol);
		_grpCharacters.add(player);
		
		
		super.create();
	}
	
}