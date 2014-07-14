
package ;

import flixel.FlxSprite;
import flixel.FlxObject;

class Bar extends FlxSprite 
{
	private var speed:Float = 200;

	override public function new(X:Float=0, Y:Float=0,up:Bool=true)
	{
		super(X,Y);
		loadGraphic(AssetPaths.bar__png, false, 16, 64);
		elasticity.y = 1;
		elasticity.x = 0;
		if (up)
			velocity.y = -speed;
		else
			velocity.y = speed;
	}

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