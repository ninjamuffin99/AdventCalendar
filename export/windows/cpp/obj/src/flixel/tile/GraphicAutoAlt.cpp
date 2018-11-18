// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_tile_GraphicAutoAlt
#include <flixel/tile/GraphicAutoAlt.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c236d64624e0711_2010_new,"flixel.tile.GraphicAutoAlt","new",0x4e2c2272,"flixel.tile.GraphicAutoAlt.new","openfl/_legacy/Assets.hx",2010,0x9276b055)
HX_LOCAL_STACK_FRAME(_hx_pos_ce36efe445fffae6_1_boot,"flixel.tile.GraphicAutoAlt","boot",0x108b01e0,"flixel.tile.GraphicAutoAlt.boot","?",1,0x0000003f)
namespace flixel{
namespace tile{

void GraphicAutoAlt_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
 ::Dynamic transparent = __o_transparent.Default(true);
 ::Dynamic fillRGBA = __o_fillRGBA.Default(-1);
            	HX_STACKFRAME(&_hx_pos_4c236d64624e0711_2010_new)
HXLINE(2076)		super::__construct(width,height,transparent,fillRGBA,null());
HXLINE(2078)		 ::openfl::_legacy::utils::ByteArray byteArray = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::tile::GraphicAutoAlt_obj::resourceName));
HXLINE(2079)		this->_hx___handle = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_from_bytes(byteArray,null());
            	}

Dynamic GraphicAutoAlt_obj::__CreateEmpty() { return new GraphicAutoAlt_obj; }

void *GraphicAutoAlt_obj::_hx_vtable = 0;

Dynamic GraphicAutoAlt_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicAutoAlt_obj > _hx_result = new GraphicAutoAlt_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicAutoAlt_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x016a6b5c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x016a6b5c;
	} else {
		return inClassId==(int)0x0cd766e7;
	}
}

::String GraphicAutoAlt_obj::resourceName;


hx::ObjectPtr< GraphicAutoAlt_obj > GraphicAutoAlt_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	hx::ObjectPtr< GraphicAutoAlt_obj > __this = new GraphicAutoAlt_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

hx::ObjectPtr< GraphicAutoAlt_obj > GraphicAutoAlt_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicAutoAlt_obj *__this = (GraphicAutoAlt_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicAutoAlt_obj), true, "flixel.tile.GraphicAutoAlt"));
	*(void **)__this = GraphicAutoAlt_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicAutoAlt_obj::GraphicAutoAlt_obj()
{
}

bool GraphicAutoAlt_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicAutoAlt_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicAutoAlt_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GraphicAutoAlt_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GraphicAutoAlt_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GraphicAutoAlt_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicAutoAlt_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicAutoAlt_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicAutoAlt_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicAutoAlt_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicAutoAlt_obj::resourceName,"resourceName");
};

#endif

hx::Class GraphicAutoAlt_obj::__mClass;

static ::String GraphicAutoAlt_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void GraphicAutoAlt_obj::__register()
{
	hx::Object *dummy = new GraphicAutoAlt_obj;
	GraphicAutoAlt_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tile.GraphicAutoAlt","\x80","\xc1","\xb1","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicAutoAlt_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicAutoAlt_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicAutoAlt_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicAutoAlt_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicAutoAlt_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicAutoAlt_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicAutoAlt_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicAutoAlt_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicAutoAlt_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ce36efe445fffae6_1_boot)
HXLINE(   1)		resourceName = HX_("__ASSET__:bitmap_flixel_tile_GraphicAutoAlt",c6,25,2e,70);
            	}
}

} // end namespace flixel
} // end namespace tile
