// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_30_hasField,"Reflect","hasField",0xef8c2571,"Reflect.hasField","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",30,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_34_field,"Reflect","field",0x54b04da9,"Reflect.field","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",34,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_38_setField,"Reflect","setField",0x71684429,"Reflect.setField","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",38,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_43_getProperty,"Reflect","getProperty",0x632ca13a,"Reflect.getProperty","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",43,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_47_setProperty,"Reflect","setProperty",0x6d99a846,"Reflect.setProperty","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",47,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_51_callMethod,"Reflect","callMethod",0xb49e52d0,"Reflect.callMethod","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",51,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_58_fields,"Reflect","fields",0xc593a6aa,"Reflect.fields","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",58,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_66_isFunction,"Reflect","isFunction",0x0f1541d3,"Reflect.isFunction","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",66,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_70_compare,"Reflect","compare",0xa2d92b54,"Reflect.compare","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",70,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_73_compareMethods,"Reflect","compareMethods",0x8b8ddd7e,"Reflect.compareMethods","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",73,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_81_isObject,"Reflect","isObject",0xd04960ba,"Reflect.isObject","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",81,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_89_isEnumValue,"Reflect","isEnumValue",0x97884d95,"Reflect.isEnumValue","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",89,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_92_deleteField,"Reflect","deleteField",0x21895ebe,"Reflect.deleteField","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",92,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_97_copy,"Reflect","copy",0x47e2b5a6,"Reflect.copy","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",97,0x487b3827)
HX_LOCAL_STACK_FRAME(_hx_pos_4da882ff114ca894_110_makeVarArgs,"Reflect","makeVarArgs",0x978955c5,"Reflect.makeVarArgs","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",110,0x487b3827)

void Reflect_obj::__construct() { }

Dynamic Reflect_obj::__CreateEmpty() { return new Reflect_obj; }

void *Reflect_obj::_hx_vtable = 0;

Dynamic Reflect_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Reflect_obj > _hx_result = new Reflect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Reflect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e2f4039;
}

bool Reflect_obj::hasField( ::Dynamic o,::String field){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_30_hasField)
HXLINE(  30)		return ((bool)hx::IsNotNull( o ) && (bool)o->__HasField(field));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,hasField,return )

 ::Dynamic Reflect_obj::field( ::Dynamic o,::String field){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_34_field)
HXLINE(  34)		return hx::IsNull( o ) ? null() : o->__Field(field,hx::paccNever);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,field,return )

void Reflect_obj::setField( ::Dynamic o,::String field, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_38_setField)
HXLINE(  38)		if (hx::IsNotNull( o )) {
HXLINE(  39)			o->__SetField(field,value,hx::paccNever);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,setField,(void))

 ::Dynamic Reflect_obj::getProperty( ::Dynamic o,::String field){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_43_getProperty)
HXLINE(  43)		return hx::IsNull( o ) ? null() : o->__Field(field,hx::paccAlways);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,getProperty,return )

void Reflect_obj::setProperty( ::Dynamic o,::String field, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_47_setProperty)
HXLINE(  47)		if (hx::IsNotNull( o )) {
HXLINE(  48)			o->__SetField(field,value,hx::paccAlways);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,setProperty,(void))

 ::Dynamic Reflect_obj::callMethod( ::Dynamic o, ::Dynamic func,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_51_callMethod)
HXLINE(  52)		if (((bool)hx::IsNotNull( func ) && (bool)(( (int)(func->__GetType()) ) == (int)3))) {
HXLINE(  53)			func = o->__Field(func,hx::paccDynamic);
            		}
HXLINE(  54)		func->__SetThis(o);
HXLINE(  55)		return func->__Run(args);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,callMethod,return )

::Array< ::String > Reflect_obj::fields( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_58_fields)
HXLINE(  59)		if (hx::IsNull( o )) {
HXLINE(  59)			return ::Array_obj< ::String >::__new();
            		}
HXLINE(  60)		::Array< ::String > a = ::Array_obj< ::String >::__new(0);
HXLINE(  61)		o->__GetFields(a);
HXLINE(  62)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,fields,return )

bool Reflect_obj::isFunction( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_66_isFunction)
HXLINE(  66)		return ((bool)hx::IsNotNull( f ) && (bool)hx::IsEq( f->__GetType(),(int)6 ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isFunction,return )

int Reflect_obj::compare( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_70_compare)
HXLINE(  70)		return hx::IsEq( a,b ) ? (int)0 : hx::IsGreater( a,b ) ? (int)1 : (int)-1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,compare,return )

bool Reflect_obj::compareMethods( ::Dynamic f1, ::Dynamic f2){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_73_compareMethods)
HXLINE(  74)		if (hx::IsEq( f1,f2 )) {
HXLINE(  75)			return true;
            		}
HXLINE(  76)		if (((bool)!(::Reflect_obj::isFunction(f1)) || (bool)!(::Reflect_obj::isFunction(f2)))) {
HXLINE(  77)			return false;
            		}
HXLINE(  78)		return ::__hxcpp_same_closure(f1,f2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,compareMethods,return )

bool Reflect_obj::isObject( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_81_isObject)
HXLINE(  82)		if (hx::IsNull( v )) {
HXLINE(  82)			return false;
            		}
HXLINE(  83)		int t = ( (int)(v->__GetType()) );
HXLINE(  84)		return ((bool)((bool)((bool)(t == (int)4) || (bool)(t == (int)8)) || (bool)(t == (int)3)) || (bool)(t == (int)5));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isObject,return )

bool Reflect_obj::isEnumValue( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_89_isEnumValue)
HXLINE(  89)		return ((bool)hx::IsNotNull( v ) && (bool)hx::IsEq( v->__GetType(),(int)7 ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isEnumValue,return )

bool Reflect_obj::deleteField( ::Dynamic o,::String field){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_92_deleteField)
HXLINE(  93)		if (hx::IsNull( o )) {
HXLINE(  93)			return false;
            		}
HXLINE(  94)		return ::__hxcpp_anon_remove(o,field);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,deleteField,return )

 ::Dynamic Reflect_obj::copy( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_97_copy)
HXLINE(  98)		if (hx::IsNull( o )) {
HXLINE(  98)			return null();
            		}
HXLINE(  99)		if ((( (int)(o->__GetType()) ) == (int)3)) {
HXLINE(  99)			return o;
            		}
HXLINE( 100)		if ((( (int)(o->__GetType()) ) == (int)5)) {
HXLINE( 101)			return o->__Field(HX_("copy",b5,bb,c4,41),hx::paccDynamic)();
            		}
HXLINE( 102)		 ::Dynamic o2 =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE( 103)		{
HXLINE( 103)			int _g = (int)0;
HXDLIN( 103)			::Array< ::String > _g1 = ::Reflect_obj::fields(o);
HXDLIN( 103)			while((_g < _g1->length)){
HXLINE( 103)				::String f = _g1->__get(_g);
HXDLIN( 103)				++_g;
HXLINE( 104)				::Reflect_obj::setField(o2,f,::Reflect_obj::field(o,f));
            			}
            		}
HXLINE( 105)		return o2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,copy,return )

 ::Dynamic Reflect_obj::makeVarArgs( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_4da882ff114ca894_110_makeVarArgs)
HXLINE( 110)		return ::__hxcpp_create_var_args(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,makeVarArgs,return )


Reflect_obj::Reflect_obj()
{
}

bool Reflect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { outValue = field_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { outValue = fields_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasField") ) { outValue = hasField_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setField") ) { outValue = setField_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isObject") ) { outValue = isObject_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMethod") ) { outValue = callMethod_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isFunction") ) { outValue = isFunction_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getProperty") ) { outValue = getProperty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setProperty") ) { outValue = setProperty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isEnumValue") ) { outValue = isEnumValue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"deleteField") ) { outValue = deleteField_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"makeVarArgs") ) { outValue = makeVarArgs_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compareMethods") ) { outValue = compareMethods_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Reflect_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Reflect_obj_sStaticStorageInfo = 0;
#endif

static void Reflect_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Reflect_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

#endif

hx::Class Reflect_obj::__mClass;

static ::String Reflect_obj_sStaticFields[] = {
	HX_HCSTRING("hasField","\x00","\xdf","\xeb","\x8c"),
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("setField","\xb8","\xfd","\xc7","\x0e"),
	HX_HCSTRING("getProperty","\x0b","\x0b","\x2c","\xd2"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	HX_HCSTRING("callMethod","\x1f","\xce","\x8a","\x34"),
	HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),
	HX_HCSTRING("isFunction","\x22","\xbd","\x01","\x8f"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("compareMethods","\x4d","\xac","\x7b","\x37"),
	HX_HCSTRING("isObject","\x49","\x1a","\xa9","\x6d"),
	HX_HCSTRING("isEnumValue","\x66","\xb7","\x87","\x06"),
	HX_HCSTRING("deleteField","\x8f","\xc8","\x88","\x90"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("makeVarArgs","\x96","\xbf","\x88","\x06"),
	::String(null())
};

void Reflect_obj::__register()
{
	hx::Object *dummy = new Reflect_obj;
	Reflect_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Reflect","\x1d","\xac","\x7a","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reflect_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Reflect_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Reflect_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Reflect_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Reflect_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reflect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reflect_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

