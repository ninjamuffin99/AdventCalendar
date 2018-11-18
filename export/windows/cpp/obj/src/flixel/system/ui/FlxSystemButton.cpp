// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9eece198099547db_14_new,"flixel.system.ui.FlxSystemButton","new",0x605e3518,"flixel.system.ui.FlxSystemButton.new","flixel/system/ui/FlxSystemButton.hx",14,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_77_changeIcon,"flixel.system.ui.FlxSystemButton","changeIcon",0x06083f51,"flixel.system.ui.FlxSystemButton.changeIcon","flixel/system/ui/FlxSystemButton.hx",77,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_87_destroy,"flixel.system.ui.FlxSystemButton","destroy",0x554d4db2,"flixel.system.ui.FlxSystemButton.destroy","flixel/system/ui/FlxSystemButton.hx",87,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_98_onMouseUp,"flixel.system.ui.FlxSystemButton","onMouseUp",0xe1786b39,"flixel.system.ui.FlxSystemButton.onMouseUp","flixel/system/ui/FlxSystemButton.hx",98,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_110_onMouseDown,"flixel.system.ui.FlxSystemButton","onMouseDown",0x759770c0,"flixel.system.ui.FlxSystemButton.onMouseDown","flixel/system/ui/FlxSystemButton.hx",110,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_115_onMouseOver,"flixel.system.ui.FlxSystemButton","onMouseOver",0x7ce209b2,"flixel.system.ui.FlxSystemButton.onMouseOver","flixel/system/ui/FlxSystemButton.hx",115,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_121_onMouseOut,"flixel.system.ui.FlxSystemButton","onMouseOut",0x67e0ddf0,"flixel.system.ui.FlxSystemButton.onMouseOut","flixel/system/ui/FlxSystemButton.hx",121,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_126_set_toggled,"flixel.system.ui.FlxSystemButton","set_toggled",0xc0fd262b,"flixel.system.ui.FlxSystemButton.set_toggled","flixel/system/ui/FlxSystemButton.hx",126,0x167fa379)
namespace flixel{
namespace _hx_system{
namespace ui{

void FlxSystemButton_obj::__construct( ::openfl::_legacy::display::BitmapData Icon, ::Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode){
bool ToggleMode = __o_ToggleMode.Default(false);
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_14_new)
HXLINE(  42)		this->_mouseDown = false;
HXLINE(  33)		this->toggled = false;
HXLINE(  29)		this->toggleMode = false;
HXLINE(  24)		this->enabled = true;
HXLINE(  53)		super::__construct();
HXLINE(  55)		if (hx::IsNotNull( Icon )) {
HXLINE(  56)			this->changeIcon(Icon);
            		}
HXLINE(  62)		this->upHandler = UpHandler;
HXLINE(  63)		this->toggleMode = ToggleMode;
HXLINE(  65)		this->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
HXLINE(  66)		this->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
HXLINE(  67)		this->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null(),null(),null());
HXLINE(  68)		this->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null(),null(),null());
            	}

Dynamic FlxSystemButton_obj::__CreateEmpty() { return new FlxSystemButton_obj; }

void *FlxSystemButton_obj::_hx_vtable = 0;

Dynamic FlxSystemButton_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxSystemButton_obj > _hx_result = new FlxSystemButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxSystemButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ecd4574) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x2ecd4574;
		}
	} else {
		if (inClassId<=(int)0x3d2d7617) {
			return inClassId==(int)0x306ae42a || inClassId==(int)0x3d2d7617;
		} else {
			return inClassId==(int)0x5fcdb6d3;
		}
	}
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_system_ui_FlxSystemButton__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::_hx_system::ui::FlxSystemButton_obj::destroy,
};

void *FlxSystemButton_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_system_ui_FlxSystemButton__hx_flixel_util_IFlxDestroyable;
	}
	return super::_hx_getInterface(inHash);
}

void FlxSystemButton_obj::changeIcon( ::openfl::_legacy::display::BitmapData Icon){
            	HX_GC_STACKFRAME(&_hx_pos_9eece198099547db_77_changeIcon)
HXLINE(  78)		if (hx::IsNotNull( this->_icon )) {
HXLINE(  79)			this->removeChild(this->_icon);
            		}
HXLINE(  81)		::flixel::_hx_system::debug::DebuggerUtil_obj::fixSize(Icon);
HXLINE(  82)		this->_icon =  ::openfl::_legacy::display::Bitmap_obj::__alloc( HX_CTX ,Icon,null(),null());
HXLINE(  83)		this->addChild(this->_icon);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,changeIcon,(void))

void FlxSystemButton_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_87_destroy)
HXLINE(  88)		this->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
HXLINE(  89)		this->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null());
HXLINE(  90)		this->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null());
HXLINE(  91)		this->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null());
HXLINE(  92)		this->_icon = null();
HXLINE(  93)		this->upHandler = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSystemButton_obj,destroy,(void))

void FlxSystemButton_obj::onMouseUp( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_98_onMouseUp)
HXLINE(  98)		bool _hx_tmp;
HXDLIN(  98)		if (this->enabled) {
HXLINE(  98)			_hx_tmp = this->_mouseDown;
            		}
            		else {
HXLINE(  98)			_hx_tmp = false;
            		}
HXDLIN(  98)		if (_hx_tmp) {
HXLINE( 100)			this->set_toggled(!(this->toggled));
HXLINE( 101)			this->_mouseDown = false;
HXLINE( 103)			if (hx::IsNotNull( this->upHandler )) {
HXLINE( 104)				this->upHandler();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseUp,(void))

void FlxSystemButton_obj::onMouseDown( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_110_onMouseDown)
HXLINE( 110)		this->_mouseDown = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseDown,(void))

void FlxSystemButton_obj::onMouseOver( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_115_onMouseOver)
HXLINE( 115)		if (this->enabled) {
HXLINE( 116)			 ::flixel::_hx_system::ui::FlxSystemButton _g = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 116)			_g->set_alpha((_g->get_alpha() - ((Float)0.2)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseOver,(void))

void FlxSystemButton_obj::onMouseOut( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_121_onMouseOut)
HXLINE( 121)		if (this->enabled) {
HXLINE( 122)			 ::flixel::_hx_system::ui::FlxSystemButton _g = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 122)			_g->set_alpha((_g->get_alpha() + ((Float)0.2)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseOut,(void))

bool FlxSystemButton_obj::set_toggled(bool Value){
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_126_set_toggled)
HXLINE( 127)		if (this->toggleMode) {
HXLINE( 128)			Float _hx_tmp;
HXDLIN( 128)			if (Value) {
HXLINE( 128)				_hx_tmp = ((Float)0.3);
            			}
            			else {
HXLINE( 128)				_hx_tmp = (int)1;
            			}
HXDLIN( 128)			this->set_alpha(_hx_tmp);
            		}
HXLINE( 129)		return (this->toggled = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,set_toggled,return )


hx::ObjectPtr< FlxSystemButton_obj > FlxSystemButton_obj::__new( ::openfl::_legacy::display::BitmapData Icon, ::Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode) {
	hx::ObjectPtr< FlxSystemButton_obj > __this = new FlxSystemButton_obj();
	__this->__construct(Icon,UpHandler,__o_ToggleMode);
	return __this;
}

hx::ObjectPtr< FlxSystemButton_obj > FlxSystemButton_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_legacy::display::BitmapData Icon, ::Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode) {
	FlxSystemButton_obj *__this = (FlxSystemButton_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxSystemButton_obj), true, "flixel.system.ui.FlxSystemButton"));
	*(void **)__this = FlxSystemButton_obj::_hx_vtable;
	__this->__construct(Icon,UpHandler,__o_ToggleMode);
	return __this;
}

FlxSystemButton_obj::FlxSystemButton_obj()
{
}

void FlxSystemButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSystemButton);
	HX_MARK_MEMBER_NAME(upHandler,"upHandler");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(toggleMode,"toggleMode");
	HX_MARK_MEMBER_NAME(toggled,"toggled");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(_mouseDown,"_mouseDown");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSystemButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(upHandler,"upHandler");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(toggleMode,"toggleMode");
	HX_VISIT_MEMBER_NAME(toggled,"toggled");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(_mouseDown,"_mouseDown");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxSystemButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return hx::Val( _icon ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return hx::Val( enabled ); }
		if (HX_FIELD_EQ(inName,"toggled") ) { return hx::Val( toggled ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"upHandler") ) { return hx::Val( upHandler ); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return hx::Val( onMouseUp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleMode") ) { return hx::Val( toggleMode ); }
		if (HX_FIELD_EQ(inName,"_mouseDown") ) { return hx::Val( _mouseDown ); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return hx::Val( changeIcon_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return hx::Val( onMouseOut_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return hx::Val( onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return hx::Val( onMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_toggled") ) { return hx::Val( set_toggled_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxSystemButton_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast<  ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggled") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_toggled(inValue.Cast< bool >()) );toggled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"upHandler") ) { upHandler=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleMode") ) { toggleMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseDown") ) { _mouseDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSystemButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("toggleMode","\x17","\x19","\x17","\xe0"));
	outFields->push(HX_HCSTRING("toggled","\x50","\xe2","\x03","\xcc"));
	outFields->push(HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"));
	outFields->push(HX_HCSTRING("_mouseDown","\xe8","\x2c","\x65","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxSystemButton_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSystemButton_obj,upHandler),HX_HCSTRING("upHandler","\xaf","\xc2","\x8d","\x81")},
	{hx::fsBool,(int)offsetof(FlxSystemButton_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsBool,(int)offsetof(FlxSystemButton_obj,toggleMode),HX_HCSTRING("toggleMode","\x17","\x19","\x17","\xe0")},
	{hx::fsBool,(int)offsetof(FlxSystemButton_obj,toggled),HX_HCSTRING("toggled","\x50","\xe2","\x03","\xcc")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(FlxSystemButton_obj,_icon),HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8")},
	{hx::fsBool,(int)offsetof(FlxSystemButton_obj,_mouseDown),HX_HCSTRING("_mouseDown","\xe8","\x2c","\x65","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxSystemButton_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSystemButton_obj_sMemberFields[] = {
	HX_HCSTRING("upHandler","\xaf","\xc2","\x8d","\x81"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("toggleMode","\x17","\x19","\x17","\xe0"),
	HX_HCSTRING("toggled","\x50","\xe2","\x03","\xcc"),
	HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"),
	HX_HCSTRING("_mouseDown","\xe8","\x2c","\x65","\x4a"),
	HX_HCSTRING("changeIcon","\x09","\x1d","\xfc","\x1f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseOver","\xfa","\x2c","\x50","\x18"),
	HX_HCSTRING("onMouseOut","\xa8","\xbb","\xd4","\x81"),
	HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"),
	::String(null()) };

static void FlxSystemButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSystemButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSystemButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSystemButton_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSystemButton_obj::__mClass;

void FlxSystemButton_obj::__register()
{
	hx::Object *dummy = new FlxSystemButton_obj;
	FlxSystemButton_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.ui.FlxSystemButton","\x26","\x09","\x30","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxSystemButton_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxSystemButton_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSystemButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSystemButton_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSystemButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSystemButton_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace ui
