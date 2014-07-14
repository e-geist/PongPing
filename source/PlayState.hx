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
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	//PlayerVariable
	private var player:Player;

	private var map:FlxOgmoLoader;
	private var mCollider:FlxTilemap;

	private var barLeft:Bar;
	private var barRight:Bar;

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

		//Set Position of Player
		map.loadEntities(placeEntities, "entities");

		add(barLeft);
		add(barRight);
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
		var id:Int = Std.parseInt(entityData.get("id"));
		if (entityName == "player")
		{
			player.x = x;
			player.y = y;
		}

		if (entityName == "bars")
		{
			id == 1 ? barLeft.x = x  : barRight.x = x;
			id == 1 ? barLeft.y = y  :  barRight.y = y;
		}

	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
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