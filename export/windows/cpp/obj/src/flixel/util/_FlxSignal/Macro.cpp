// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util__FlxSignal_Macro
#include <flixel/util/_FlxSignal/Macro.h>
#endif

namespace flixel{
namespace util{
namespace _FlxSignal{

void Macro_obj::__construct() { }

Dynamic Macro_obj::__CreateEmpty() { return new Macro_obj; }

void *Macro_obj::_hx_vtable = 0;

Dynamic Macro_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Macro_obj > _hx_result = new Macro_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Macro_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f9dd86b;
}


Macro_obj::Macro_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Macro_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Macro_obj_sStaticStorageInfo = 0;
#endif

static void Macro_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Macro_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Macro_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Macro_obj::__mClass,"__mClass");
};

#endif

hx::Class Macro_obj::__mClass;

void Macro_obj::__register()
{
	hx::Object *dummy = new Macro_obj;
	Macro_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxSignal.Macro","\xb3","\x29","\xa6","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Macro_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Macro_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Macro_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Macro_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Macro_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
