package;


import flixel.FlxG;
import flixel.group.FlxTypedGroup;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxObject;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxDestroyUtil;
import flixel.tile.FlxTilemap;
import flixel.addons.editors.ogmo.FlxOgmoLoader;

/**
 * PlayState
 * Creates player object and moving bars
 * Checks for collision
 * If the player leaves the screen the game
 * the game will change back to the menu
 */
class PlayState extends FlxState
{
	private var player:Player;

	//needed for loading the map
	private var map:FlxOgmoLoader;
	private var mCollider:FlxTilemap;

	private var barLeft:Bar;
	private var barRight:Bar;

	//needed to pair up the bars for collision
	private var barGroup:FlxTypedGroup<Bar>; 


	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		//Load Map and Tiles
		map = new FlxOgmoLoader(AssetPaths.standardlvl__oel);
		mCollider = map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
		mCollider.setTileProperties(1,FlxObject.NONE);
		mCollider.setTileProperties(2,FlxObject.ANY);
		add(mCollider);

		//Create Player
		player = new Player();
		
		//Create Bars
		barLeft = new Bar(0,0,true);
		barRight = new Bar(0,0,false);
		barGroup = new FlxTypedGroup<Bar>(2);
		barGroup.add(barLeft);
		barGroup.add(barRight);

		//Set Position of player and bars
		map.loadEntities(placeEntities, "entities");

		add(barLeft);
		add(barRight);
		add(player);
		super.create();


	}

	/**
	 * Function that is called for every Entity 
	 * and places it according to the tilemap data
	 */
	private function placeEntities(entityName:String, entityData:Xml):Void
	{
		//parse position of the Entity and Id
		var x:Int = Std.parseInt(entityData.get("x"));
		var y:Int = Std.parseInt(entityData.get("y"));
		var id:Int = Std.parseInt(entityData.get("id"));
		
		if (entityName == "player")
		{
			player.x = x;
			player.y = y;
		}

		if (entityName == "bars")
		{
			//decide which bar to place
			id == 1 ? barLeft.x = x  : barRight.x = x;
			id == 1 ? barLeft.y = y  :  barRight.y = y;
		}

	}
	
	/**
	 * Function that is called when this state is destroyed, 
	 * destroys the player and bars
	 */
	override public function destroy():Void
	{

		FlxDestroyUtil.destroy(player);
		FlxDestroyUtil.destroy(barLeft);
		FlxDestroyUtil.destroy(barRight);
		FlxDestroyUtil.destroy(barGroup);
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 * Checks for collision and end of the game
	 */
	override public function update():Void
	{
		super.update();
		FlxG.collide(player, mCollider);
		FlxG.collide(barGroup, mCollider);
		barGroup.callAll("toggleImmovable");
		FlxG.collide(barGroup, player);
		barGroup.callAll("toggleImmovable");
		if(!player.isOnScreen())
			FlxG.switchState(new MenuState());
	}

}