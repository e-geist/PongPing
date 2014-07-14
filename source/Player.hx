
package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxAngle;

class Player extends FlxSprite 
{
	private var speed:Float = 250;

	override public function new(X:Float=0, Y:Float=0)
	{
		super(X, Y);
		loadGraphic( AssetPaths.player__png, false, 16, 16);
		elasticity.x = elasticity.y = 1;
	}

/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		updateMovement();
		super.update();
	}	

	private function updateMovement():Void
	{
		var up:Bool = false;
		var down:Bool = false;
		// var left:Bool = false;
		// var right:Bool = false;

		//Angle of playermovement
		//Allows diagonal movement
		var mA:Float = 0;

		up = FlxG.keys.anyPressed(["UP", "W"]);
		down = FlxG.keys.anyPressed(["DOWN", "S"]);
		//left = FlxG.keys.anyPressed(["LEFT", "A"]);
		//right = FlxG.keys.anyPressed(["RIGHT", "D" ]);
		if (up && down)
			up = down = false;

		// if (left && right)
		// 	left = right = false;
		if (velocity.x == 0)
			velocity.x = speed;

		if (up || down)
		{

			if (velocity.x > 0) 
			{
				mA = 0;
				if (up)
					mA -= 45;
				else if (down)
					mA += 45;
			}
			else
			{
				mA = 180;
				if (up)
					mA += 45;
				if (down)
					mA -= 45;
			}

			FlxAngle.rotatePoint(speed, 0, 0, 0, mA, velocity);	
		}

	}

}