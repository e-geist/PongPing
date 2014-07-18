#include <hxcpp.h>

#ifndef INCLUDED_Bar
#include <Bar.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmoLoader
#include <flixel/addons/editors/ogmo/FlxOgmoLoader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",23,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(23)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",42,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::flixel::addons::editors::ogmo::FlxOgmoLoader _g = ::flixel::addons::editors::ogmo::FlxOgmoLoader_obj::__new(HX_CSTRING("assets/data/standardlvl.oel"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		this->map = _g;
		HX_STACK_LINE(45)
		::flixel::tile::FlxTilemap _g1 = this->map->loadTilemap(HX_CSTRING("assets/images/tiles.png"),(int)16,(int)16,HX_CSTRING("walls"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		this->mCollider = _g1;
		HX_STACK_LINE(46)
		this->mCollider->setTileProperties((int)1,(int)0,null(),null(),null());
		HX_STACK_LINE(47)
		this->mCollider->setTileProperties((int)2,(int)4369,null(),null(),null());
		HX_STACK_LINE(48)
		this->add(this->mCollider);
		HX_STACK_LINE(51)
		::Player _g2 = ::Player_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(51)
		this->player = _g2;
		HX_STACK_LINE(54)
		::Bar _g3 = ::Bar_obj::__new((int)0,(int)0,true);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(54)
		this->barLeft = _g3;
		HX_STACK_LINE(55)
		::Bar _g4 = ::Bar_obj::__new((int)0,(int)0,false);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(55)
		this->barRight = _g4;
		HX_STACK_LINE(56)
		::flixel::group::FlxTypedGroup _g5 = ::flixel::group::FlxTypedGroup_obj::__new((int)2);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(56)
		this->barGroup = _g5;
		HX_STACK_LINE(57)
		this->barGroup->add(this->barLeft);
		HX_STACK_LINE(58)
		this->barGroup->add(this->barRight);
		HX_STACK_LINE(61)
		this->map->loadEntities(this->placeEntities_dyn(),HX_CSTRING("entities"));
		HX_STACK_LINE(63)
		this->add(this->barLeft);
		HX_STACK_LINE(64)
		this->add(this->barRight);
		HX_STACK_LINE(65)
		this->add(this->player);
		HX_STACK_LINE(66)
		this->super::create();
	}
return null();
}


Void PlayState_obj::placeEntities( ::String entityName,::Xml entityData){
{
		HX_STACK_FRAME("PlayState","placeEntities",0xcb21ad57,"PlayState.placeEntities","PlayState.hx",76,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(entityName,"entityName")
		HX_STACK_ARG(entityData,"entityData")
		HX_STACK_LINE(78)
		::String _g = entityData->get(HX_CSTRING("x"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		int x = ::Std_obj::parseInt(_g);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(79)
		::String _g1 = entityData->get(HX_CSTRING("y"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(79)
		int y = ::Std_obj::parseInt(_g1);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(80)
		::String _g2 = entityData->get(HX_CSTRING("id"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(80)
		int id = ::Std_obj::parseInt(_g2);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(82)
		if (((entityName == HX_CSTRING("player")))){
			HX_STACK_LINE(84)
			this->player->set_x(x);
			HX_STACK_LINE(85)
			this->player->set_y(y);
		}
		HX_STACK_LINE(88)
		if (((entityName == HX_CSTRING("bars")))){
			HX_STACK_LINE(91)
			if (((id == (int)1))){
				HX_STACK_LINE(91)
				this->barLeft->set_x(x);
			}
			else{
				HX_STACK_LINE(91)
				this->barRight->set_x(x);
			}
			HX_STACK_LINE(92)
			if (((id == (int)1))){
				HX_STACK_LINE(92)
				this->barLeft->set_y(y);
			}
			else{
				HX_STACK_LINE(92)
				this->barRight->set_y(y);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,placeEntities,(void))

Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",102,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->player);
		HX_STACK_LINE(105)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->barLeft);
		HX_STACK_LINE(106)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->barRight);
		HX_STACK_LINE(107)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->barGroup);
		HX_STACK_LINE(108)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",116,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		this->super::update();
		HX_STACK_LINE(118)
		::flixel::FlxG_obj::overlap(this->player,this->mCollider,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(119)
		::flixel::FlxG_obj::overlap(this->barGroup,this->mCollider,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(120)
		this->barGroup->callAll(HX_CSTRING("toggleImmovable"),null(),null());
		HX_STACK_LINE(121)
		::flixel::FlxG_obj::overlap(this->barGroup,this->player,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(122)
		this->barGroup->callAll(HX_CSTRING("toggleImmovable"),null(),null());
		HX_STACK_LINE(123)
		if ((!(this->player->isOnScreen(null())))){
			HX_STACK_LINE(124)
			::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(124)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(mCollider,"mCollider");
	HX_MARK_MEMBER_NAME(barLeft,"barLeft");
	HX_MARK_MEMBER_NAME(barRight,"barRight");
	HX_MARK_MEMBER_NAME(barGroup,"barGroup");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(mCollider,"mCollider");
	HX_VISIT_MEMBER_NAME(barLeft,"barLeft");
	HX_VISIT_MEMBER_NAME(barRight,"barRight");
	HX_VISIT_MEMBER_NAME(barGroup,"barGroup");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"barLeft") ) { return barLeft; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barRight") ) { return barRight; }
		if (HX_FIELD_EQ(inName,"barGroup") ) { return barGroup; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mCollider") ) { return mCollider; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"placeEntities") ) { return placeEntities_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::flixel::addons::editors::ogmo::FlxOgmoLoader >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"barLeft") ) { barLeft=inValue.Cast< ::Bar >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barRight") ) { barRight=inValue.Cast< ::Bar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"barGroup") ) { barGroup=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mCollider") ) { mCollider=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("map"));
	outFields->push(HX_CSTRING("mCollider"));
	outFields->push(HX_CSTRING("barLeft"));
	outFields->push(HX_CSTRING("barRight"));
	outFields->push(HX_CSTRING("barGroup"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,player),HX_CSTRING("player")},
	{hx::fsObject /*::flixel::addons::editors::ogmo::FlxOgmoLoader*/ ,(int)offsetof(PlayState_obj,map),HX_CSTRING("map")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(PlayState_obj,mCollider),HX_CSTRING("mCollider")},
	{hx::fsObject /*::Bar*/ ,(int)offsetof(PlayState_obj,barLeft),HX_CSTRING("barLeft")},
	{hx::fsObject /*::Bar*/ ,(int)offsetof(PlayState_obj,barRight),HX_CSTRING("barRight")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,barGroup),HX_CSTRING("barGroup")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("player"),
	HX_CSTRING("map"),
	HX_CSTRING("mCollider"),
	HX_CSTRING("barLeft"),
	HX_CSTRING("barRight"),
	HX_CSTRING("barGroup"),
	HX_CSTRING("create"),
	HX_CSTRING("placeEntities"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void PlayState_obj::__boot()
{
}

