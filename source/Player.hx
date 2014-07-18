
package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxAngle;

/**
 * Player class
 *
 * Loads player sprite (Ball)
 * and updates player movement according
 * to the pushed buttons
 */
class Player extends FlxSprite 
{
	private var speed:Float = 250;

	override public function new(X:Float=0, Y:Float=0)
	{
		super(X, Y);
		loadGraphic( AssetPaths.player__png, false, 16, 16);
		
		//Bouncing off colliding objects
		elasticity = 1;
	}


	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 * Calls function to update the movement
	 * direction
	 */
	override public function update():Void
	{
		updateMovement();
		super.update();
	}	

	/**
	 * Updates the movement according to the
	 * pushed buttons. 
	 * Only the movement along the Y-Axis can
	 * be influenced, movement along X-Axis
	 * is only controlled by collisions.
	 */
	private function updateMovement():Void
	{
		var up:Bool = false;
		var down:Bool = false;

		//Angle of playermovement
		var mA:Float = 0;

		up = FlxG.keys.anyPressed(["UP", "W"]);
		down = FlxG.keys.anyPressed(["DOWN", "S"]);
		
		//Opposite direction cancel
		if (up && down)
			up = down = false;

		//If there is no movement 
		//along the x-axis, set movement
		//initiate some movement to the right
		
		if (velocity.x == 0)
			velocity.x = speed;

		if (up || down)
		{
			//Calculate angle for movement

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

			//Move according to calculated angle and set speed
			FlxAngle.rotatePoint(speed, 0, 0, 0, mA, velocity);	
		}

	}

}