// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ea4f748fa8bf82f1_14_new,"openfl._legacy.display.Sprite","new",0x3d3d3727,"openfl._legacy.display.Sprite.new","openfl/_legacy/display/Sprite.hx",14,0xb166f6c6)
HX_LOCAL_STACK_FRAME(_hx_pos_ea4f748fa8bf82f1_26_startDrag,"openfl._legacy.display.Sprite","startDrag",0x2d8cdb7d,"openfl._legacy.display.Sprite.startDrag","openfl/_legacy/display/Sprite.hx",26,0xb166f6c6)
HX_LOCAL_STACK_FRAME(_hx_pos_ea4f748fa8bf82f1_37_stopDrag,"openfl._legacy.display.Sprite","stopDrag",0xe37418ef,"openfl._legacy.display.Sprite.stopDrag","openfl/_legacy/display/Sprite.hx",37,0xb166f6c6)
HX_LOCAL_STACK_FRAME(_hx_pos_ea4f748fa8bf82f1_46___getType,"openfl._legacy.display.Sprite","__getType",0xd3032957,"openfl._legacy.display.Sprite.__getType","openfl/_legacy/display/Sprite.hx",46,0xb166f6c6)
namespace openfl{
namespace _legacy{
namespace display{

void Sprite_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ea4f748fa8bf82f1_14_new)
HXLINE(  16)		 ::Dynamic _hx_tmp = ::openfl::_legacy::display::DisplayObjectContainer_obj::lime_create_display_object_container();
HXDLIN(  16)		super::__construct(_hx_tmp,this->_hx___getType());
HXLINE(  18)		this->useHandCursor = true;
HXLINE(  19)		this->buttonMode = false;
            	}

Dynamic Sprite_obj::__CreateEmpty() { return new Sprite_obj; }

void *Sprite_obj::_hx_vtable = 0;

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sprite_obj > _hx_result = new Sprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x306ae42a) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a;
		}
	} else {
		return inClassId==(int)0x3d2d7617 || inClassId==(int)0x5fcdb6d3;
	}
}

void Sprite_obj::startDrag(hx::Null< bool >  __o_lockCenter, ::openfl::_legacy::geom::Rectangle bounds){
bool lockCenter = __o_lockCenter.Default(false);
            	HX_STACKFRAME(&_hx_pos_ea4f748fa8bf82f1_26_startDrag)
HXLINE(  26)		if (hx::IsNotNull( this->get_stage() )) {
HXLINE(  28)			this->get_stage()->_hx___startDrag(hx::ObjectPtr<OBJ_>(this),lockCenter,bounds);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,startDrag,(void))

void Sprite_obj::stopDrag(){
            	HX_STACKFRAME(&_hx_pos_ea4f748fa8bf82f1_37_stopDrag)
HXLINE(  37)		if (hx::IsNotNull( this->get_stage() )) {
HXLINE(  39)			this->get_stage()->_hx___stopDrag(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,stopDrag,(void))

::String Sprite_obj::_hx___getType(){
            	HX_STACKFRAME(&_hx_pos_ea4f748fa8bf82f1_46___getType)
HXLINE(  48)		::String type = ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)));
HXLINE(  49)		int position = type.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE(  50)		if ((position >= (int)0)) {
HXLINE(  50)			return type.substr((position + (int)1),null());
            		}
            		else {
HXLINE(  50)			return type;
            		}
HXDLIN(  50)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,_hx___getType,return )


hx::ObjectPtr< Sprite_obj > Sprite_obj::__new() {
	hx::ObjectPtr< Sprite_obj > __this = new Sprite_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Sprite_obj > Sprite_obj::__alloc(hx::Ctx *_hx_ctx) {
	Sprite_obj *__this = (Sprite_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sprite_obj), true, "openfl._legacy.display.Sprite"));
	*(void **)__this = Sprite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Sprite_obj::Sprite_obj()
{
}

hx::Val Sprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return hx::Val( stopDrag_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startDrag") ) { return hx::Val( startDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getType") ) { return hx::Val( _hx___getType_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { return hx::Val( buttonMode ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return hx::Val( useHandCursor ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Sprite_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { buttonMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"));
	outFields->push(HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Sprite_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Sprite_obj,buttonMode),HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2")},
	{hx::fsBool,(int)offsetof(Sprite_obj,useHandCursor),HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Sprite_obj_sStaticStorageInfo = 0;
#endif

static ::String Sprite_obj_sMemberFields[] = {
	HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"),
	HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"),
	HX_HCSTRING("startDrag","\x76","\xa5","\x63","\xfb"),
	HX_HCSTRING("stopDrag","\x16","\x71","\x2a","\x95"),
	HX_HCSTRING("__getType","\x50","\xf3","\xd9","\xa0"),
	::String(null()) };

static void Sprite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sprite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Object *dummy = new Sprite_obj;
	Sprite_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.Sprite","\xb5","\x17","\x23","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sprite_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Sprite_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sprite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sprite_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
