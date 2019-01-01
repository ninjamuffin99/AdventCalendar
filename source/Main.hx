package;

import flixel.FlxGame;
import openfl.Assets;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(0, 0, BulletinState, 1, 60, 60, true));
		
		//stage.showDefaultContextMenu = false;
	}
}