package;
import flixel.FlxBasic;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;

/**
 * ...
 * @author NInjaMuffin99
 */
class CabinState extends BaseState 
{
	
	private var bulletin:FlxObject;
	private var grpCabinets:FlxGroup;
	
	private var nameTags:FlxText;

	override public function create():Void 
	{
		
		FlxG.sound.playMusic(AssetPaths.ir__mp3, 0);
		FlxG.sound.music.fadeIn(3, 0, 0.5);
		
		
		initCameras();
		
		var inside:FlxSprite = new FlxSprite(0, 0).loadGraphic(AssetPaths.inside__png);
		add(inside);
		
		
		var carpet:FlxSprite = new FlxSprite(207, 93).loadGraphic(AssetPaths.mat__png);
		add(carpet);
		
		initCharacterBases();
		initCollision();
		
		player = new Player(FlxG.random.float(10, 200), FlxG.random.int(55, 150), Player.daDayLol);
		player.updateSprite(Player.daDayLol);
		_grpCharacters.add(player);
		
		playerHitbox = new FlxObject(0, 0, player.width + 6, player.height + 6);
		add(playerHitbox);
		
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
		
		var colCouch:FlxObject = new FlxObject(48, 102, 120, 21);
		colCouch.immovable = true;
		_grpCollision.add(colCouch);
		
		var colFire:FlxObject = new FlxObject(90, 43, 38, 9);
		colFire.immovable = true;
		_grpCollision.add(colFire);
		
		bulletin = new FlxObject(135, 38, 40, 5);
		bulletin.immovable = true;
		add(bulletin);
		
		grpCabinets = new FlxGroup();
		add(grpCabinets);
		
		for (i in 0...cabLinks.length)
		{
			var cab:FlxObject = new FlxObject(13 + (15 * i), 40, 8, 8);
			cab.immovable = true;
			cab.ID = i;
			grpCabinets.add(cab);
		}
		
		FlxG.camera.follow(player);
		FlxG.camera.zoom = 4.4;
		FlxG.camera.setScrollBounds(colLeft.x, colRight.x, inside.y, colBottom.y);
		
		var npcsAdded:Int = 0;
		for (c in 0...26)
		{
			npcsAdded += 1;
			var npc:NPC = new NPC(FlxG.random.float(10, 170), FlxG.random.int(55, 150));
			npc.updateSprite(c, true);
			
			npc.ID = 2;
			_grpCharacters.add(npc);
		}
		
		FlxG.log.add(npcsAdded + " npcs added");
		
		FlxG.cameras.add(uiCamera);
		
		nameTags = new FlxText( -10, -10, 0, "", 20);
		nameTags.color = FlxColor.WHITE;
		nameTags.cameras = [uiCamera];
		add(nameTags);
		
		super.create();
	}
	
	override public function update(elapsed:Float):Void 
	{
		playerHitbox.setPosition(player.x - 3, player.y - 3);
		
		if (FlxG.overlap(playerHitbox, bulletin))
		{
			if (FlxG.keys.justPressed.SPACE)
			{
				FlxG.switchState(new BulletinState());
			}
		}
		
		_grpCharacters.forEach(function(spr:SpriteShit)
		{
			if (spr.ID == 2)
			{
				if (FlxG.overlap(playerHitbox, spr))
				{
					nameTags.setPosition(spr.x * FlxG.camera.zoom, (spr.y - 50) * FlxG.camera.zoom);
					nameTags.text = spr.nameShit;
					nameTags.alpha = 1;
				}
				else if (nameTags.alpha > 0)
				{
					nameTags.alpha -= 0.01;
				}
			}
		});
		
		FlxG.collide(grpCabinets, _grpCharacters);
		
		grpCabinets.forEach(function(cab:FlxBasic)
		{
			if (FlxG.overlap(cab, playerHitbox))
			{
				if (FlxG.keys.justPressed.SPACE)
				{
					FlxG.openURL(cabLinks[cab.ID]);
				}
			}
		});
		
		super.update(elapsed);
	}
	
	private var cabLinks:Array<String> = 
	[
		"https://www.newgrounds.com/portal/view/716556",
		"https://www.newgrounds.com/portal/view/708841",
		"https://www.newgrounds.com/portal/view/707498",
		"https://www.newgrounds.com/portal/view/710180",
		"https://phantomarcade.newgrounds.com/"
	];
}