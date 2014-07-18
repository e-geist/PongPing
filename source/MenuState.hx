package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxDestroyUtil;
import flixel.util.FlxSpriteUtil;

using flixel.util.FlxSpriteUtil;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{
	private var btnPlay:FlxButton;
	
	//Menuimage
	private var sprLogo:FlxSprite;

	//Gamename
	private var txtTitle:FlxText;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		//Start game button
		btnPlay = new FlxButton(0,400,"Play",clickPlay);
		FlxSpriteUtil.screenCenter(btnPlay, true, false);
		add(btnPlay);

		//Game title
		txtTitle = new FlxText(0, 0, 0, "Pong Ping", 22);
		FlxSpriteUtil.screenCenter(txtTitle, true, false);
		add(txtTitle);

		//Image
		sprLogo = new FlxSprite(0,60);
		sprLogo.loadGraphic(AssetPaths.menu__png, false, 320, 240);
		FlxSpriteUtil.screenCenter(sprLogo, true, false);
		add(sprLogo);
		super.create();
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		btnPlay = FlxDestroyUtil.destroy(btnPlay);
		txtTitle = FlxDestroyUtil.destroy(txtTitle);
		sprLogo = FlxDestroyUtil.destroy(sprLogo);
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
	}	

	private function clickPlay():Void
	{
		FlxG.switchState(new PlayState());
	}


}