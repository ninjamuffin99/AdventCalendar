// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_lang_Iterable
#include <haxe/lang/Iterable.h>
#endif
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#include <openfl/utils/_Object/Object_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_7__new,"openfl.utils._Object.Object_Impl_","_new",0x3180f425,"openfl.utils._Object.Object_Impl_._new","openfl/utils/Object.hx",7,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_16_hasOwnProperty,"openfl.utils._Object.Object_Impl_","hasOwnProperty",0xff2b1b45,"openfl.utils._Object.Object_Impl_.hasOwnProperty","openfl/utils/Object.hx",16,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_21_isPrototypeOf,"openfl.utils._Object.Object_Impl_","isPrototypeOf",0xd2a05c4b,"openfl.utils._Object.Object_Impl_.isPrototypeOf","openfl/utils/Object.hx",21,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_37_iterator,"openfl.utils._Object.Object_Impl_","iterator",0x99ccdab2,"openfl.utils._Object.Object_Impl_.iterator","openfl/utils/Object.hx",37,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_48_propertyIsEnumerable,"openfl.utils._Object.Object_Impl_","propertyIsEnumerable",0xddba318b,"openfl.utils._Object.Object_Impl_.propertyIsEnumerable","openfl/utils/Object.hx",48,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_55_toLocaleString,"openfl.utils._Object.Object_Impl_","toLocaleString",0x947c7aea,"openfl.utils._Object.Object_Impl_.toLocaleString","openfl/utils/Object.hx",55,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_62_toString,"openfl.utils._Object.Object_Impl_","toString",0x3ea16170,"openfl.utils._Object.Object_Impl_.toString","openfl/utils/Object.hx",62,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_69_valueOf,"openfl.utils._Object.Object_Impl_","valueOf",0xaf96f6a4,"openfl.utils._Object.Object_Impl_.valueOf","openfl/utils/Object.hx",69,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_76___get,"openfl.utils._Object.Object_Impl_","__get",0x156bee32,"openfl.utils._Object.Object_Impl_.__get","openfl/utils/Object.hx",76,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_81___set,"openfl.utils._Object.Object_Impl_","__set",0x1575093e,"openfl.utils._Object.Object_Impl_.__set","openfl/utils/Object.hx",81,0xcbd6e8e2)
namespace openfl{
namespace utils{
namespace _Object{

void Object_Impl__obj::__construct() { }

Dynamic Object_Impl__obj::__CreateEmpty() { return new Object_Impl__obj; }

void *Object_Impl__obj::_hx_vtable = 0;

Dynamic Object_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Object_Impl__obj > _hx_result = new Object_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Object_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e136e60;
}

 ::Dynamic Object_Impl__obj::_new(){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_7__new)
HXLINE(   7)		 ::Dynamic this1 =  ::Dynamic(hx::Anon_obj::Create(0));
HXDLIN(   7)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Object_Impl__obj,_new,return )

bool Object_Impl__obj::hasOwnProperty( ::Dynamic this1,::String name){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_16_hasOwnProperty)
HXLINE(  16)		if (hx::IsNotNull( this1 )) {
HXLINE(  16)			return ::Reflect_obj::hasField(this1,name);
            		}
            		else {
HXLINE(  16)			return false;
            		}
HXDLIN(  16)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,hasOwnProperty,return )

bool Object_Impl__obj::isPrototypeOf( ::Dynamic this1,hx::Class theClass){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_21_isPrototypeOf)
HXLINE(  23)		hx::Class c = ::Type_obj::getClass(this1);
HXLINE(  25)		while(hx::IsNotNull( c )){
HXLINE(  27)			if (hx::IsEq( c,theClass )) {
HXLINE(  27)				return true;
            			}
HXLINE(  28)			c = ::Type_obj::getSuperClass(c);
            		}
HXLINE(  32)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,isPrototypeOf,return )

 ::Dynamic Object_Impl__obj::iterator( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_37_iterator)
HXLINE(  39)		::Array< ::String > fields = ::Reflect_obj::fields(this1);
HXLINE(  40)		if (hx::IsNull( fields )) {
HXLINE(  40)			fields = ::Array_obj< ::String >::__new(0);
            		}
HXLINE(  41)		return fields->iterator();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Object_Impl__obj,iterator,return )

bool Object_Impl__obj::propertyIsEnumerable( ::Dynamic this1,::String name){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_48_propertyIsEnumerable)
HXLINE(  48)		bool _hx_tmp;
HXDLIN(  48)		if (hx::IsNotNull( this1 )) {
HXLINE(  48)			_hx_tmp = ::Reflect_obj::hasField(this1,name);
            		}
            		else {
HXLINE(  48)			_hx_tmp = false;
            		}
HXDLIN(  48)		if (_hx_tmp) {
HXLINE(  48)			return ::Std_obj::is(::Reflect_obj::field(this1,name),hx::ClassOf< ::haxe::lang::Iterable >());
            		}
            		else {
HXLINE(  48)			return false;
            		}
HXDLIN(  48)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,propertyIsEnumerable,return )

::String Object_Impl__obj::toLocaleString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_55_toLocaleString)
HXLINE(  55)		return ::Std_obj::string(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Object_Impl__obj,toLocaleString,return )

::String Object_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_62_toString)
HXLINE(  62)		return ::Std_obj::string(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Object_Impl__obj,toString,return )

 ::Dynamic Object_Impl__obj::valueOf( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_69_valueOf)
HXLINE(  69)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Object_Impl__obj,valueOf,return )

 ::Dynamic Object_Impl__obj::__get( ::Dynamic this1,::String key){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_76___get)
HXLINE(  76)		return ::Reflect_obj::field(this1,key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,__get,return )

 ::Dynamic Object_Impl__obj::__set( ::Dynamic this1,::String key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_81___set)
HXLINE(  83)		::Reflect_obj::setField(this1,key,value);
HXLINE(  84)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Object_Impl__obj,__set,return )


Object_Impl__obj::Object_Impl__obj()
{
}

bool Object_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { outValue = __get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__set") ) { outValue = __set_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"valueOf") ) { outValue = valueOf_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isPrototypeOf") ) { outValue = isPrototypeOf_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hasOwnProperty") ) { outValue = hasOwnProperty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLocaleString") ) { outValue = toLocaleString_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"propertyIsEnumerable") ) { outValue = propertyIsEnumerable_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Object_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Object_Impl__obj_sStaticStorageInfo = 0;
#endif

static void Object_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Object_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Object_Impl__obj::__mClass;

static ::String Object_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("hasOwnProperty","\x81","\x9f","\x3d","\x5e"),
	HX_HCSTRING("isPrototypeOf","\x8f","\x33","\x2a","\xcc"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("propertyIsEnumerable","\xc7","\x8a","\x8f","\xa6"),
	HX_HCSTRING("toLocaleString","\x26","\xff","\x8e","\xf3"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("valueOf","\xe8","\x42","\x6c","\x70"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	::String(null())
};

void Object_Impl__obj::__register()
{
	hx::Object *dummy = new Object_Impl__obj;
	Object_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils._Object.Object_Impl_","\x2a","\xf8","\xc6","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Object_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Object_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Object_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Object_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Object_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Object_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Object_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _Object
