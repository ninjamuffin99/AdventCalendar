// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
#ifndef INCLUDED_openfl__legacy_events_TouchEvent
#include <openfl/_legacy/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_ui_Multitouch
#include <openfl/_legacy/ui/Multitouch.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_267129cd6cd94d38_160_new,"flixel.input.touch.FlxTouchManager","new",0x0e972b2d,"flixel.input.touch.FlxTouchManager.new","flixel/input/touch/FlxTouchManager.hx",160,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_39_getByID,"flixel.input.touch.FlxTouchManager","getByID",0x18c2ee75,"flixel.input.touch.FlxTouchManager.getByID","flixel/input/touch/FlxTouchManager.hx",39,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_47_getFirst,"flixel.input.touch.FlxTouchManager","getFirst",0xd4f3e5cd,"flixel.input.touch.FlxTouchManager.getFirst","flixel/input/touch/FlxTouchManager.hx",47,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_62_destroy,"flixel.input.touch.FlxTouchManager","destroy",0x29a37247,"flixel.input.touch.FlxTouchManager.destroy","flixel/input/touch/FlxTouchManager.hx",62,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_85_justStarted,"flixel.input.touch.FlxTouchManager","justStarted",0x4159d442,"flixel.input.touch.FlxTouchManager.justStarted","flixel/input/touch/FlxTouchManager.hx",85,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_116_justReleased,"flixel.input.touch.FlxTouchManager","justReleased",0x217e7e9c,"flixel.input.touch.FlxTouchManager.justReleased","flixel/input/touch/FlxTouchManager.hx",116,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_143_reset,"flixel.input.touch.FlxTouchManager","reset",0x90b1b1dc,"flixel.input.touch.FlxTouchManager.reset","flixel/input/touch/FlxTouchManager.hx",143,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_176_handleTouchBegin,"flixel.input.touch.FlxTouchManager","handleTouchBegin",0x51a5a0c5,"flixel.input.touch.FlxTouchManager.handleTouchBegin","flixel/input/touch/FlxTouchManager.hx",176,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_193_handleTouchEnd,"flixel.input.touch.FlxTouchManager","handleTouchEnd",0xa3529b77,"flixel.input.touch.FlxTouchManager.handleTouchEnd","flixel/input/touch/FlxTouchManager.hx",193,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_206_handleTouchMove,"flixel.input.touch.FlxTouchManager","handleTouchMove",0x4a3ff3f5,"flixel.input.touch.FlxTouchManager.handleTouchMove","flixel/input/touch/FlxTouchManager.hx",206,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_222_add,"flixel.input.touch.FlxTouchManager","add",0x0e8d4cee,"flixel.input.touch.FlxTouchManager.add","flixel/input/touch/FlxTouchManager.hx",222,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_237_recycle,"flixel.input.touch.FlxTouchManager","recycle",0x3ca95560,"flixel.input.touch.FlxTouchManager.recycle","flixel/input/touch/FlxTouchManager.hx",237,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_253_update,"flixel.input.touch.FlxTouchManager","update",0x8957295c,"flixel.input.touch.FlxTouchManager.update","flixel/input/touch/FlxTouchManager.hx",253,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_278_onFocus,"flixel.input.touch.FlxTouchManager","onFocus",0x9fe44386,"flixel.input.touch.FlxTouchManager.onFocus","flixel/input/touch/FlxTouchManager.hx",278,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_282_onFocusLost,"flixel.input.touch.FlxTouchManager","onFocusLost",0x9504548a,"flixel.input.touch.FlxTouchManager.onFocusLost","flixel/input/touch/FlxTouchManager.hx",282,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_18_boot,"flixel.input.touch.FlxTouchManager","boot",0xadc79cc5,"flixel.input.touch.FlxTouchManager.boot","flixel/input/touch/FlxTouchManager.hx",18,0xc27259e6)
namespace flixel{
namespace input{
namespace touch{

void FlxTouchManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_267129cd6cd94d38_160_new)
HXLINE( 161)		this->list = ::Array_obj< ::Dynamic>::__new();
HXLINE( 162)		this->_inactiveTouches = ::Array_obj< ::Dynamic>::__new();
HXLINE( 163)		this->_touchesCache =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 164)		::flixel::input::touch::FlxTouchManager_obj::maxTouchPoints = ::openfl::_legacy::ui::Multitouch_obj::maxTouchPoints;
HXLINE( 165)		::openfl::_legacy::ui::Multitouch_obj::set_inputMode((int)2);
HXLINE( 167)		::openfl::_legacy::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_legacy::events::TouchEvent_obj::TOUCH_BEGIN,this->handleTouchBegin_dyn(),null(),null(),null());
HXLINE( 168)		::openfl::_legacy::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_legacy::events::TouchEvent_obj::TOUCH_END,this->handleTouchEnd_dyn(),null(),null(),null());
HXLINE( 169)		::openfl::_legacy::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_legacy::events::TouchEvent_obj::TOUCH_MOVE,this->handleTouchMove_dyn(),null(),null(),null());
            	}

Dynamic FlxTouchManager_obj::__CreateEmpty() { return new FlxTouchManager_obj; }

void *FlxTouchManager_obj::_hx_vtable = 0;

Dynamic FlxTouchManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxTouchManager_obj > _hx_result = new FlxTouchManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTouchManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ca701af;
}

static ::flixel::input::IFlxInputManager_obj _hx_flixel_input_touch_FlxTouchManager__hx_flixel_input_IFlxInputManager= {
	( void (hx::Object::*)())&::flixel::input::touch::FlxTouchManager_obj::destroy,
	( void (hx::Object::*)())&::flixel::input::touch::FlxTouchManager_obj::reset,
	( void (hx::Object::*)())&::flixel::input::touch::FlxTouchManager_obj::update,
	( void (hx::Object::*)())&::flixel::input::touch::FlxTouchManager_obj::onFocus,
	( void (hx::Object::*)())&::flixel::input::touch::FlxTouchManager_obj::onFocusLost,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_touch_FlxTouchManager__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::input::touch::FlxTouchManager_obj::destroy,
};

void *FlxTouchManager_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x65dd217a: return &_hx_flixel_input_touch_FlxTouchManager__hx_flixel_input_IFlxInputManager;
		case (int)0xd4fe2fcd: return &_hx_flixel_input_touch_FlxTouchManager__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::input::touch::FlxTouch FlxTouchManager_obj::getByID(int TouchPointID){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_39_getByID)
HXLINE(  39)		return this->_touchesCache->get(TouchPointID).StaticCast<  ::flixel::input::touch::FlxTouch >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,getByID,return )

 ::flixel::input::touch::FlxTouch FlxTouchManager_obj::getFirst(){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_47_getFirst)
HXLINE(  47)		if (hx::IsNotNull( this->list->__get((int)0).StaticCast<  ::flixel::input::touch::FlxTouch >() )) {
HXLINE(  49)			return this->list->__get((int)0).StaticCast<  ::flixel::input::touch::FlxTouch >();
            		}
            		else {
HXLINE(  53)			return null();
            		}
HXLINE(  47)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,getFirst,return )

void FlxTouchManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_62_destroy)
HXLINE(  63)		{
HXLINE(  63)			int _g = (int)0;
HXDLIN(  63)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  63)			while((_g < _g1->length)){
HXLINE(  63)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN(  63)				_g = (_g + (int)1);
HXLINE(  65)				touch->destroy();
            			}
            		}
HXLINE(  67)		this->list = null();
HXLINE(  69)		{
HXLINE(  69)			int _g2 = (int)0;
HXDLIN(  69)			::Array< ::Dynamic> _g11 = this->_inactiveTouches;
HXDLIN(  69)			while((_g2 < _g11->length)){
HXLINE(  69)				 ::flixel::input::touch::FlxTouch touch1 = _g11->__get(_g2).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN(  69)				_g2 = (_g2 + (int)1);
HXLINE(  71)				touch1->destroy();
            			}
            		}
HXLINE(  73)		this->_inactiveTouches = null();
HXLINE(  75)		this->_touchesCache = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,destroy,(void))

::Array< ::Dynamic> FlxTouchManager_obj::justStarted(::Array< ::Dynamic> TouchArray){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_85_justStarted)
HXLINE(  86)		if (hx::IsNull( TouchArray )) {
HXLINE(  88)			TouchArray = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE(  91)		int touchLen = TouchArray->length;
HXLINE(  93)		if ((touchLen > (int)0)) {
HXLINE(  95)			TouchArray->removeRange((int)0,touchLen);
            		}
HXLINE(  98)		{
HXLINE(  98)			int _g = (int)0;
HXDLIN(  98)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  98)			while((_g < _g1->length)){
HXLINE(  98)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN(  98)				_g = (_g + (int)1);
HXLINE( 100)				if ((touch->input->current == (int)2)) {
HXLINE( 102)					TouchArray->push(touch);
            				}
            			}
            		}
HXLINE( 106)		return TouchArray;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justStarted,return )

::Array< ::Dynamic> FlxTouchManager_obj::justReleased(::Array< ::Dynamic> TouchArray){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_116_justReleased)
HXLINE( 117)		if (hx::IsNull( TouchArray )) {
HXLINE( 119)			TouchArray = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE( 122)		int touchLen = TouchArray->length;
HXLINE( 123)		if ((touchLen > (int)0)) {
HXLINE( 125)			TouchArray->removeRange((int)0,touchLen);
            		}
HXLINE( 128)		{
HXLINE( 128)			int _g = (int)0;
HXDLIN( 128)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 128)			while((_g < _g1->length)){
HXLINE( 128)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN( 128)				_g = (_g + (int)1);
HXLINE( 130)				if ((touch->input->current == (int)-1)) {
HXLINE( 132)					TouchArray->push(touch);
            				}
            			}
            		}
HXLINE( 136)		return TouchArray;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justReleased,return )

void FlxTouchManager_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_143_reset)
HXLINE( 144)		{
HXLINE( 144)			 ::Dynamic key = this->_touchesCache->keys();
HXDLIN( 144)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 144)				int key1 = ( (int)(key->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 146)				this->_touchesCache->remove(key1);
            			}
            		}
HXLINE( 149)		{
HXLINE( 149)			int _g = (int)0;
HXDLIN( 149)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 149)			while((_g < _g1->length)){
HXLINE( 149)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN( 149)				_g = (_g + (int)1);
HXLINE( 151)				touch->input->reset();
HXLINE( 152)				this->_inactiveTouches->push(touch);
            			}
            		}
HXLINE( 155)		this->list->removeRange((int)0,this->list->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,reset,(void))

void FlxTouchManager_obj::handleTouchBegin( ::openfl::_legacy::events::TouchEvent FlashEvent){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_176_handleTouchBegin)
HXLINE( 177)		 ::flixel::input::touch::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXLINE( 178)		if (hx::IsNotNull( touch )) {
HXLINE( 180)			int _hx_tmp = ::Std_obj::_hx_int(FlashEvent->stageX);
HXDLIN( 180)			touch->setXY(_hx_tmp,::Std_obj::_hx_int(FlashEvent->stageY));
            		}
            		else {
HXLINE( 184)			int touch1 = ::Std_obj::_hx_int(FlashEvent->stageX);
HXDLIN( 184)			int touch2 = ::Std_obj::_hx_int(FlashEvent->stageY);
HXDLIN( 184)			touch = this->recycle(touch1,touch2,FlashEvent->touchPointID);
            		}
HXLINE( 186)		touch->input->press();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchBegin,(void))

void FlxTouchManager_obj::handleTouchEnd( ::openfl::_legacy::events::TouchEvent FlashEvent){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_193_handleTouchEnd)
HXLINE( 194)		 ::flixel::input::touch::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXLINE( 196)		if (hx::IsNotNull( touch )) {
HXLINE( 198)			touch->input->release();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchEnd,(void))

void FlxTouchManager_obj::handleTouchMove( ::openfl::_legacy::events::TouchEvent FlashEvent){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_206_handleTouchMove)
HXLINE( 207)		 ::flixel::input::touch::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXLINE( 209)		if (hx::IsNotNull( touch )) {
HXLINE( 211)			int _hx_tmp = ::Std_obj::_hx_int(FlashEvent->stageX);
HXDLIN( 211)			touch->setXY(_hx_tmp,::Std_obj::_hx_int(FlashEvent->stageY));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchMove,(void))

 ::flixel::input::touch::FlxTouch FlxTouchManager_obj::add( ::flixel::input::touch::FlxTouch Touch){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_222_add)
HXLINE( 223)		this->list->push(Touch);
HXLINE( 224)		this->_touchesCache->set(( (int)(Touch->input->ID) ),Touch);
HXLINE( 225)		return Touch;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,add,return )

 ::flixel::input::touch::FlxTouch FlxTouchManager_obj::recycle(int X,int Y,int PointID){
            	HX_GC_STACKFRAME(&_hx_pos_267129cd6cd94d38_237_recycle)
HXLINE( 238)		if ((this->_inactiveTouches->length > (int)0)) {
HXLINE( 240)			 ::flixel::input::touch::FlxTouch touch = this->_inactiveTouches->pop().StaticCast<  ::flixel::input::touch::FlxTouch >();
HXLINE( 241)			touch->recycle(X,Y,PointID);
HXLINE( 242)			return this->add(touch);
            		}
HXLINE( 245)		return this->add( ::flixel::input::touch::FlxTouch_obj::__alloc( HX_CTX ,X,Y,PointID));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTouchManager_obj,recycle,return )

void FlxTouchManager_obj::update(){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_253_update)
HXLINE( 254)		int i = (this->list->length - (int)1);
HXLINE( 255)		 ::flixel::input::touch::FlxTouch touch;
HXLINE( 257)		while((i >= (int)0)){
HXLINE( 259)			touch = this->list->__get(i).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXLINE( 262)			bool _hx_tmp;
HXDLIN( 262)			 ::flixel::input::FlxInput _this = touch->input;
HXDLIN( 262)			bool _hx_tmp1;
HXDLIN( 262)			if ((_this->current != (int)0)) {
HXLINE( 262)				_hx_tmp1 = (_this->current == (int)-1);
            			}
            			else {
HXLINE( 262)				_hx_tmp1 = true;
            			}
HXDLIN( 262)			if (_hx_tmp1) {
HXLINE( 262)				_hx_tmp = (touch->input->current != (int)-1);
            			}
            			else {
HXLINE( 262)				_hx_tmp = false;
            			}
HXDLIN( 262)			if (_hx_tmp) {
HXLINE( 264)				touch->input->reset();
HXLINE( 265)				this->_touchesCache->remove(( (int)(touch->input->ID) ));
HXLINE( 266)				this->list->removeRange(i,(int)1);
HXLINE( 267)				this->_inactiveTouches->push(touch);
            			}
            			else {
HXLINE( 271)				touch->update();
            			}
HXLINE( 274)			i = (i - (int)1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,update,(void))

void FlxTouchManager_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_278_onFocus)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocus,(void))

void FlxTouchManager_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_282_onFocusLost)
HXLINE( 282)		this->reset();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocusLost,(void))

int FlxTouchManager_obj::maxTouchPoints;


hx::ObjectPtr< FlxTouchManager_obj > FlxTouchManager_obj::__new() {
	hx::ObjectPtr< FlxTouchManager_obj > __this = new FlxTouchManager_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxTouchManager_obj > FlxTouchManager_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxTouchManager_obj *__this = (FlxTouchManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxTouchManager_obj), true, "flixel.input.touch.FlxTouchManager"));
	*(void **)__this = FlxTouchManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxTouchManager_obj::FlxTouchManager_obj()
{
}

void FlxTouchManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouchManager);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_MARK_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_MARK_END_CLASS();
}

void FlxTouchManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_VISIT_MEMBER_NAME(_touchesCache,"_touchesCache");
}

hx::Val FlxTouchManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return hx::Val( list ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { return hx::Val( getByID_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return hx::Val( recycle_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return hx::Val( onFocus_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFirst") ) { return hx::Val( getFirst_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justStarted") ) { return hx::Val( justStarted_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return hx::Val( justReleased_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { return hx::Val( _touchesCache ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"handleTouchEnd") ) { return hx::Val( handleTouchEnd_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleTouchMove") ) { return hx::Val( handleTouchMove_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { return hx::Val( _inactiveTouches ); }
		if (HX_FIELD_EQ(inName,"handleTouchBegin") ) { return hx::Val( handleTouchBegin_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTouchManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { outValue = ( maxTouchPoints ); return true; }
	}
	return false;
}

hx::Val FlxTouchManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { _touchesCache=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { _inactiveTouches=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTouchManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { maxTouchPoints=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxTouchManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("_inactiveTouches","\x43","\x04","\x4f","\x3d"));
	outFields->push(HX_HCSTRING("_touchesCache","\xf4","\xe3","\xc3","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxTouchManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTouchManager_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTouchManager_obj,_inactiveTouches),HX_HCSTRING("_inactiveTouches","\x43","\x04","\x4f","\x3d")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxTouchManager_obj,_touchesCache),HX_HCSTRING("_touchesCache","\xf4","\xe3","\xc3","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxTouchManager_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxTouchManager_obj::maxTouchPoints,HX_HCSTRING("maxTouchPoints","\xfe","\x7e","\x0e","\x64")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxTouchManager_obj_sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("_inactiveTouches","\x43","\x04","\x4f","\x3d"),
	HX_HCSTRING("_touchesCache","\xf4","\xe3","\xc3","\x76"),
	HX_HCSTRING("getByID","\x28","\xa9","\xa5","\x13"),
	HX_HCSTRING("getFirst","\xba","\x87","\x74","\x60"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("justStarted","\x75","\x64","\xdb","\xed"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("handleTouchBegin","\xb2","\x77","\xad","\x79"),
	HX_HCSTRING("handleTouchEnd","\x24","\xed","\xe0","\x4d"),
	HX_HCSTRING("handleTouchMove","\xa8","\x19","\x39","\xdc"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	::String(null()) };

static void FlxTouchManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTouchManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

#endif

hx::Class FlxTouchManager_obj::__mClass;

static ::String FlxTouchManager_obj_sStaticFields[] = {
	HX_HCSTRING("maxTouchPoints","\xfe","\x7e","\x0e","\x64"),
	::String(null())
};

void FlxTouchManager_obj::__register()
{
	hx::Object *dummy = new FlxTouchManager_obj;
	FlxTouchManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.touch.FlxTouchManager","\xbb","\x10","\x25","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTouchManager_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTouchManager_obj::__SetStatic;
	__mClass->mMarkFunc = FlxTouchManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxTouchManager_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxTouchManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTouchManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTouchManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTouchManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTouchManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxTouchManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_18_boot)
HXLINE(  18)		maxTouchPoints = (int)0;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace touch
