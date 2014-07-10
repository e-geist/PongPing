package;


import flixel.FlxG;
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
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	//PlayerVariable
	private var player:Player;

	private var map:FlxOgmoLoader;
	private var mCollider:FlxTilemap;


	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		//Load Map and Tiles
		map = new FlxOgmoLoader("assets/data/room01.oel");
		mCollider = map.loadTilemap("assets/data/spacetiles2.png", 16, 16, "walls");
		mCollider.setTileProperties(1, FlxObject.NONE);
		mCollider.setTileProperties(2, FlxObject.ANY);
		add(mCollider);

		//Create Player
		player = new Player();
		
		//Set Position of Player
		map.loadEntities(placeEntities, "entities");

		add(player);
		super.create();


	}

	/**
	 * Function that is called for every Entity 
	 * and places it with the data from the Tilemap
	 */
	private function placeEntities(entityName:String, entityData:Xml):Void
	{
		var x:Int = Std.parseInt(entityData.get("x"));
		var y:Int = Std.parseInt(entityData.get("y"));
		if (entityName == "player")
		{
			player.x = x;
			player.y = y;
		}

	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{

		FlxDestroyUtil.destroy(player);
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();

		FlxG.collide(player, mCollider);
	}

}