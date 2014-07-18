#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
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

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",17,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(17)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",30,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::flixel::ui::FlxButton _g = ::flixel::ui::FlxButton_obj::__new((int)0,(int)400,HX_CSTRING("Play"),this->clickPlay_dyn());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		this->btnPlay = _g;
		HX_STACK_LINE(33)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->btnPlay,true,false);
		HX_STACK_LINE(34)
		this->add(this->btnPlay);
		HX_STACK_LINE(37)
		::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)0,HX_CSTRING("Pong Ping"),(int)22,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(37)
		this->txtTitle = _g1;
		HX_STACK_LINE(38)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->txtTitle,true,false);
		HX_STACK_LINE(39)
		this->add(this->txtTitle);
		HX_STACK_LINE(42)
		::flixel::FlxSprite _g2 = ::flixel::FlxSprite_obj::__new((int)0,(int)60,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(42)
		this->sprLogo = _g2;
		HX_STACK_LINE(43)
		this->sprLogo->loadGraphic(HX_CSTRING("assets/images/menu.png"),false,(int)320,(int)240,null(),null());
		HX_STACK_LINE(44)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->sprLogo,true,false);
		HX_STACK_LINE(45)
		this->add(this->sprLogo);
		HX_STACK_LINE(46)
		this->super::create();
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",54,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		::flixel::ui::FlxButton _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->btnPlay);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		this->btnPlay = _g;
		HX_STACK_LINE(56)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",64,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->super::update();
	}
return null();
}


Void MenuState_obj::clickPlay( ){
{
		HX_STACK_FRAME("MenuState","clickPlay",0x5f6a9ec0,"MenuState.clickPlay","MenuState.hx",69,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(69)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))


MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(btnPlay,"btnPlay");
	HX_MARK_MEMBER_NAME(sprLogo,"sprLogo");
	HX_MARK_MEMBER_NAME(txtTitle,"txtTitle");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(btnPlay,"btnPlay");
	HX_VISIT_MEMBER_NAME(sprLogo,"sprLogo");
	HX_VISIT_MEMBER_NAME(txtTitle,"txtTitle");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"btnPlay") ) { return btnPlay; }
		if (HX_FIELD_EQ(inName,"sprLogo") ) { return sprLogo; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"txtTitle") ) { return txtTitle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return clickPlay_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"btnPlay") ) { btnPlay=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprLogo") ) { sprLogo=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"txtTitle") ) { txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("btnPlay"));
	outFields->push(HX_CSTRING("sprLogo"));
	outFields->push(HX_CSTRING("txtTitle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,btnPlay),HX_CSTRING("btnPlay")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MenuState_obj,sprLogo),HX_CSTRING("sprLogo")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,txtTitle),HX_CSTRING("txtTitle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("btnPlay"),
	HX_CSTRING("sprLogo"),
	HX_CSTRING("txtTitle"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("clickPlay"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
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

void MenuState_obj::__boot()
{
}

