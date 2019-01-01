package;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;

/**
 * ...
 * @author NInjaMuffin99
 */
class CabinState extends BaseState 
{

	override public function create():Void 
	{
		initCameras();
		
		var inside:FlxSprite = new FlxSprite(0, 0).loadGraphic(AssetPaths.inside__png);
		add(inside);
		
		initCharacterBases();
		initCollision();
		
		player = new Player(FlxG.random.float(10, 200), FlxG.random.int(55, 150), Player.daDayLol);
		player.updateSprite(Player.daDayLol);
		_grpCharacters.add(player);
		
		var colTop:FlxObject = new FlxObject(0, 40, 220, 2);
		colTop.immovable = true;
		_grpCollision.add(colTop);
		
		var colBottom:FlxObject = new FlxObject(0, 160, 220, 2);
		colBottom.immovable = true;
		_grpCollision.add(colBottom);
		
		var colLeft:FlxObject = new FlxObject( -1, 0, 1, 160);
		colLeft.immovable = true;
		_grpCollision.add(colLeft);
		
		var colRight:FlxObject = new FlxObject(220, 0, 1, 160);
		colRight.immovable = true;
		_grpCollision.add(colRight);
		
		FlxG.camera.follow(player);
		FlxG.camera.zoom = 4.4;
		FlxG.camera.setScrollBounds(colLeft.x, colRight.x, inside.y, colBottom.y);
		
		var npcsAdded:Int = 0;
		for (c in 0...26)
		{
			npcsAdded += 1;
			var npc:NPC = new NPC(FlxG.random.float(10, 200), FlxG.random.int(55, 150));
			npc.updateSprite(c, true);
			npc.ID = 2;
			_grpCharacters.add(npc);
		}
		
		FlxG.log.add(npcsAdded + " npcs added");
		
		
		super.create();
	}
}