// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dde26e6665a5be03_83_new,"haxe.xml._Fast.HasNodeAccess","new",0xd184aba0,"haxe.xml._Fast.HasNodeAccess.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",83,0x60a2153a)
namespace haxe{
namespace xml{
namespace _Fast{

void HasNodeAccess_obj::__construct( ::Xml x){
            	HX_STACKFRAME(&_hx_pos_dde26e6665a5be03_83_new)
HXLINE(  83)		this->_hx___x = x;
            	}

Dynamic HasNodeAccess_obj::__CreateEmpty() { return new HasNodeAccess_obj; }

void *HasNodeAccess_obj::_hx_vtable = 0;

Dynamic HasNodeAccess_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HasNodeAccess_obj > _hx_result = new HasNodeAccess_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HasNodeAccess_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x026a6ed6;
}


hx::ObjectPtr< HasNodeAccess_obj > HasNodeAccess_obj::__new( ::Xml x) {
	hx::ObjectPtr< HasNodeAccess_obj > __this = new HasNodeAccess_obj();
	__this->__construct(x);
	return __this;
}

hx::ObjectPtr< HasNodeAccess_obj > HasNodeAccess_obj::__alloc(hx::Ctx *_hx_ctx, ::Xml x) {
	HasNodeAccess_obj *__this = (HasNodeAccess_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HasNodeAccess_obj), true, "haxe.xml._Fast.HasNodeAccess"));
	*(void **)__this = HasNodeAccess_obj::_hx_vtable;
	__this->__construct(x);
	return __this;
}

HasNodeAccess_obj::HasNodeAccess_obj()
{
}

void HasNodeAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HasNodeAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(_hx___x,"__x");
	HX_MARK_END_CLASS();
}

void HasNodeAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(_hx___x,"__x");
}

hx::Val HasNodeAccess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return hx::Val( _hx___x ); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

hx::Val HasNodeAccess_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { _hx___x=inValue.Cast<  ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void HasNodeAccess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HasNodeAccess_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(HasNodeAccess_obj,_hx___x),HX_HCSTRING("__x","\x58","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HasNodeAccess_obj_sStaticStorageInfo = 0;
#endif

static ::String HasNodeAccess_obj_sMemberFields[] = {
	HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),
	::String(null()) };

static void HasNodeAccess_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HasNodeAccess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HasNodeAccess_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HasNodeAccess_obj::__mClass,"__mClass");
};

#endif

hx::Class HasNodeAccess_obj::__mClass;

void HasNodeAccess_obj::__register()
{
	hx::Object *dummy = new HasNodeAccess_obj;
	HasNodeAccess_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml._Fast.HasNodeAccess","\xae","\x9b","\x26","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HasNodeAccess_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HasNodeAccess_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HasNodeAccess_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HasNodeAccess_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HasNodeAccess_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HasNodeAccess_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml
} // end namespace _Fast
