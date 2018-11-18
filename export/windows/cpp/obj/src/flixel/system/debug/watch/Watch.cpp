// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicWatch
#include <flixel/system/debug/GraphicWatch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#include <flixel/system/debug/watch/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_14_new,"flixel.system.debug.watch.Watch","new",0xfeaf943a,"flixel.system.debug.watch.Watch.new","flixel/system/debug/watch/Watch.hx",14,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_36_add,"flixel.system.debug.watch.Watch","add",0xfea5b5fb,"flixel.system.debug.watch.Watch.add","flixel/system/debug/watch/Watch.hx",36,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_57_isInvalid,"flixel.system.debug.watch.Watch","isInvalid",0x369d7b87,"flixel.system.debug.watch.Watch.isInvalid","flixel/system/debug/watch/Watch.hx",57,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_69_getExistingEntry,"flixel.system.debug.watch.Watch","getExistingEntry",0xcc1e3f57,"flixel.system.debug.watch.Watch.getExistingEntry","flixel/system/debug/watch/Watch.hx",69,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_84_addEntry,"flixel.system.debug.watch.Watch","addEntry",0xc2d1a477,"flixel.system.debug.watch.Watch.addEntry","flixel/system/debug/watch/Watch.hx",84,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_92_remove,"flixel.system.debug.watch.Watch","remove",0xa5c13caa,"flixel.system.debug.watch.Watch.remove","flixel/system/debug/watch/Watch.hx",92,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_99_removeEntry,"flixel.system.debug.watch.Watch","removeEntry",0x44a48368,"flixel.system.debug.watch.Watch.removeEntry","flixel/system/debug/watch/Watch.hx",99,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_107_removeAll,"flixel.system.debug.watch.Watch","removeAll",0xc23c3a97,"flixel.system.debug.watch.Watch.removeAll","flixel/system/debug/watch/Watch.hx",107,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_120_update,"flixel.system.debug.watch.Watch","update",0x283e266f,"flixel.system.debug.watch.Watch.update","flixel/system/debug/watch/Watch.hx",120,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_125_updateSize,"flixel.system.debug.watch.Watch","updateSize",0x79f056d0,"flixel.system.debug.watch.Watch.updateSize","flixel/system/debug/watch/Watch.hx",125,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_135_resetEntries,"flixel.system.debug.watch.Watch","resetEntries",0x423b6427,"flixel.system.debug.watch.Watch.resetEntries","flixel/system/debug/watch/Watch.hx",135,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_145_getMaxNameWidth,"flixel.system.debug.watch.Watch","getMaxNameWidth",0x1ee45d07,"flixel.system.debug.watch.Watch.getMaxNameWidth","flixel/system/debug/watch/Watch.hx",145,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_150_getMaxMinWidth,"flixel.system.debug.watch.Watch","getMaxMinWidth",0x4606f748,"flixel.system.debug.watch.Watch.getMaxMinWidth","flixel/system/debug/watch/Watch.hx",150,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_154_getMax,"flixel.system.debug.watch.Watch","getMax",0x445ae414,"flixel.system.debug.watch.Watch.getMax","flixel/system/debug/watch/Watch.hx",154,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_17_boot,"flixel.system.debug.watch.Watch","boot",0xd30b1f18,"flixel.system.debug.watch.Watch.boot","flixel/system/debug/watch/Watch.hx",17,0x446c9b58)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

void Watch_obj::__construct(hx::Null< bool >  __o_closable){
bool closable = __o_closable.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_14_new)
HXLINE(  21)		this->entries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  20)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)2,(int)15);
HXDLIN(  20)		point->_inPool = false;
HXDLIN(  20)		this->entriesContainerOffset = point;
HXLINE(  25)		super::__construct(HX_("Watch",2f,86,52,58), ::flixel::_hx_system::debug::GraphicWatch_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()),(int)0,(int)0,true,null(),closable);
HXLINE(  27)		this->entriesContainer =  ::openfl::_legacy::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  28)		this->entriesContainer->set_x(this->entriesContainerOffset->x);
HXLINE(  29)		this->entriesContainer->set_y(this->entriesContainerOffset->y);
HXLINE(  30)		this->addChild(this->entriesContainer);
HXLINE(  32)		::flixel::FlxG_obj::signals->stateSwitched->add(this->removeAll_dyn());
            	}

Dynamic Watch_obj::__CreateEmpty() { return new Watch_obj; }

void *Watch_obj::_hx_vtable = 0;

Dynamic Watch_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Watch_obj > _hx_result = new Watch_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Watch_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3934d2c4) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a || inClassId==(int)0x3934d2c4;
		}
	} else {
		if (inClassId<=(int)0x5fcdb6d3) {
			return inClassId==(int)0x3d2d7617 || inClassId==(int)0x5fcdb6d3;
		} else {
			return inClassId==(int)0x619ca9b8;
		}
	}
}

void Watch_obj::add(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_36_add)
HXLINE(  37)		if (this->isInvalid(displayName,data)) {
HXLINE(  38)			return;
            		}
HXLINE(  40)		 ::flixel::_hx_system::debug::watch::WatchEntry existing = this->getExistingEntry(displayName,data);
HXLINE(  41)		if (hx::IsNotNull( existing )) {
HXLINE(  43)			if ((_hx_getEnumValueIndex(data) == (int)1)) {
HXLINE(  45)				::String value = data->_hx_getString(0);
HXLINE(  46)				existing->data = data;
            			}
HXLINE(  49)			return;
            		}
HXLINE(  52)		this->addEntry(displayName,data);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,add,(void))

bool Watch_obj::isInvalid(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_57_isInvalid)
HXLINE(  57)		switch((int)(_hx_getEnumValueIndex(data))){
            			case (int)0: {
HXLINE(  59)				::String field = data->_hx_getString(1);
HXDLIN(  59)				 ::Dynamic object = data->_hx_getObject(0);
HXLINE(  60)				if (hx::IsNotNull( object )) {
HXLINE(  60)					return hx::IsNull( field );
            				}
            				else {
HXLINE(  60)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  61)				::String value = data->_hx_getString(0);
HXLINE(  62)				if (hx::IsNotNull( displayName )) {
HXLINE(  62)					return (displayName.length == (int)0);
            				}
            				else {
HXLINE(  62)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  63)				::String expression = data->_hx_getString(0);
HXLINE(  64)				if (hx::IsNotNull( expression )) {
HXLINE(  64)					return (expression.length == (int)0);
            				}
            				else {
HXLINE(  64)					return true;
            				}
            			}
            			break;
            		}
HXLINE(  57)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,isInvalid,return )

 ::flixel::_hx_system::debug::watch::WatchEntry Watch_obj::getExistingEntry(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_69_getExistingEntry)
HXLINE(  70)		{
HXLINE(  70)			int _g = (int)0;
HXDLIN(  70)			::Array< ::Dynamic> _g1 = this->entries;
HXDLIN(  70)			while((_g < _g1->length)){
HXLINE(  70)				 ::flixel::_hx_system::debug::watch::WatchEntry entry = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
HXDLIN(  70)				_g = (_g + (int)1);
HXLINE(  72)				bool _hx_tmp;
HXDLIN(  72)				if (hx::IsNotNull( data )) {
HXLINE(  72)					if ((_hx_getEnumValueIndex(data) == (int)1)) {
HXLINE(  72)						_hx_tmp = true;
            					}
            					else {
HXLINE(  72)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(  72)					_hx_tmp = true;
            				}
HXDLIN(  72)				if (_hx_tmp) {
HXLINE(  74)					if ((entry->displayName == displayName)) {
HXLINE(  75)						return entry;
            					}
            				}
            				else {
HXLINE(  77)					if (::Type_obj::enumEq(entry->data,data)) {
HXLINE(  78)						return entry;
            					}
            				}
            			}
            		}
HXLINE(  80)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,getExistingEntry,return )

void Watch_obj::addEntry(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data){
            	HX_GC_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_84_addEntry)
HXLINE(  85)		 ::flixel::_hx_system::debug::watch::WatchEntry entry =  ::flixel::_hx_system::debug::watch::WatchEntry_obj::__alloc( HX_CTX ,displayName,data,this->removeEntry_dyn());
HXLINE(  86)		this->entries->push(entry);
HXLINE(  87)		this->entriesContainer->addChild(entry);
HXLINE(  88)		this->resetEntries();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,addEntry,(void))

void Watch_obj::remove(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_92_remove)
HXLINE(  93)		 ::flixel::_hx_system::debug::watch::WatchEntry existing = this->getExistingEntry(displayName,data);
HXLINE(  94)		if (hx::IsNotNull( existing )) {
HXLINE(  95)			this->removeEntry(existing);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,remove,(void))

void Watch_obj::removeEntry( ::flixel::_hx_system::debug::watch::WatchEntry entry){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_99_removeEntry)
HXLINE( 100)		{
HXLINE( 100)			::Array< ::Dynamic> array = this->entries;
HXDLIN( 100)			int index = array->indexOf(entry,null());
HXDLIN( 100)			if ((index != (int)-1)) {
HXLINE( 100)				array[index] = array->__get((array->length - (int)1)).StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
HXDLIN( 100)				array->pop().StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
            			}
            		}
HXLINE( 101)		this->entriesContainer->removeChild(entry);
HXLINE( 102)		entry->destroy();
HXLINE( 103)		this->resetEntries();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Watch_obj,removeEntry,(void))

void Watch_obj::removeAll(){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_107_removeAll)
HXLINE( 108)		{
HXLINE( 108)			int _g1 = (int)0;
HXDLIN( 108)			int _g = this->entries->length;
HXDLIN( 108)			while((_g1 < _g)){
HXLINE( 108)				_g1 = (_g1 + (int)1);
HXDLIN( 108)				int i = (_g1 - (int)1);
HXLINE( 110)				 ::flixel::_hx_system::debug::watch::WatchEntry entry = this->entries->__get(i).StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
HXLINE( 111)				this->entriesContainer->removeChild(entry);
HXLINE( 112)				entry->destroy();
            			}
            		}
HXLINE( 114)		this->entries->removeRange((int)0,this->entries->length);
HXLINE( 115)		this->resetEntries();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,removeAll,(void))

void Watch_obj::update(){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_120_update)
HXLINE( 120)		int _g = (int)0;
HXDLIN( 120)		::Array< ::Dynamic> _g1 = this->entries;
HXDLIN( 120)		while((_g < _g1->length)){
HXLINE( 120)			 ::flixel::_hx_system::debug::watch::WatchEntry entry = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
HXDLIN( 120)			_g = (_g + (int)1);
HXLINE( 121)			entry->updateValue();
            		}
            	}


void Watch_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_125_updateSize)
HXLINE( 126)		 ::openfl::_legacy::geom::Point _hx_tmp = this->minSize;
HXLINE( 127)		Float _hx_tmp1 = this->getMaxMinWidth();
HXDLIN( 127)		Float _hx_tmp2 = (_hx_tmp1 + this->entriesContainerOffset->x);
HXLINE( 128)		Float _hx_tmp3 = this->entriesContainer->get_height();
HXLINE( 126)		_hx_tmp->setTo(_hx_tmp2,(_hx_tmp3 + this->entriesContainerOffset->y));
HXLINE( 129)		this->super::updateSize();
HXLINE( 130)		this->resetEntries();
            	}


void Watch_obj::resetEntries(){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_135_resetEntries)
HXLINE( 135)		int _g1 = (int)0;
HXDLIN( 135)		int _g = this->entries->length;
HXDLIN( 135)		while((_g1 < _g)){
HXLINE( 135)			_g1 = (_g1 + (int)1);
HXDLIN( 135)			int i = (_g1 - (int)1);
HXLINE( 137)			 ::flixel::_hx_system::debug::watch::WatchEntry entry = this->entries->__get(i).StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
HXLINE( 138)			entry->set_y((i * (int)15));
HXLINE( 139)			Float _hx_tmp = this->getMaxNameWidth();
HXDLIN( 139)			entry->updateSize(_hx_tmp,this->_width);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,resetEntries,(void))

Float Watch_obj::getMaxNameWidth(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		Float _hx_run( ::flixel::_hx_system::debug::watch::WatchEntry entry){
            			HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_145_getMaxNameWidth)
HXLINE( 145)			return entry->getNameWidth();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_145_getMaxNameWidth)
HXLINE( 145)		return this->getMax( ::Dynamic(new _hx_Closure_0()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,getMaxNameWidth,return )

Float Watch_obj::getMaxMinWidth(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		Float _hx_run( ::flixel::_hx_system::debug::watch::WatchEntry entry){
            			HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_150_getMaxMinWidth)
HXLINE( 150)			return entry->getMinWidth();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_150_getMaxMinWidth)
HXLINE( 150)		return this->getMax( ::Dynamic(new _hx_Closure_0()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,getMaxMinWidth,return )

Float Watch_obj::getMax( ::Dynamic getValue){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_154_getMax)
HXLINE( 155)		Float max = ((Float)0.0);
HXLINE( 156)		{
HXLINE( 156)			int _g = (int)0;
HXDLIN( 156)			::Array< ::Dynamic> _g1 = this->entries;
HXDLIN( 156)			while((_g < _g1->length)){
HXLINE( 156)				 ::flixel::_hx_system::debug::watch::WatchEntry entry = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
HXDLIN( 156)				_g = (_g + (int)1);
HXLINE( 158)				Float value = ( (Float)(getValue(entry)) );
HXLINE( 159)				if ((value > max)) {
HXLINE( 160)					max = value;
            				}
            			}
            		}
HXLINE( 162)		return max;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Watch_obj,getMax,return )

int Watch_obj::LINE_HEIGHT;


hx::ObjectPtr< Watch_obj > Watch_obj::__new(hx::Null< bool >  __o_closable) {
	hx::ObjectPtr< Watch_obj > __this = new Watch_obj();
	__this->__construct(__o_closable);
	return __this;
}

hx::ObjectPtr< Watch_obj > Watch_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< bool >  __o_closable) {
	Watch_obj *__this = (Watch_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Watch_obj), true, "flixel.system.debug.watch.Watch"));
	*(void **)__this = Watch_obj::_hx_vtable;
	__this->__construct(__o_closable);
	return __this;
}

Watch_obj::Watch_obj()
{
}

void Watch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Watch);
	HX_MARK_MEMBER_NAME(entriesContainer,"entriesContainer");
	HX_MARK_MEMBER_NAME(entriesContainerOffset,"entriesContainerOffset");
	HX_MARK_MEMBER_NAME(entries,"entries");
	 ::flixel::_hx_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Watch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entriesContainer,"entriesContainer");
	HX_VISIT_MEMBER_NAME(entriesContainerOffset,"entriesContainerOffset");
	HX_VISIT_MEMBER_NAME(entries,"entries");
	 ::flixel::_hx_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Watch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMax") ) { return hx::Val( getMax_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"entries") ) { return hx::Val( entries ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addEntry") ) { return hx::Val( addEntry_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isInvalid") ) { return hx::Val( isInvalid_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return hx::Val( removeAll_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return hx::Val( updateSize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeEntry") ) { return hx::Val( removeEntry_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetEntries") ) { return hx::Val( resetEntries_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getMaxMinWidth") ) { return hx::Val( getMaxMinWidth_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMaxNameWidth") ) { return hx::Val( getMaxNameWidth_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"entriesContainer") ) { return hx::Val( entriesContainer ); }
		if (HX_FIELD_EQ(inName,"getExistingEntry") ) { return hx::Val( getExistingEntry_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"entriesContainerOffset") ) { return hx::Val( entriesContainerOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Watch_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"entries") ) { entries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"entriesContainer") ) { entriesContainer=inValue.Cast<  ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"entriesContainerOffset") ) { entriesContainerOffset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Watch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("entriesContainer","\xd1","\xfd","\x5e","\x72"));
	outFields->push(HX_HCSTRING("entriesContainerOffset","\x44","\xbc","\x14","\xcb"));
	outFields->push(HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Watch_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Watch_obj,entriesContainer),HX_HCSTRING("entriesContainer","\xd1","\xfd","\x5e","\x72")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(Watch_obj,entriesContainerOffset),HX_HCSTRING("entriesContainerOffset","\x44","\xbc","\x14","\xcb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Watch_obj,entries),HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Watch_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Watch_obj::LINE_HEIGHT,HX_HCSTRING("LINE_HEIGHT","\x12","\x8c","\xb0","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Watch_obj_sMemberFields[] = {
	HX_HCSTRING("entriesContainer","\xd1","\xfd","\x5e","\x72"),
	HX_HCSTRING("entriesContainerOffset","\x44","\xbc","\x14","\xcb"),
	HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("isInvalid","\x2d","\x58","\x46","\x3f"),
	HX_HCSTRING("getExistingEntry","\x71","\xe3","\x3e","\x19"),
	HX_HCSTRING("addEntry","\x91","\x9e","\xe3","\xe9"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeEntry","\x8e","\x55","\xba","\x6e"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	HX_HCSTRING("resetEntries","\x41","\x73","\x3d","\xeb"),
	HX_HCSTRING("getMaxNameWidth","\x2d","\x3a","\x85","\x7e"),
	HX_HCSTRING("getMaxMinWidth","\xe2","\x80","\xfe","\xbe"),
	HX_HCSTRING("getMax","\xae","\x43","\x22","\xa3"),
	::String(null()) };

static void Watch_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Watch_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

#endif

hx::Class Watch_obj::__mClass;

static ::String Watch_obj_sStaticFields[] = {
	HX_HCSTRING("LINE_HEIGHT","\x12","\x8c","\xb0","\xea"),
	::String(null())
};

void Watch_obj::__register()
{
	hx::Object *dummy = new Watch_obj;
	Watch_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.Watch","\x48","\xaf","\x96","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Watch_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Watch_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Watch_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Watch_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Watch_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Watch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Watch_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Watch_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_17_boot)
HXLINE(  17)		LINE_HEIGHT = (int)15;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
