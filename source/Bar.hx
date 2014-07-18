
package ;

import flixel.FlxSprite;
import flixel.FlxObject;
/**
 * Bar class
 * 
 * Moves up and down, causes collision with player
 */
class Bar extends FlxSprite 
{
	private var speed:Float = 200;

	/**
	 * Creates new Bar object.
	 * Sets initial movement
	 * and start location	
	 */
	override public function new(X:Float=0, Y:Float=0,up:Bool=true)
	{
		super(X,Y);
		loadGraphic(AssetPaths.bar__png, false, 16, 64);
		
		//Needed to bounce off the walls
		elasticity = 1;
		
		velocity.y = up ? -speed : speed;
	}

	/**
	 *	Is called before collisioncheck with
	 *  player, so that only player bounces off
	 */
	public function toggleImmovable():Void
	{
		immovable = !immovable;
	}

	override public function update():Void
	{
		super.update();
	}

	override public function destroy():Void
	{
		super.destroy();
	}
		

}