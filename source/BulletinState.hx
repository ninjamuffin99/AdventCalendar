package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.math.FlxPoint;
import flixel.text.FlxText;

/**
 * ...
 * @author ...
 */
class BulletinState extends FlxState 
{
	
	private var camFollow:FlxObject;
	private var bg:FlxSprite;
	
	private var debugSquare:FlxSprite;
	private var debugText:FlxText;
	
	public static var evAmount:Array<Bool> =
	[
		false,
		false,
		false,
		false,
		false,
		false,
		false,
		false,
		false,
		false
	];

	override public function create():Void 
	{
		bg = new FlxSprite().loadGraphic(AssetPaths.board2__png);
		bg.setGraphicSize(Std.int(bg.width * 2));
		bg.updateHitbox();
		add(bg);
		
		if (FlxG.sound.music != null)
		{
			FlxG.sound.music.fadeOut(2, FlxG.sound.music.volume / 2);
		}
		
		for (i in 0...picPosArray.length)
		{
			var ev:FlxSprite = new FlxSprite(picPosArray[i][0], picPosArray[i][1]).loadGraphic("assets/images/loganStuff/E" + (i + 1) +".png");
			add(ev);
			
			if (!evAmount[i])
			{
				ev.visible = false;
			}
		}
		
		for (i in 0...stringPosArr.length)
		{
			var strLink:FlxSprite = new FlxSprite(stringPosArr[i][0], stringPosArr[i][1]).loadGraphic("assets/images/loganStuff/S" + (i + 1) +".png");
			add(strLink);
			
			switch(i)
			{
				case 0:
					if (!evAmount[0] || !evAmount[1])
					{
						strLink.visible = false;
					}
				case 1:
					if (!evAmount[1] || !evAmount[2])
						strLink.visible = false;
				case 2:
					if (!evAmount[2] || !evAmount[3])
						strLink.visible = false;
				case 3:
					if (!evAmount[3] || !evAmount[9])
						strLink.visible = false;
				case 4:
					if (!evAmount[4] || !evAmount[9])
						strLink.visible = false;
				case 5:
					if (!evAmount[4] || !evAmount[5])
						strLink.visible = false;
				case 6:
					if (!evAmount[8] || !evAmount[5])
						strLink.visible = false;
				case 7:
					if (!evAmount[4] || !evAmount[6])
						strLink.visible = false;
				case 8:
					if (!evAmount[4] || !evAmount[7])
						strLink.visible = false;
				
			}
		}
		
		
		camFollow = new FlxObject(0, 0, 1, 1);
		add(camFollow);
		
		FlxG.camera.follow(camFollow, null, 0.02);
		FlxG.camera.zoom = 0.5;
		FlxG.camera.setScrollBounds(bg.x, bg.width, bg.y, bg.height);
		
		debugSquare = new FlxSprite(0, 0);
		debugSquare.alpha = 0.5;
		add(debugSquare);
		
		debugText = new FlxText(0, 0, 0, "", 32);
		// add(debugText);
		
		super.create();
	}
	
	private var mousePosOld:FlxPoint = new FlxPoint();
	private var curEv:Int = 0;
	
	override public function update(elapsed:Float):Void 
	{
		if (FlxG.mouse.justPressed)
		{
			mousePosOld.set(FlxG.mouse.x, FlxG.mouse.y);
		}
		
		if (camFollow.x < 0)
		{
			camFollow.x = 0;
		}
		if (camFollow.x > bg.width)
		{
			camFollow.x = bg.width;
		}
		if (camFollow.y < 0)
		{
			camFollow.y = 0;
		}
		if (camFollow.y > bg.height)
			camFollow.y = bg.height - 10;
		
		
		
		debugText.setPosition(FlxG.mouse.x, FlxG.mouse.y - 40);
		debugText.text = Std.int(FlxG.mouse.x) + ", " + Std.int(FlxG.mouse.y);
		
		
		if (FlxG.keys.justPressed.LEFT)
		{
			curEv -= 1;
			updateCamPos();
		}
		if (FlxG.keys.justPressed.RIGHT)
		{
			curEv += 1;
			updateCamPos();
		}
		
		if (FlxG.onMobile)
		{
			if (FlxG.touches.list[0].justPressed)
			{
				curEv += 1;
				updateCamPos();
			}
		}
		
		camFollow.velocity.set();
		
		var speed:Float = 220;
		
		if (FlxG.keys.pressed.SHIFT)
			speed *= 4;
		
		if (FlxG.keys.pressed.W)
		{
			camFollow.velocity.y = -speed;
		}
		if (FlxG.keys.pressed.S)
		{
			camFollow.velocity.y = speed;
		}
		if (FlxG.keys.pressed.A)
		{
			camFollow.velocity.x = -speed;
		}
		if (FlxG.keys.pressed.D)
		{
			camFollow.velocity.x = speed;
		}
		
		super.update(elapsed);
	}
	
	private function updateCamPos():Void
	{
		if (curEv < 0)
			curEv = camPosArr.length - 1;
		if (curEv >= camPosArr.length)
		{
			curEv = 0;
			FlxG.switchState(new CabinState());
		}
		
		camFollow.setPosition(camPosArr[curEv][0], camPosArr[curEv][1]);
	}
	
	private var picPosArray:Array<Dynamic> =
	[
		[140, 290],
		[176, 1596],
		[707, 820],
		[935, 2230],
		[1412, 1358],
		[2430, 800],
		[3318, 1635],
		[2532, 1746],
		[3270, 170],
		[1440, 250]
	];
	
	private var stringPosArr:Array<Dynamic> = 
	[
		[270, 350],
		[760, 830],
		[1180, 835],
		[1310, 280],
		[1460, 260],
		[2366, 804],
		[3237, 183],
		[2363, 1390],
		[2398, 1438],
	];
	private var camPosArr:Array<Dynamic> =
	[
		[500, 600],
		[650, 1880],
		[1110, 1180],
		[1400, 2410],
		[2000, 1810],
		[2975, 1110],
		[3800, 510],
		[3750, 2040],
		[2966, 2230],
		[2017, 900]
	];
}