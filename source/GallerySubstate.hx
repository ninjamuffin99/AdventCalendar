package;

import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.group.FlxSpriteGroup;
import flixel.math.FlxAngle;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.ui.FlxSpriteButton;
import flixel.util.FlxColor;

/**
 * ...
 * @author NInjaMuffin99
 */
class GallerySubstate extends FlxSubState 
{
	
	private var picNum:Int;
	private var picsArray:Array<Dynamic> = [];
	private var isSpritesheet:Bool = false;
	private var curAnimPlaying:Int = 0;
	private var imageText:FlxText;
	private var infoBox:FlxSpriteButton;
	private var bigPreview:FlxSprite;
	private var bigImage:FlxSpriteGroup;
	private var textBG:FlxSpriteButton;
	
	private var newCamera:FlxCamera;
	
	private var curDay:Int = 0;
	
	// GET TOUCH CONTROLS FOR EXITING GOING HERE
	public function new(picNum:Int) 
	{
		this.picNum = picNum;
		
		picsArray = PlayState.grid;
		
		super();
		
	}
	
	override public function create():Void 
	{
		
		newCamera = new FlxCamera(0, 0, FlxG.width, FlxG.height);
		FlxG.cameras.add(newCamera);
		newCamera.bgColor = FlxColor.TRANSPARENT;
		
		bigImage = new FlxSpriteGroup();
		bigPreview = new FlxSprite();
		bigImage.add(bigPreview);
		
		bigPreview.cameras = [newCamera];
		bigImage.cameras = [newCamera];
		
		
		imageText = new FlxText(0, 490, FlxG.width - 6, "", 18);
		imageText.alignment = FlxTextAlign.CENTER;
		imageText.screenCenter(X);
		imageText.cameras = [newCamera];
		
		infoBox = new FlxSpriteButton(0, imageText.y - 4, null, function(){
			FlxG.openURL("https://" + picsArray[curDay][3] + ".newgrounds.com");
		});
		infoBox.makeGraphic(Std.int(750), Std.int(imageText.height * 2.1), FlxColor.BLACK);
		infoBox.alpha = 0.5;
		infoBox.screenCenter(X);
		infoBox.cameras = [newCamera];
		
		
		// offset because the safari search bar covers the game a bit i think
		var safariOffset:Float = 0;
		#if html5
			if (Std.string(FlxG.html5.browser) == "SAFARI")
			{
				safariOffset = 60;
			}
		#end
		
		var text:FlxText = new FlxText(10, 10 + safariOffset, 0, "Current Pic - Click here to exit", 16);
		
		if (FlxG.onMobile)
		{
			
			text.text = "Current Pic - Tap here to exit";
		}
		text.cameras = [newCamera];
		
		textBG = new FlxSpriteButton(5, 7 + safariOffset, null, function(){
			FlxG.cameras.remove(newCamera);
			close();
		});
		textBG.makeGraphic(text.text.length * 10, 25, FlxColor.BLACK);
		textBG.alpha = 0.5;
		textBG.cameras = [newCamera];
		
		
		add(bigImage);
		
		add(textBG);
		add(infoBox);
		add(imageText);
		add(text);
		
		bigImage.visible = false;
		
		openImage(picNum);
		
		super.create();
	}
	
	
	private function openImage(i:Int):Void
	{
		
		curDay = i;
		
		curAnimPlaying = 0;
		bigImage.visible = true;
		
		// regular artwork
		if (i >= 0)
		{
			bigPreview.loadGraphic(picsArray[i][0]);
			imageText.text = picsArray[i][1];
		}
		else
		{
			switch(i)
			{
				case -1:
					bigPreview.loadGraphic(AssetPaths.tom__png);
					imageText.text = "Tom Fulp, creator, founder, president, and CEO of Newgrounds.com";
			}
			
		}
		
		
		var isAnimated = false;
		var horizSize:Int = Std.int(bigPreview.width);
		var vertSize:Int = Std.int(bigPreview.height);
		// checks if animated
		if (isAnimated && !isSpritesheet)
		{
			isAnimated = true;
			horizSize = Std.int(horizSize / picsArray[i][3]);
			vertSize = Std.int(vertSize / picsArray[i][4]);
		}
		
		if (i >= 0)
		{
			if (picsArray[i][0] == "assets/images/artwork/tyler.png")
			{
				bigPreview.loadGraphic(picsArray[i][0], true, Std.int(1906 / 2));
				bigPreview.animation.add("boil", [0, 1], 10);
				bigPreview.animation.play("boil");
			}
			else
			{
				bigPreview.loadGraphic(picsArray[i][0], isAnimated, horizSize, vertSize);
			}
		}
		
		
		
		
		// loads animation data
		if (isAnimated && !isSpritesheet)
		{
			for (a in 0...picsArray[i][5].length)
			{
				bigPreview.animation.add(picsArray[i][5][a][0], picsArray[i][5][a][1], picsArray[i][5][a][2]);
				bigPreview.animation.play(picsArray[i][5][a][0]);
			}
		}
		
		bigPreview.setGraphicSize(0, Std.int(FlxG.height));
		bigPreview.updateHitbox();
		bigPreview.screenCenter();
		
		if (bigPreview.width >= FlxG.width)
			bigPreview.setGraphicSize(Std.int(FlxG.width));
		
		bigPreview.updateHitbox();
		bigPreview.screenCenter();
		
		
		
	}
	
	override public function update(elapsed:Float):Void 
	{
		// note to self: if this super.update() isnt at the top of this function
		// there's errors with the FlxSpriteButtons where it fuks some bullshit up with the mouse and nulls and shit 
		super.update(elapsed);
		
		#if !mobile
			keyboardControls();
		#end
		
		if (curDay >= 0)
		{
			imageText.text = picsArray[curDay][1] + "\nClick here to open " + picsArray[curDay][3] + "'s Newgrounds page";
		}
		
		
		if (FlxG.onMobile)
		{
			if (curDay >= 0)
			{
				imageText.text = picsArray[curDay][1] + "\nTap here to open " + picsArray[curDay][3] + "'s Newgrounds page";
			}
			else
			{
				switch(curDay)
				{
					case -1:
						// imageText.text = picsArray[curDay][1] + "\nTap here to open " + picsArray[curDay][3] + "'s Newgrounds page";
				}
			}
			
		}
		
		if (FlxG.keys.justPressed.ENTER)
		{
			if (curDay >= 0)
			{
				FlxG.openURL("https://" + picsArray[curDay][3] + ".newgrounds.com");
			}
			else
			{
				switch(curDay)
				{
					case -1:
						FlxG.openURL("https://tomfulp.newgrounds.com");
				}
			}
		}
		
		
		dragControls();
		

	}
	
	
	private function keyboardControls():Void
	{
		#if !mobile
		if (FlxG.mouse.wheel != 0)
		{
			bigPreview.setGraphicSize(Std.int(bigPreview.width + (FlxG.mouse.wheel * 1.5)));
			bigPreview.updateHitbox();
			bigPreview.screenCenter();
		}
		#end
		
		if (FlxG.keys.anyJustPressed(["ESCAPE", "SPACE"]))
		{
			FlxG.cameras.remove(newCamera);
			close();
		}
		
		// REPLACE THESE TO BE CLEANER LATER AND WITH MORE KEYS
		if (FlxG.keys.pressed.S)
		{
			bigPreview.offset.y += 10;
		}
		if (FlxG.keys.pressed.W)
		{
			bigPreview.offset.y -= 10;
		}
		
		if (FlxG.keys.pressed.D)
		{
			bigPreview.offset.x += 10;
		}
		
		if (FlxG.keys.pressed.A)
		{
			bigPreview.offset.x -= 10;
		}
		
	}
	
	private var dragPos:FlxPoint = new FlxPoint();
	private var picPosOld:FlxPoint = new FlxPoint();
	
	private var touchesLength:Float = 0;
	private var touchesAngle:Float = 0;
	private var picAngleOld:Float = 0;
	private var picWidthOld:Float = 0;
	
	private function dragControls():Void
	{	
		var pressingButton:Bool = false;
		var zoomPressingButton:Bool = false;
		var buttonJustPressed:Bool = false;
		var zoomButtonJustPressed:Bool = false;
		var buttonPos:FlxPoint = new FlxPoint();
		
		// its called touchNew, but really its the length of the line between the two touches
		// or the length between the center of the image and the mouse on right click
		var touchNew:Float = 0;
		var rads:Float = 0;
		var midScreen:FlxPoint = new FlxPoint();
		midScreen.set(FlxG.width / 2, FlxG.height / 2);
				
		
		#if !mobile
			if (FlxG.mouse.pressed)
			{
				if (FlxG.mouse.justPressed)
				{
					dragPos = FlxG.mouse.getPosition();
					buttonJustPressed = true;
				}
				
				pressingButton = true;
				buttonPos = FlxG.mouse.getPosition();
			}
			
			if (FlxG.mouse.pressedRight)
			{
				if (FlxG.mouse.justPressedRight)
				{
					zoomButtonJustPressed = true;
				}
				
				zoomPressingButton = true;
				
				rads = Math.atan2(midScreen.y - FlxG.mouse.y, midScreen.x - FlxG.mouse.x);
				touchNew = FlxMath.vectorLength(midScreen.x - FlxG.mouse.x, midScreen.y - FlxG.mouse.y);
			}
			
		#else
			if (FlxG.touches.list.length == 1)
			{
				if (FlxG.touches.list[0].justPressed)
				{
					dragPos = FlxG.touches.list[0].getPosition();
					buttonJustPressed = true;
				}
				
				pressingButton = true;
				buttonPos = FlxG.touches.list[0].getPosition();
			}
			if (FlxG.touches.list.length == 2)
			{
				
				if (FlxG.touches.list[1].justPressed)
				{
					zoomButtonJustPressed = true;
				}
				
				zoomPressingButton = true;
				
				rads = Math.atan2(FlxG.touches.list[0].y - FlxG.touches.list[1].y, FlxG.touches.list[0].x - FlxG.touches.list[1].x);
				touchNew = FlxMath.vectorLength(FlxG.touches.list[0].x - FlxG.touches.list[1].x, FlxG.touches.list[0].y - FlxG.touches.list[1].y);
			}
		#end
		
		// drag behaviour
		if (pressingButton)
		{
			if (buttonJustPressed)
			{
				picPosOld.x = bigPreview.offset.x;
				picPosOld.y = bigPreview.offset.y;
			}
		
			
			var xPos:Float = buttonPos.x - dragPos.x;
			var yPos:Float = buttonPos.y - dragPos.y;
			
			bigPreview.offset.x = picPosOld.x - xPos;
			bigPreview.offset.y = picPosOld.y - yPos;
			
		}
		
		// zoom behaviour
		if (zoomPressingButton)
		{	
			if (zoomButtonJustPressed)
			{
				touchesLength = touchNew;
				touchesAngle = FlxAngle.asDegrees(rads);
				picAngleOld = bigPreview.angle;
				picWidthOld = bigPreview.width;
			}
			
			
			var degs = FlxAngle.asDegrees(rads);
			// bigPreview.angle = (picAngleOld + degs - touchesAngle);
			
			FlxG.watch.addQuick("Degs/Angle", degs);
			
			bigPreview.setGraphicSize(Std.int(picWidthOld * (touchNew / touchesLength)));
			bigPreview.updateHitbox();
			bigPreview.screenCenter();
			
		}
	}
	
	
}