// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_GraphicCursorCross
#include <flixel/system/debug/interaction/tools/GraphicCursorCross.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Pointer
#include <flixel/system/debug/interaction/tools/Pointer.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
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
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_21_new,"flixel.system.debug.interaction.tools.Pointer","new",0x18297018,"flixel.system.debug.interaction.tools.Pointer.new","flixel/system/debug/interaction/tools/Pointer.hx",21,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_31_init,"flixel.system.debug.interaction.tools.Pointer","init",0x08d15c58,"flixel.system.debug.interaction.tools.Pointer.init","flixel/system/debug/interaction/tools/Pointer.hx",31,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_42_update,"flixel.system.debug.interaction.tools.Pointer","update",0xd4dc8951,"flixel.system.debug.interaction.tools.Pointer.update","flixel/system/debug/interaction/tools/Pointer.hx",42,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_78_calculateSelectionArea,"flixel.system.debug.interaction.tools.Pointer","calculateSelectionArea",0x6774abfb,"flixel.system.debug.interaction.tools.Pointer.calculateSelectionArea","flixel/system/debug/interaction/tools/Pointer.hx",78,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_102_startSelection,"flixel.system.debug.interaction.tools.Pointer","startSelection",0x524d52d2,"flixel.system.debug.interaction.tools.Pointer.startSelection","flixel/system/debug/interaction/tools/Pointer.hx",102,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_116_cancelSelection,"flixel.system.debug.interaction.tools.Pointer","cancelSelection",0xa173bf2a,"flixel.system.debug.interaction.tools.Pointer.cancelSelection","flixel/system/debug/interaction/tools/Pointer.hx",116,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_130_stopSelection,"flixel.system.debug.interaction.tools.Pointer","stopSelection",0x29b84da2,"flixel.system.debug.interaction.tools.Pointer.stopSelection","flixel/system/debug/interaction/tools/Pointer.hx",130,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_153_updateConsoleSelection,"flixel.system.debug.interaction.tools.Pointer","updateConsoleSelection",0xdb302166,"flixel.system.debug.interaction.tools.Pointer.updateConsoleSelection","flixel/system/debug/interaction/tools/Pointer.hx",153,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_162_handleItemAddition,"flixel.system.debug.interaction.tools.Pointer","handleItemAddition",0xee76343f,"flixel.system.debug.interaction.tools.Pointer.handleItemAddition","flixel/system/debug/interaction/tools/Pointer.hx",162,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_185_draw,"flixel.system.debug.interaction.tools.Pointer","draw",0x05864d4c,"flixel.system.debug.interaction.tools.Pointer.draw","flixel/system/debug/interaction/tools/Pointer.hx",185,0x6c93613b)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void Pointer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_21_new)
HXLINE(  28)		this->_itemsInSelectionArea = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  27)		this->_selectionArea =  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  26)		this->_selectionCancelled = false;
HXLINE(  25)		this->_selectionHappening = false;
HXLINE(  24)		this->_selectionEndPoint =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  23)		this->_selectionStartPoint =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  21)		super::__construct();
            	}

Dynamic Pointer_obj::__CreateEmpty() { return new Pointer_obj; }

void *Pointer_obj::_hx_vtable = 0;

Dynamic Pointer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Pointer_obj > _hx_result = new Pointer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Pointer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x350cec4c) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a || inClassId==(int)0x350cec4c;
		}
	} else {
		if (inClassId<=(int)0x5a9df069) {
			return inClassId==(int)0x3d2d7617 || inClassId==(int)0x5a9df069;
		} else {
			return inClassId==(int)0x5fcdb6d3;
		}
	}
}

 ::flixel::_hx_system::debug::interaction::tools::Tool Pointer_obj::init( ::flixel::_hx_system::debug::interaction::Interaction brain){
            	HX_GC_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_31_init)
HXLINE(  32)		this->super::init(brain);
HXLINE(  34)		this->_name = HX_("Pointer",9d,e8,72,1e);
HXLINE(  35)		this->setButton(hx::ClassOf< ::flixel::_hx_system::debug::interaction::tools::GraphicCursorCross >());
HXLINE(  36)		this->setCursor( ::flixel::_hx_system::debug::interaction::tools::GraphicCursorCross_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()));
HXLINE(  38)		return hx::ObjectPtr<OBJ_>(this);
            	}


void Pointer_obj::update(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_42_update)
HXLINE(  44)		if (!(this->isActive())) {
HXLINE(  45)			return;
            		}
HXLINE(  47)		bool _hx_tmp;
HXDLIN(  47)		if (this->_brain->pointerJustPressed) {
HXLINE(  47)			_hx_tmp = !(this->_selectionHappening);
            		}
            		else {
HXLINE(  47)			_hx_tmp = false;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  48)			this->startSelection();
            		}
HXLINE(  50)		if (this->_selectionHappening) {
HXLINE(  52)			this->_selectionEndPoint->set(this->_brain->flixelPointer->x,this->_brain->flixelPointer->y);
HXLINE(  53)			this->calculateSelectionArea();
            		}
HXLINE(  57)		if (!(this->_brain->pointerJustReleased)) {
HXLINE(  58)			return;
            		}
HXLINE(  62)		if (this->_selectionHappening) {
HXLINE(  63)			this->stopSelection(null());
            		}
HXLINE(  66)		if ((this->_itemsInSelectionArea->length > (int)0)) {
HXLINE(  68)			this->handleItemAddition(this->_itemsInSelectionArea);
            		}
            		else {
HXLINE(  70)			bool _hx_tmp1;
HXDLIN(  70)			if (!(this->_brain->keyPressed((int)17))) {
HXLINE(  70)				_hx_tmp1 = !(this->_selectionCancelled);
            			}
            			else {
HXLINE(  70)				_hx_tmp1 = false;
            			}
HXDLIN(  70)			if (_hx_tmp1) {
HXLINE(  73)				this->_brain->clearSelection();
            			}
            		}
            	}


void Pointer_obj::calculateSelectionArea(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_78_calculateSelectionArea)
HXLINE(  79)		this->_selectionArea->x = this->_selectionStartPoint->x;
HXLINE(  80)		this->_selectionArea->y = this->_selectionStartPoint->y;
HXLINE(  81)		this->_selectionArea->width = (this->_selectionEndPoint->x - this->_selectionArea->x);
HXLINE(  82)		this->_selectionArea->height = (this->_selectionEndPoint->y - this->_selectionArea->y);
HXLINE(  84)		if ((this->_selectionArea->width < (int)0)) {
HXLINE(  86)			 ::flixel::math::FlxRect _hx_tmp = this->_selectionArea;
HXDLIN(  86)			_hx_tmp->width = (_hx_tmp->width * (int)-1);
HXLINE(  87)			this->_selectionArea->x = (this->_selectionArea->x - this->_selectionArea->width);
            		}
HXLINE(  90)		if ((this->_selectionArea->height < (int)0)) {
HXLINE(  92)			 ::flixel::math::FlxRect _hx_tmp1 = this->_selectionArea;
HXDLIN(  92)			_hx_tmp1->height = (_hx_tmp1->height * (int)-1);
HXLINE(  93)			this->_selectionArea->y = (this->_selectionArea->y - this->_selectionArea->height);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pointer_obj,calculateSelectionArea,(void))

void Pointer_obj::startSelection(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_102_startSelection)
HXLINE( 103)		this->_selectionHappening = true;
HXLINE( 104)		this->_selectionCancelled = false;
HXLINE( 105)		this->_selectionStartPoint->set(this->_brain->flixelPointer->x,this->_brain->flixelPointer->y);
HXLINE( 106)		::flixel::util::FlxArrayUtil_obj::clearArray(this->_itemsInSelectionArea,null());
HXLINE( 107)		this->updateConsoleSelection();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pointer_obj,startSelection,(void))

void Pointer_obj::cancelSelection(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_116_cancelSelection)
HXLINE( 117)		if (!(this->_selectionHappening)) {
HXLINE( 118)			return;
            		}
HXLINE( 120)		this->_selectionCancelled = true;
HXLINE( 121)		this->stopSelection(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pointer_obj,cancelSelection,(void))

void Pointer_obj::stopSelection(hx::Null< bool >  __o_findItems){
bool findItems = __o_findItems.Default(true);
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_130_stopSelection)
HXLINE( 131)		if (!(this->_selectionHappening)) {
HXLINE( 132)			return;
            		}
HXLINE( 134)		this->_selectionEndPoint->set(this->_brain->flixelPointer->x,this->_brain->flixelPointer->y);
HXLINE( 135)		this->calculateSelectionArea();
HXLINE( 137)		if (findItems) {
HXLINE( 139)			this->_brain->findItemsWithinState(this->_itemsInSelectionArea,::flixel::FlxG_obj::game->_state,this->_selectionArea);
HXLINE( 140)			this->updateConsoleSelection();
            		}
HXLINE( 144)		this->_selectionHappening = false;
HXLINE( 145)		{
HXLINE( 145)			 ::flixel::math::FlxRect _this = this->_selectionArea;
HXDLIN( 145)			_this->x = (int)0;
HXDLIN( 145)			_this->y = (int)0;
HXDLIN( 145)			_this->width = (int)0;
HXDLIN( 145)			_this->height = (int)0;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pointer_obj,stopSelection,(void))

void Pointer_obj::updateConsoleSelection(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_153_updateConsoleSelection)
HXLINE( 153)		 ::flixel::_hx_system::frontEnds::ConsoleFrontEnd _this = ::flixel::FlxG_obj::console;
HXDLIN( 153)		 ::Dynamic AnyObject;
HXDLIN( 153)		int _g = this->_itemsInSelectionArea->length;
HXDLIN( 153)		switch((int)(_g)){
            			case (int)0: {
HXLINE( 153)				AnyObject = null();
            			}
            			break;
            			case (int)1: {
HXLINE( 153)				AnyObject = this->_itemsInSelectionArea->__get((int)0).StaticCast<  ::flixel::FlxBasic >();
            			}
            			break;
            			default:{
HXLINE( 153)				AnyObject = this->_itemsInSelectionArea;
            			}
            		}
HXDLIN( 153)		::flixel::FlxG_obj::game->debugger->console->registerObject(HX_("selection",4c,f8,1a,8e),AnyObject);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pointer_obj,updateConsoleSelection,(void))

void Pointer_obj::handleItemAddition(::Array< ::Dynamic> itemsInSelectionArea){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_162_handleItemAddition)
HXLINE( 164)		bool adding = this->_brain->keyPressed((int)17);
HXLINE( 165)		 ::flixel::group::FlxTypedGroup selectedItems = this->_brain->selectedItems;
HXLINE( 167)		if ((itemsInSelectionArea->length == (int)0)) {
HXLINE( 168)			return;
            		}
HXLINE( 172)		if (!(adding)) {
HXLINE( 173)			this->_brain->clearSelection();
            		}
HXLINE( 175)		{
HXLINE( 175)			int _g = (int)0;
HXDLIN( 175)			while((_g < itemsInSelectionArea->length)){
HXLINE( 175)				 ::flixel::FlxBasic item = itemsInSelectionArea->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN( 175)				_g = (_g + (int)1);
HXLINE( 177)				bool _hx_tmp;
HXDLIN( 177)				if ((selectedItems->members->indexOf(( ( ::flixel::FlxObject)(item) ),null()) != (int)-1)) {
HXLINE( 177)					_hx_tmp = adding;
            				}
            				else {
HXLINE( 177)					_hx_tmp = false;
            				}
HXDLIN( 177)				if (_hx_tmp) {
HXLINE( 178)					selectedItems->remove(( ( ::flixel::FlxObject)(item) ),null()).StaticCast<  ::flixel::FlxObject >();
            				}
            				else {
HXLINE( 180)					selectedItems->add(( ( ::flixel::FlxObject)(item) )).StaticCast<  ::flixel::FlxObject >();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pointer_obj,handleItemAddition,(void))

void Pointer_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_185_draw)
HXLINE( 186)		 ::openfl::_legacy::display::Graphics gfx = this->_brain->getDebugGraphics();
HXLINE( 187)		if (hx::IsNull( gfx )) {
HXLINE( 188)			return;
            		}
HXLINE( 190)		if (this->_selectionHappening) {
HXLINE( 193)			gfx->lineStyle(((Float)0.9),(int)12255232,null(),null(),null(),null(),null(),null());
HXLINE( 194)			Float _hx_tmp = (this->_selectionArea->x - ::flixel::FlxG_obj::camera->scroll->x);
HXDLIN( 194)			gfx->drawRect(_hx_tmp,(this->_selectionArea->y - ::flixel::FlxG_obj::camera->scroll->y),this->_selectionArea->width,this->_selectionArea->height);
            		}
HXLINE( 198)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 199)			::flixel::FlxG_obj::camera->buffer->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,null(),null(),null(),null(),null());
            		}
            	}



hx::ObjectPtr< Pointer_obj > Pointer_obj::__new() {
	hx::ObjectPtr< Pointer_obj > __this = new Pointer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Pointer_obj > Pointer_obj::__alloc(hx::Ctx *_hx_ctx) {
	Pointer_obj *__this = (Pointer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Pointer_obj), true, "flixel.system.debug.interaction.tools.Pointer"));
	*(void **)__this = Pointer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Pointer_obj::Pointer_obj()
{
}

void Pointer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pointer);
	HX_MARK_MEMBER_NAME(_selectionStartPoint,"_selectionStartPoint");
	HX_MARK_MEMBER_NAME(_selectionEndPoint,"_selectionEndPoint");
	HX_MARK_MEMBER_NAME(_selectionHappening,"_selectionHappening");
	HX_MARK_MEMBER_NAME(_selectionCancelled,"_selectionCancelled");
	HX_MARK_MEMBER_NAME(_selectionArea,"_selectionArea");
	HX_MARK_MEMBER_NAME(_itemsInSelectionArea,"_itemsInSelectionArea");
	 ::flixel::_hx_system::debug::interaction::tools::Tool_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Pointer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_selectionStartPoint,"_selectionStartPoint");
	HX_VISIT_MEMBER_NAME(_selectionEndPoint,"_selectionEndPoint");
	HX_VISIT_MEMBER_NAME(_selectionHappening,"_selectionHappening");
	HX_VISIT_MEMBER_NAME(_selectionCancelled,"_selectionCancelled");
	HX_VISIT_MEMBER_NAME(_selectionArea,"_selectionArea");
	HX_VISIT_MEMBER_NAME(_itemsInSelectionArea,"_itemsInSelectionArea");
	 ::flixel::_hx_system::debug::interaction::tools::Tool_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Pointer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stopSelection") ) { return hx::Val( stopSelection_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectionArea") ) { return hx::Val( _selectionArea ); }
		if (HX_FIELD_EQ(inName,"startSelection") ) { return hx::Val( startSelection_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cancelSelection") ) { return hx::Val( cancelSelection_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_selectionEndPoint") ) { return hx::Val( _selectionEndPoint ); }
		if (HX_FIELD_EQ(inName,"handleItemAddition") ) { return hx::Val( handleItemAddition_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_selectionHappening") ) { return hx::Val( _selectionHappening ); }
		if (HX_FIELD_EQ(inName,"_selectionCancelled") ) { return hx::Val( _selectionCancelled ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_selectionStartPoint") ) { return hx::Val( _selectionStartPoint ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_itemsInSelectionArea") ) { return hx::Val( _itemsInSelectionArea ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"calculateSelectionArea") ) { return hx::Val( calculateSelectionArea_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateConsoleSelection") ) { return hx::Val( updateConsoleSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Pointer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_selectionArea") ) { _selectionArea=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_selectionEndPoint") ) { _selectionEndPoint=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_selectionHappening") ) { _selectionHappening=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selectionCancelled") ) { _selectionCancelled=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_selectionStartPoint") ) { _selectionStartPoint=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_itemsInSelectionArea") ) { _itemsInSelectionArea=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pointer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_selectionStartPoint","\xfb","\x76","\x39","\x85"));
	outFields->push(HX_HCSTRING("_selectionEndPoint","\xa2","\xcb","\xd2","\x26"));
	outFields->push(HX_HCSTRING("_selectionHappening","\x73","\x62","\x99","\x62"));
	outFields->push(HX_HCSTRING("_selectionCancelled","\xc4","\x88","\xc3","\xbc"));
	outFields->push(HX_HCSTRING("_selectionArea","\x3a","\xb6","\x0a","\x2f"));
	outFields->push(HX_HCSTRING("_itemsInSelectionArea","\x93","\x54","\x93","\x90"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Pointer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(Pointer_obj,_selectionStartPoint),HX_HCSTRING("_selectionStartPoint","\xfb","\x76","\x39","\x85")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(Pointer_obj,_selectionEndPoint),HX_HCSTRING("_selectionEndPoint","\xa2","\xcb","\xd2","\x26")},
	{hx::fsBool,(int)offsetof(Pointer_obj,_selectionHappening),HX_HCSTRING("_selectionHappening","\x73","\x62","\x99","\x62")},
	{hx::fsBool,(int)offsetof(Pointer_obj,_selectionCancelled),HX_HCSTRING("_selectionCancelled","\xc4","\x88","\xc3","\xbc")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(Pointer_obj,_selectionArea),HX_HCSTRING("_selectionArea","\x3a","\xb6","\x0a","\x2f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Pointer_obj,_itemsInSelectionArea),HX_HCSTRING("_itemsInSelectionArea","\x93","\x54","\x93","\x90")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Pointer_obj_sStaticStorageInfo = 0;
#endif

static ::String Pointer_obj_sMemberFields[] = {
	HX_HCSTRING("_selectionStartPoint","\xfb","\x76","\x39","\x85"),
	HX_HCSTRING("_selectionEndPoint","\xa2","\xcb","\xd2","\x26"),
	HX_HCSTRING("_selectionHappening","\x73","\x62","\x99","\x62"),
	HX_HCSTRING("_selectionCancelled","\xc4","\x88","\xc3","\xbc"),
	HX_HCSTRING("_selectionArea","\x3a","\xb6","\x0a","\x2f"),
	HX_HCSTRING("_itemsInSelectionArea","\x93","\x54","\x93","\x90"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("calculateSelectionArea","\xb3","\x98","\x94","\x0b"),
	HX_HCSTRING("startSelection","\x8a","\xc7","\x55","\xad"),
	HX_HCSTRING("cancelSelection","\x72","\x6b","\xd1","\xed"),
	HX_HCSTRING("stopSelection","\xea","\xd7","\x28","\x51"),
	HX_HCSTRING("updateConsoleSelection","\x1e","\x0e","\x50","\x7f"),
	HX_HCSTRING("handleItemAddition","\xf7","\x64","\x83","\xda"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void Pointer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pointer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Pointer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pointer_obj::__mClass,"__mClass");
};

#endif

hx::Class Pointer_obj::__mClass;

void Pointer_obj::__register()
{
	hx::Object *dummy = new Pointer_obj;
	Pointer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.interaction.tools.Pointer","\x26","\xc4","\x01","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Pointer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Pointer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Pointer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Pointer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pointer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pointer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
