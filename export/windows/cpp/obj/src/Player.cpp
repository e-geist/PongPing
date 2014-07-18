#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Player_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",9,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(11)
	this->speed = (int)250;
	HX_STACK_LINE(15)
	super::__construct(X,Y,null());
	HX_STACK_LINE(16)
	this->loadGraphic(HX_CSTRING("assets/images/player.png"),false,(int)16,(int)16,null(),null());
	HX_STACK_LINE(17)
	this->elasticity = (int)1;
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::destroy( ){
{
		HX_STACK_FRAME("Player","destroy",0x4e80f70d,"Player.destroy","Player.hx",26,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->super::destroy();
	}
return null();
}


Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",33,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->updateMovement();
		HX_STACK_LINE(35)
		this->super::update();
	}
return null();
}


Void Player_obj::updateMovement( ){
{
		HX_STACK_FRAME("Player","updateMovement",0xab7266a5,"Player.updateMovement","Player.hx",39,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		bool up = false;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(41)
		bool down = false;		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(47)
		Float mA = (int)0;		HX_STACK_VAR(mA,"mA");
		HX_STACK_LINE(49)
		bool _g = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("UP")).Add(HX_CSTRING("W")),(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		up = _g;
		HX_STACK_LINE(50)
		bool _g1 = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("DOWN")).Add(HX_CSTRING("S")),(int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		down = _g1;
		HX_STACK_LINE(53)
		if (((bool(up) && bool(down)))){
			HX_STACK_LINE(54)
			bool _g2 = down = false;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(54)
			up = _g2;
		}
		HX_STACK_LINE(58)
		if (((this->velocity->x == (int)0))){
			HX_STACK_LINE(59)
			this->velocity->set_x(this->speed);
		}
		HX_STACK_LINE(61)
		if (((bool(up) || bool(down)))){
			HX_STACK_LINE(64)
			if (((this->velocity->x > (int)0))){
				HX_STACK_LINE(66)
				mA = (int)0;
				HX_STACK_LINE(67)
				if ((up)){
					HX_STACK_LINE(68)
					hx::SubEq(mA,(int)45);
				}
				else{
					HX_STACK_LINE(69)
					if ((down)){
						HX_STACK_LINE(70)
						hx::AddEq(mA,(int)45);
					}
				}
			}
			else{
				HX_STACK_LINE(74)
				mA = (int)180;
				HX_STACK_LINE(75)
				if ((up)){
					HX_STACK_LINE(76)
					hx::AddEq(mA,(int)45);
				}
				HX_STACK_LINE(77)
				if ((down)){
					HX_STACK_LINE(78)
					hx::SubEq(mA,(int)45);
				}
			}
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				::flixel::util::FlxPoint point = this->velocity;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(81)
				Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
				HX_STACK_LINE(81)
				Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
				HX_STACK_LINE(81)
				Float radians = (mA * -(((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(81)
				while((true)){
					HX_STACK_LINE(81)
					if ((!(((radians < -(::Math_obj::PI)))))){
						HX_STACK_LINE(81)
						break;
					}
					HX_STACK_LINE(81)
					hx::AddEq(radians,(::Math_obj::PI * (int)2));
				}
				HX_STACK_LINE(81)
				while((true)){
					HX_STACK_LINE(81)
					if ((!(((radians > ::Math_obj::PI))))){
						HX_STACK_LINE(81)
						break;
					}
					HX_STACK_LINE(81)
					radians = (radians - (::Math_obj::PI * (int)2));
				}
				HX_STACK_LINE(81)
				if (((radians < (int)0))){
					HX_STACK_LINE(81)
					sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
					HX_STACK_LINE(81)
					if (((sin < (int)0))){
						HX_STACK_LINE(81)
						sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
					}
					else{
						HX_STACK_LINE(81)
						sin = ((.225 * (((sin * sin) - sin))) + sin);
					}
				}
				else{
					HX_STACK_LINE(81)
					sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
					HX_STACK_LINE(81)
					if (((sin < (int)0))){
						HX_STACK_LINE(81)
						sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
					}
					else{
						HX_STACK_LINE(81)
						sin = ((.225 * (((sin * sin) - sin))) + sin);
					}
				}
				HX_STACK_LINE(81)
				hx::AddEq(radians,(Float(::Math_obj::PI) / Float((int)2)));
				HX_STACK_LINE(81)
				if (((radians > ::Math_obj::PI))){
					HX_STACK_LINE(81)
					radians = (radians - (::Math_obj::PI * (int)2));
				}
				HX_STACK_LINE(81)
				if (((radians < (int)0))){
					HX_STACK_LINE(81)
					cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
					HX_STACK_LINE(81)
					if (((cos < (int)0))){
						HX_STACK_LINE(81)
						cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
					}
					else{
						HX_STACK_LINE(81)
						cos = ((.225 * (((cos * cos) - cos))) + cos);
					}
				}
				else{
					HX_STACK_LINE(81)
					cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
					HX_STACK_LINE(81)
					if (((cos < (int)0))){
						HX_STACK_LINE(81)
						cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
					}
					else{
						HX_STACK_LINE(81)
						cos = ((.225 * (((cos * cos) - cos))) + cos);
					}
				}
				HX_STACK_LINE(81)
				Float dx = this->speed;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(81)
				Float dy = (int)0;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(81)
				if (((point == null()))){
					HX_STACK_LINE(81)
					::flixel::util::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(81)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(81)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(81)
						::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(81)
						point1->_inPool = false;
						HX_STACK_LINE(81)
						_g3 = point1;
					}
					HX_STACK_LINE(81)
					point = _g3;
				}
				HX_STACK_LINE(81)
				point->set_x(((cos * dx) - (sin * dy)));
				HX_STACK_LINE(81)
				point->set_y((((int)0 - (sin * dx)) - (cos * dy)));
				HX_STACK_LINE(81)
				point;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,updateMovement,(void))


Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 14:
		if (HX_FIELD_EQ(inName,"updateMovement") ) { return updateMovement_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("speed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Player_obj,speed),HX_CSTRING("speed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("speed"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("updateMovement"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

