// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Transform
#include <openfl/_legacy/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2e374971fb646e73_23_new,"openfl._legacy.geom.Transform","new",0x96893ff0,"openfl._legacy.geom.Transform.new","openfl/_legacy/geom/Transform.hx",23,0xd117dfbf)
HX_LOCAL_STACK_FRAME(_hx_pos_2e374971fb646e73_38_get_colorTransform,"openfl._legacy.geom.Transform","get_colorTransform",0xe3304ac2,"openfl._legacy.geom.Transform.get_colorTransform","openfl/_legacy/geom/Transform.hx",38,0xd117dfbf)
HX_LOCAL_STACK_FRAME(_hx_pos_2e374971fb646e73_39_set_colorTransform,"openfl._legacy.geom.Transform","set_colorTransform",0xbfdf7d36,"openfl._legacy.geom.Transform.set_colorTransform","openfl/_legacy/geom/Transform.hx",39,0xd117dfbf)
HX_LOCAL_STACK_FRAME(_hx_pos_2e374971fb646e73_40_get_concatenatedColorTransform,"openfl._legacy.geom.Transform","get_concatenatedColorTransform",0xd587cdb1,"openfl._legacy.geom.Transform.get_concatenatedColorTransform","openfl/_legacy/geom/Transform.hx",40,0xd117dfbf)
HX_LOCAL_STACK_FRAME(_hx_pos_2e374971fb646e73_41_get_concatenatedMatrix,"openfl._legacy.geom.Transform","get_concatenatedMatrix",0xcd19c469,"openfl._legacy.geom.Transform.get_concatenatedMatrix","openfl/_legacy/geom/Transform.hx",41,0xd117dfbf)
HX_LOCAL_STACK_FRAME(_hx_pos_2e374971fb646e73_44_get_matrix,"openfl._legacy.geom.Transform","get_matrix",0x8296487a,"openfl._legacy.geom.Transform.get_matrix","openfl/_legacy/geom/Transform.hx",44,0xd117dfbf)
HX_LOCAL_STACK_FRAME(_hx_pos_2e374971fb646e73_57_set_matrix,"openfl._legacy.geom.Transform","set_matrix",0x8613e6ee,"openfl._legacy.geom.Transform.set_matrix","openfl/_legacy/geom/Transform.hx",57,0xd117dfbf)
HX_LOCAL_STACK_FRAME(_hx_pos_2e374971fb646e73_80_get_matrix3D,"openfl._legacy.geom.Transform","get_matrix3D",0x0b1507ab,"openfl._legacy.geom.Transform.get_matrix3D","openfl/_legacy/geom/Transform.hx",80,0xd117dfbf)
HX_LOCAL_STACK_FRAME(_hx_pos_2e374971fb646e73_94_set_matrix3D,"openfl._legacy.geom.Transform","set_matrix3D",0x200e2b1f,"openfl._legacy.geom.Transform.set_matrix3D","openfl/_legacy/geom/Transform.hx",94,0xd117dfbf)
HX_LOCAL_STACK_FRAME(_hx_pos_2e374971fb646e73_118_get_pixelBounds,"openfl._legacy.geom.Transform","get_pixelBounds",0xdcf2a8c2,"openfl._legacy.geom.Transform.get_pixelBounds","openfl/_legacy/geom/Transform.hx",118,0xd117dfbf)
namespace openfl{
namespace _legacy{
namespace geom{

void Transform_obj::__construct( ::openfl::_legacy::display::DisplayObject parent){
            	HX_STACKFRAME(&_hx_pos_2e374971fb646e73_23_new)
HXLINE(  25)		this->_hx___parent = parent;
HXLINE(  26)		this->_hx___hasMatrix = true;
            	}

Dynamic Transform_obj::__CreateEmpty() { return new Transform_obj; }

void *Transform_obj::_hx_vtable = 0;

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Transform_obj > _hx_result = new Transform_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Transform_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x599343f8;
}

 ::openfl::_legacy::geom::ColorTransform Transform_obj::get_colorTransform(){
            	HX_STACKFRAME(&_hx_pos_2e374971fb646e73_38_get_colorTransform)
HXLINE(  38)		return this->_hx___parent->_hx___getColorTransform();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_colorTransform,return )

 ::openfl::_legacy::geom::ColorTransform Transform_obj::set_colorTransform( ::openfl::_legacy::geom::ColorTransform value){
            	HX_STACKFRAME(&_hx_pos_2e374971fb646e73_39_set_colorTransform)
HXLINE(  39)		this->_hx___parent->_hx___setColorTransform(value);
HXDLIN(  39)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_colorTransform,return )

 ::openfl::_legacy::geom::ColorTransform Transform_obj::get_concatenatedColorTransform(){
            	HX_STACKFRAME(&_hx_pos_2e374971fb646e73_40_get_concatenatedColorTransform)
HXLINE(  40)		return this->_hx___parent->_hx___getConcatenatedColorTransform();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedColorTransform,return )

 ::openfl::_legacy::geom::Matrix Transform_obj::get_concatenatedMatrix(){
            	HX_STACKFRAME(&_hx_pos_2e374971fb646e73_41_get_concatenatedMatrix)
HXLINE(  41)		return this->_hx___parent->_hx___getConcatenatedMatrix();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedMatrix,return )

 ::openfl::_legacy::geom::Matrix Transform_obj::get_matrix(){
            	HX_STACKFRAME(&_hx_pos_2e374971fb646e73_44_get_matrix)
HXLINE(  46)		if (this->_hx___hasMatrix) {
HXLINE(  48)			return this->_hx___parent->_hx___getMatrix();
            		}
HXLINE(  52)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix,return )

 ::openfl::_legacy::geom::Matrix Transform_obj::set_matrix( ::openfl::_legacy::geom::Matrix value){
            	HX_STACKFRAME(&_hx_pos_2e374971fb646e73_57_set_matrix)
HXLINE(  59)		if (hx::IsNull( value )) {
HXLINE(  61)			this->_hx___hasMatrix = false;
HXLINE(  62)			return null();
            		}
HXLINE(  66)		this->_hx___hasMatrix = true;
HXLINE(  67)		this->_hx___hasMatrix3D = false;
HXLINE(  69)		if (hx::IsNotNull( this->_hx___parent )) {
HXLINE(  71)			this->_hx___parent->_hx___setMatrix(value);
            		}
HXLINE(  75)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix,return )

 ::openfl::geom::Matrix3D Transform_obj::get_matrix3D(){
            	HX_GC_STACKFRAME(&_hx_pos_2e374971fb646e73_80_get_matrix3D)
HXLINE(  82)		if (this->_hx___hasMatrix3D) {
HXLINE(  84)			 ::openfl::_legacy::geom::Matrix matrix = this->_hx___parent->_hx___getMatrix();
HXLINE(  85)			return  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,::Array_obj< Float >::__new(16)->init(0,matrix->a)->init(1,matrix->b)->init(2,((Float)0.0))->init(3,((Float)0.0))->init(4,matrix->c)->init(5,matrix->d)->init(6,((Float)0.0))->init(7,((Float)0.0))->init(8,((Float)0.0))->init(9,((Float)0.0))->init(10,((Float)1.0))->init(11,((Float)0.0))->init(12,matrix->tx)->init(13,matrix->ty)->init(14,((Float)0.0))->init(15,((Float)1.0)));
            		}
HXLINE(  89)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix3D,return )

 ::openfl::geom::Matrix3D Transform_obj::set_matrix3D( ::openfl::geom::Matrix3D value){
            	HX_GC_STACKFRAME(&_hx_pos_2e374971fb646e73_94_set_matrix3D)
HXLINE(  96)		if (hx::IsNull( value )) {
HXLINE(  98)			this->_hx___hasMatrix3D = false;
HXLINE(  99)			return null();
            		}
HXLINE( 103)		this->_hx___hasMatrix = false;
HXLINE( 104)		this->_hx___hasMatrix3D = true;
HXLINE( 106)		if (hx::IsNotNull( this->_hx___parent )) {
HXLINE( 108)			 ::openfl::_legacy::geom::Matrix matrix =  ::openfl::_legacy::geom::Matrix_obj::__alloc( HX_CTX ,value->rawData->__get((int)0),value->rawData->__get((int)1),value->rawData->__get((int)4),value->rawData->__get((int)5),value->rawData->__get((int)12),value->rawData->__get((int)13));
HXLINE( 109)			this->_hx___parent->_hx___setMatrix(matrix);
            		}
HXLINE( 113)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix3D,return )

 ::openfl::_legacy::geom::Rectangle Transform_obj::get_pixelBounds(){
            	HX_STACKFRAME(&_hx_pos_2e374971fb646e73_118_get_pixelBounds)
HXLINE( 118)		return this->_hx___parent->_hx___getPixelBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_pixelBounds,return )


hx::ObjectPtr< Transform_obj > Transform_obj::__new( ::openfl::_legacy::display::DisplayObject parent) {
	hx::ObjectPtr< Transform_obj > __this = new Transform_obj();
	__this->__construct(parent);
	return __this;
}

hx::ObjectPtr< Transform_obj > Transform_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_legacy::display::DisplayObject parent) {
	Transform_obj *__this = (Transform_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Transform_obj), true, "openfl._legacy.geom.Transform"));
	*(void **)__this = Transform_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_MARK_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_MARK_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_MARK_MEMBER_NAME(_hx___hasMatrix,"__hasMatrix");
	HX_MARK_MEMBER_NAME(_hx___hasMatrix3D,"__hasMatrix3D");
	HX_MARK_MEMBER_NAME(_hx___parent,"__parent");
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_VISIT_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_VISIT_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_VISIT_MEMBER_NAME(_hx___hasMatrix,"__hasMatrix");
	HX_VISIT_MEMBER_NAME(_hx___hasMatrix3D,"__hasMatrix3D");
	HX_VISIT_MEMBER_NAME(_hx___parent,"__parent");
}

hx::Val Transform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_matrix() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_matrix3D() ); }
		if (HX_FIELD_EQ(inName,"__parent") ) { return hx::Val( _hx___parent ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return hx::Val( get_matrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return hx::Val( set_matrix_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { return hx::Val( inCallProp == hx::paccAlways ? get_pixelBounds() : pixelBounds ); }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { return hx::Val( _hx___hasMatrix ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_matrix3D") ) { return hx::Val( get_matrix3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_matrix3D") ) { return hx::Val( set_matrix3D_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { return hx::Val( _hx___hasMatrix3D ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_colorTransform() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_pixelBounds") ) { return hx::Val( get_pixelBounds_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { return hx::Val( inCallProp == hx::paccAlways ? get_concatenatedMatrix() : concatenatedMatrix ); }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return hx::Val( get_colorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return hx::Val( set_colorTransform_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_concatenatedMatrix") ) { return hx::Val( get_concatenatedMatrix_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { return hx::Val( inCallProp == hx::paccAlways ? get_concatenatedColorTransform() : concatenatedColorTransform ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_concatenatedColorTransform") ) { return hx::Val( get_concatenatedColorTransform_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Transform_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_matrix(inValue.Cast<  ::openfl::_legacy::geom::Matrix >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_matrix3D(inValue.Cast<  ::openfl::geom::Matrix3D >()) ); }
		if (HX_FIELD_EQ(inName,"__parent") ) { _hx___parent=inValue.Cast<  ::openfl::_legacy::display::DisplayObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { pixelBounds=inValue.Cast<  ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { _hx___hasMatrix=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { _hx___hasMatrix3D=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_colorTransform(inValue.Cast<  ::openfl::_legacy::geom::ColorTransform >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { concatenatedMatrix=inValue.Cast<  ::openfl::_legacy::geom::Matrix >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { concatenatedColorTransform=inValue.Cast<  ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"));
	outFields->push(HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("matrix3D","\x32","\x35","\xf3","\x66"));
	outFields->push(HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"));
	outFields->push(HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"));
	outFields->push(HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"));
	outFields->push(HX_HCSTRING("__parent","\x4a","\x70","\xad","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Transform_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,concatenatedColorTransform),HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(int)offsetof(Transform_obj,concatenatedMatrix),HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Transform_obj,pixelBounds),HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7")},
	{hx::fsBool,(int)offsetof(Transform_obj,_hx___hasMatrix),HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a")},
	{hx::fsBool,(int)offsetof(Transform_obj,_hx___hasMatrix3D),HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82")},
	{hx::fsObject /*::openfl::_legacy::display::DisplayObject*/ ,(int)offsetof(Transform_obj,_hx___parent),HX_HCSTRING("__parent","\x4a","\x70","\xad","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Transform_obj_sStaticStorageInfo = 0;
#endif

static ::String Transform_obj_sMemberFields[] = {
	HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"),
	HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8"),
	HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"),
	HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"),
	HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"),
	HX_HCSTRING("__parent","\x4a","\x70","\xad","\x95"),
	HX_HCSTRING("get_colorTransform","\x52","\xb8","\xd9","\x48"),
	HX_HCSTRING("set_colorTransform","\xc6","\xea","\x88","\x25"),
	HX_HCSTRING("get_concatenatedColorTransform","\x41","\x53","\x67","\xc6"),
	HX_HCSTRING("get_concatenatedMatrix","\xf9","\x39","\x31","\x52"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_matrix3D","\x3b","\xe9","\x0c","\x1c"),
	HX_HCSTRING("set_matrix3D","\xaf","\x0c","\x06","\x31"),
	HX_HCSTRING("get_pixelBounds","\x32","\x21","\x8c","\x98"),
	::String(null()) };

static void Transform_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Transform_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

hx::Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Object *dummy = new Transform_obj;
	Transform_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.geom.Transform","\xfe","\xc7","\x96","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Transform_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Transform_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Transform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Transform_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Transform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Transform_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom
