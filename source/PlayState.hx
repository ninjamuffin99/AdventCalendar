package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.effects.particles.FlxEmitter;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.group.FlxSpriteGroup;
import flixel.math.FlxAngle;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.math.FlxVector;
import flixel.text.FlxText;
import flixel.ui.FlxSpriteButton;
import flixel.util.FlxColor;
import flixel.util.helpers.FlxPointRangeBounds;
import io.newgrounds.NG;
import io.newgrounds.objects.events.Response;
import io.newgrounds.objects.events.Result.GetDateTimeResult;

/**
 * ...
 * @author 
 */
class PlayState extends FlxState 
{

	private var bigImage:FlxSpriteGroup;
	private var _grpThumbnails:FlxTypedGroup<FlxSpriteButton>;
	private var bigPreview:FlxSprite;
	private var imageText:FlxText;
	
	private var curOpen:Int = 0;
	private var curAnimPlaying:Int = 0;
	private var isSpritesheet:Bool = false;
	
	private var _emitter:FlxEmitter;
	private var _emitterBG:FlxEmitter;
	private var curDate:Date;
	
	override public function create():Void 
	{	
		FlxG.log.redirectTraces = true;
		var ngAPI:NGio = new NGio(APIStuff.APIID, APIStuff.EncKey);
		
		NGio.ngDataLoaded.add(function()
		{
			NG.core.calls.gateway.getDatetime().addDataHandler(
			function(response:Response<GetDateTimeResult>):Void
			{
				if (response.success && response.result.success) 
				{
					var data:GetDateTimeResult = response.result.data;
					trace(data);
				}
				else
				{
					curDate = Date.now();
				}
				
			}).send;
		});
		
		
		_emitter = new FlxEmitter(-130, -50, 200);
		_emitter.makeParticles(2, 2, FlxColor.WHITE, 200);
		
		add(_emitter);
		_emitter.start(false, 0.1);
		
		_emitter.velocity.active = false;
		_emitter.lifespan.set(20);
		_emitter.acceleration.start.min.x = 2;
		_emitter.acceleration.start.max.x = 10;
		_emitter.acceleration.start.min.y = 25;
		_emitter.acceleration.start.max.y = 40;
		_emitter.acceleration.end.min.x = 1;
		_emitter.acceleration.end.max.x = 30;
		_emitter.acceleration.end.min.y = 25;
		_emitter.acceleration.end.max.y = 40;
		_emitter.width = FlxG.width + 150;
		
		
		_emitterBG = new FlxEmitter(-130, -50, 200);
		_emitterBG.makeParticles(1, 1, FlxColor.WHITE, 200);
		
		add(_emitterBG);
		_emitterBG.start(false, 0.1);
		
		var parralaxxx:Float = 3;
		
		_emitterBG.velocity.active = false;
		_emitterBG.lifespan.set(20);
		_emitterBG.acceleration.start.min.x = 2 / parralaxxx;
		_emitterBG.acceleration.start.max.x = 10 / parralaxxx;
		_emitterBG.acceleration.start.min.y = 25 / parralaxxx;
		_emitterBG.acceleration.start.max.y = 40 / parralaxxx;
		_emitterBG.acceleration.end.min.x = 1 / parralaxxx;
		_emitterBG.acceleration.end.max.x = 30 / parralaxxx;
		_emitterBG.acceleration.end.min.y = 25 / parralaxxx;
		_emitterBG.acceleration.end.max.y = 40 / parralaxxx;
		_emitterBG.width = FlxG.width + 150;
		
		
		
		#if !mobile
			FlxG.mouse.visible = true;
		#end
		
		bigImage = new FlxSpriteGroup();
		bigPreview = new FlxSprite();
		bigImage.add(bigPreview);
		
		imageText = new FlxText(0, FlxG.height - 70, FlxG.width - 6, "Test Words", 18);
		imageText.alignment = FlxTextAlign.CENTER;
		imageText.screenCenter(X);
		bigImage.add(imageText);
		
		var text:FlxText = new FlxText(10, 10, 0, "Gallery - Press ESC to exit", 16);
		add(text);
		
		_grpThumbnails = new FlxTypedGroup<FlxSpriteButton>();
		add(_grpThumbnails);
		
		for (i in 0...grid.length)
		{
			var gridPos:FlxPoint = new FlxPoint(120 * (i % 4) + 10, (120 * Std.int(i / 4)) + 60);
			
			var gridBG:FlxSpriteButton = new FlxSpriteButton(gridPos.x, gridPos.y, null, function(){
				curOpen = i;
				isSpritesheet = false;
				
				openImage(curOpen);
			});
			gridBG.makeGraphic(100, 100);
			_grpThumbnails.add(gridBG);
			
			var gridThing:FlxSprite = new FlxSprite(gridPos.x, gridPos.y);
			gridThing.loadGraphic(grid[i][0]);
			
			var testSize:Int = 90;
			if (gridThing.width > gridThing.height)
				gridThing.setGraphicSize(testSize);
			else
				gridThing.setGraphicSize(0, testSize);
			
			gridThing.updateHitbox();
			gridThing.setPosition(gridBG.getMidpoint().x - (gridThing.width / 2), gridBG.getMidpoint().y - (gridThing.height / 2)); 
			add(gridThing);
		}
		
		add(bigImage);
		bigImage.visible = false;
		
		super.create();
	}
	
	private function openImage(i:Int):Void
	{
		curAnimPlaying = 0;
		bigImage.visible = true;
		bigPreview.loadGraphic(grid[i][0]);
		
		var isAnimated = grid[i][2];
		var horizSize:Int = Std.int(bigPreview.width);
		var vertSize:Int = Std.int(bigPreview.height);
		// checks if animated
		if (isAnimated && !isSpritesheet)
		{
			isAnimated = true;
			horizSize = Std.int(horizSize / grid[i][3]);
			vertSize = Std.int(vertSize / grid[i][4]);
		}
		
		bigPreview.loadGraphic(grid[i][0], isAnimated, horizSize, vertSize);
		
		// loads animation data
		if (isAnimated && !isSpritesheet)
		{
			for (a in 0...grid[i][5].length)
			{
				bigPreview.animation.add(grid[i][5][a][0], grid[i][5][a][1], grid[i][5][a][2]);
				bigPreview.animation.play(grid[i][5][a][0]);
			}
		}
		
		if (bigPreview.width < bigPreview.height)
			bigPreview.setGraphicSize(0, Std.int(FlxG.width * 0.75));
		else
			bigPreview.setGraphicSize(Std.int(FlxG.height * 0.75));
		
		bigPreview.updateHitbox();
		bigPreview.screenCenter();
		
		imageText.text = grid[i][1];
		
	}
	
	override public function update(elapsed:Float):Void 
	{
		#if !mobile
			keyboardControls();
		#end
		
		dragControls();
		
		super.update(elapsed);
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
		
		if (FlxG.keys.justPressed.ESCAPE)
			FlxG.switchState(new MenuState());
		
		if (FlxG.keys.justPressed.LEFT)
		{
			if (grid[curOpen][2])
			{
				curAnimPlaying -= 1;
				if (curAnimPlaying < 0)
				{
					curAnimPlaying = grid[curOpen][5].length;
					curAnimPlaying -= 1;
				}
				bigPreview.animation.play(grid[curOpen][5][curAnimPlaying][0]);
			}
		}
		
		
		if (FlxG.keys.justPressed.RIGHT)
		{
			if (grid[curOpen][2])
			{
				curAnimPlaying += 1;
				if (curAnimPlaying > grid[curOpen][5].length - 1)
				{
					curAnimPlaying = 0;
				}
				bigPreview.animation.play(grid[curOpen][5][curAnimPlaying][0]);
			}
		}
		
		if (FlxG.keys.justPressed.E)
		{
			isSpritesheet = !isSpritesheet;
			
			openImage(curOpen);
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
	
	// SYNTAX GUIDE
	// link to image
	// Info
	private var grid:Array<Dynamic> = 
	[
		[
			"assets/images/scepterD.png",
			"Test Info"
			
		]
	];

	
}