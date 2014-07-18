#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

::String AssetPaths_obj::PongPing__oep;

::String AssetPaths_obj::standardlvl__oel;

::String AssetPaths_obj::bar__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::menu__png;

::String AssetPaths_obj::player__png;

::String AssetPaths_obj::tiles__png;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::sounds_go_here__txt;


AssetPaths_obj::AssetPaths_obj()
{
}

Dynamic AssetPaths_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AssetPaths_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetPaths_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PongPing__oep"),
	HX_CSTRING("standardlvl__oel"),
	HX_CSTRING("bar__png"),
	HX_CSTRING("images_go_here__txt"),
	HX_CSTRING("menu__png"),
	HX_CSTRING("player__png"),
	HX_CSTRING("tiles__png"),
	HX_CSTRING("music_goes_here__txt"),
	HX_CSTRING("sounds_go_here__txt"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::PongPing__oep,"PongPing__oep");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::standardlvl__oel,"standardlvl__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bar__png,"bar__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::menu__png,"menu__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::PongPing__oep,"PongPing__oep");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::standardlvl__oel,"standardlvl__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bar__png,"bar__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::menu__png,"menu__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#endif

Class AssetPaths_obj::__mClass;

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AssetPaths"), hx::TCanCast< AssetPaths_obj> ,sStaticFields,sMemberFields,
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

void AssetPaths_obj::__boot()
{
	PongPing__oep= HX_CSTRING("assets/data/PongPing.oep");
	standardlvl__oel= HX_CSTRING("assets/data/standardlvl.oel");
	bar__png= HX_CSTRING("assets/images/bar.png");
	images_go_here__txt= HX_CSTRING("assets/images/images-go-here.txt");
	menu__png= HX_CSTRING("assets/images/menu.png");
	player__png= HX_CSTRING("assets/images/player.png");
	tiles__png= HX_CSTRING("assets/images/tiles.png");
	music_goes_here__txt= HX_CSTRING("assets/music/music-goes-here.txt");
	sounds_go_here__txt= HX_CSTRING("assets/sounds/sounds-go-here.txt");
}

