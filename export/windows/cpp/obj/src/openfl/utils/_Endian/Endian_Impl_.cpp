// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_utils__Endian_Endian_Impl_
#include <openfl/utils/_Endian/Endian_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f2873c031a8a146e_11_fromString,"openfl.utils._Endian.Endian_Impl_","fromString",0x910e541f,"openfl.utils._Endian.Endian_Impl_.fromString","openfl/utils/Endian.hx",11,0xb1ee6086)
HX_LOCAL_STACK_FRAME(_hx_pos_f2873c031a8a146e_23_toString,"openfl.utils._Endian.Endian_Impl_","toString",0x9a281df0,"openfl.utils._Endian.Endian_Impl_.toString","openfl/utils/Endian.hx",23,0xb1ee6086)
HX_LOCAL_STACK_FRAME(_hx_pos_f2873c031a8a146e_6_boot,"openfl.utils._Endian.Endian_Impl_","boot",0x6ccbdf76,"openfl.utils._Endian.Endian_Impl_.boot","openfl/utils/Endian.hx",6,0xb1ee6086)
HX_LOCAL_STACK_FRAME(_hx_pos_f2873c031a8a146e_7_boot,"openfl.utils._Endian.Endian_Impl_","boot",0x6ccbdf76,"openfl.utils._Endian.Endian_Impl_.boot","openfl/utils/Endian.hx",7,0xb1ee6086)
namespace openfl{
namespace utils{
namespace _Endian{

void Endian_Impl__obj::__construct() { }

Dynamic Endian_Impl__obj::__CreateEmpty() { return new Endian_Impl__obj; }

void *Endian_Impl__obj::_hx_vtable = 0;

Dynamic Endian_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Endian_Impl__obj > _hx_result = new Endian_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Endian_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3bd39ce0;
}

 ::Dynamic Endian_Impl__obj::_hx_BIG_ENDIAN;

 ::Dynamic Endian_Impl__obj::_hx_LITTLE_ENDIAN;

 ::Dynamic Endian_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_f2873c031a8a146e_11_fromString)
HXLINE(  11)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("bigEndian",7b,d5,5a,20)) ){
HXLINE(  13)			return (int)0;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("littleEndian",31,2e,7b,07)) ){
HXLINE(  14)			return (int)1;
HXDLIN(  14)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  15)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  11)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Endian_Impl__obj,fromString,return )

::String Endian_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_f2873c031a8a146e_23_toString)
HXLINE(  23)		switch((int)(value)){
            			case (int)0: {
HXLINE(  25)				return HX_("bigEndian",7b,d5,5a,20);
            			}
            			break;
            			case (int)1: {
HXLINE(  26)				return HX_("littleEndian",31,2e,7b,07);
            			}
            			break;
            			default:{
HXLINE(  27)				return null();
            			}
            		}
HXLINE(  23)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Endian_Impl__obj,toString,return )


Endian_Impl__obj::Endian_Impl__obj()
{
}

bool Endian_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Endian_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Endian_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Endian_Impl__obj::_hx_BIG_ENDIAN,HX_HCSTRING("BIG_ENDIAN","\x9a","\xd5","\x89","\xb2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Endian_Impl__obj::_hx_LITTLE_ENDIAN,HX_HCSTRING("LITTLE_ENDIAN","\x04","\x50","\xec","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Endian_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Endian_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Endian_Impl__obj::_hx_BIG_ENDIAN,"BIG_ENDIAN");
	HX_MARK_MEMBER_NAME(Endian_Impl__obj::_hx_LITTLE_ENDIAN,"LITTLE_ENDIAN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Endian_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Endian_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Endian_Impl__obj::_hx_BIG_ENDIAN,"BIG_ENDIAN");
	HX_VISIT_MEMBER_NAME(Endian_Impl__obj::_hx_LITTLE_ENDIAN,"LITTLE_ENDIAN");
};

#endif

hx::Class Endian_Impl__obj::__mClass;

static ::String Endian_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("BIG_ENDIAN","\x9a","\xd5","\x89","\xb2"),
	HX_HCSTRING("LITTLE_ENDIAN","\x04","\x50","\xec","\xfb"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Endian_Impl__obj::__register()
{
	hx::Object *dummy = new Endian_Impl__obj;
	Endian_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils._Endian.Endian_Impl_","\xaa","\xcb","\x09","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Endian_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Endian_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Endian_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Endian_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Endian_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Endian_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Endian_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Endian_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f2873c031a8a146e_6_boot)
HXLINE(   6)		_hx_BIG_ENDIAN = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f2873c031a8a146e_7_boot)
HXLINE(   7)		_hx_LITTLE_ENDIAN = (int)1;
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _Endian
