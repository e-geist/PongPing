#include <hxcpp.h>

#ifndef INCLUDED_Bar
#include <Bar.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Bar_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_up)
{
HX_STACK_FRAME("Bar","new",0x43906025,"Bar.new","Bar.hx",7,0x88e9aaeb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_up,"up")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
bool up = __o_up.Default(true);
{
	HX_STACK_LINE(9)
	this->speed = (int)200;
	HX_STACK_LINE(13)
	super::__construct(X,Y,null());
	HX_STACK_LINE(14)
	this->loadGraphic(HX_CSTRING("assets/images/bar.png"),false,(int)16,(int)64,null(),null());
	HX_STACK_LINE(15)
	this->elasticity = (int)1;
	HX_STACK_LINE(16)
	if ((up)){
		HX_STACK_LINE(17)
		this->velocity->set_y(-(this->speed));
	}
	else{
		HX_STACK_LINE(19)
		this->velocity->set_y(this->speed);
	}
}
;
	return null();
}

//Bar_obj::~Bar_obj() { }

Dynamic Bar_obj::__CreateEmpty() { return  new Bar_obj; }
hx::ObjectPtr< Bar_obj > Bar_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_up)
{  hx::ObjectPtr< Bar_obj > result = new Bar_obj();
	result->__construct(__o_X,__o_Y,__o_up);
	return result;}

Dynamic Bar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bar_obj > result = new Bar_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Bar_obj::toggleImmovable( ){
{
		HX_STACK_FRAME("Bar","toggleImmovable",0xd494581b,"Bar.toggleImmovable","Bar.hx",24,0x88e9aaeb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		this->set_immovable(!(this->immovable));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bar_obj,toggleImmovable,(void))

Void Bar_obj::update( ){
{
		HX_STACK_FRAME("Bar","update",0xf9035f64,"Bar.update","Bar.hx",29,0x88e9aaeb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->super::update();
	}
return null();
}


Void Bar_obj::destroy( ){
{
		HX_STACK_FRAME("Bar","destroy",0x70a6833f,"Bar.destroy","Bar.hx",34,0x88e9aaeb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->super::destroy();
	}
return null();
}



Bar_obj::Bar_obj()
{
}

Dynamic Bar_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"toggleImmovable") ) { return toggleImmovable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bar_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("speed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Bar_obj,speed),HX_CSTRING("speed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("speed"),
	HX_CSTRING("toggleImmovable"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bar_obj::__mClass,"__mClass");
};

#endif

Class Bar_obj::__mClass;

void Bar_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Bar"), hx::TCanCast< Bar_obj> ,sStaticFields,sMemberFields,
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

void Bar_obj::__boot()
{
}

