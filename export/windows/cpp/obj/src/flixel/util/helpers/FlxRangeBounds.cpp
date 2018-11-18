// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRangeBounds
#include <flixel/util/helpers/FlxRangeBounds.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2994a453e9fce1dd_9_new,"flixel.util.helpers.FlxRangeBounds","new",0x191ab035,"flixel.util.helpers.FlxRangeBounds.new","flixel/util/helpers/FlxRangeBounds.hx",9,0xa540535a)
HX_LOCAL_STACK_FRAME(_hx_pos_2994a453e9fce1dd_49_set,"flixel.util.helpers.FlxRangeBounds","set",0x191e7b77,"flixel.util.helpers.FlxRangeBounds.set","flixel/util/helpers/FlxRangeBounds.hx",49,0xa540535a)
HX_LOCAL_STACK_FRAME(_hx_pos_2994a453e9fce1dd_66_equals,"flixel.util.helpers.FlxRangeBounds","equals",0xda4be18a,"flixel.util.helpers.FlxRangeBounds.equals","flixel/util/helpers/FlxRangeBounds.hx",66,0xa540535a)
HX_LOCAL_STACK_FRAME(_hx_pos_2994a453e9fce1dd_74_toString,"flixel.util.helpers.FlxRangeBounds","toString",0x51636cb7,"flixel.util.helpers.FlxRangeBounds.toString","flixel/util/helpers/FlxRangeBounds.hx",74,0xa540535a)
namespace flixel{
namespace util{
namespace helpers{

void FlxRangeBounds_obj::__construct( ::Dynamic startMin, ::Dynamic startMax, ::Dynamic endMin, ::Dynamic endMax){
            	HX_GC_STACKFRAME(&_hx_pos_2994a453e9fce1dd_9_new)
HXLINE(  22)		this->active = true;
HXLINE(  35)		 ::Dynamic _hx_tmp;
HXDLIN(  35)		if (hx::IsNull( startMax )) {
HXLINE(  35)			_hx_tmp = startMin;
            		}
            		else {
HXLINE(  35)			_hx_tmp = startMax;
            		}
HXDLIN(  35)		this->start =  ::flixel::util::helpers::FlxBounds_obj::__alloc( HX_CTX ,startMin,_hx_tmp);
HXLINE(  36)		 ::Dynamic _hx_tmp1;
HXDLIN(  36)		if (hx::IsNull( endMin )) {
HXLINE(  36)			_hx_tmp1 = startMin;
            		}
            		else {
HXLINE(  36)			_hx_tmp1 = endMin;
            		}
HXDLIN(  36)		 ::Dynamic _hx_tmp2;
HXDLIN(  36)		if (hx::IsNull( endMax )) {
HXLINE(  36)			_hx_tmp2 = this->start->max;
            		}
            		else {
HXLINE(  36)			_hx_tmp2 = endMax;
            		}
HXDLIN(  36)		this->end =  ::flixel::util::helpers::FlxBounds_obj::__alloc( HX_CTX ,_hx_tmp1,_hx_tmp2);
            	}

Dynamic FlxRangeBounds_obj::__CreateEmpty() { return new FlxRangeBounds_obj; }

void *FlxRangeBounds_obj::_hx_vtable = 0;

Dynamic FlxRangeBounds_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxRangeBounds_obj > _hx_result = new FlxRangeBounds_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxRangeBounds_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x05e3a047;
}

 ::flixel::util::helpers::FlxRangeBounds FlxRangeBounds_obj::set( ::Dynamic startMin, ::Dynamic startMax, ::Dynamic endMin, ::Dynamic endMax){
            	HX_STACKFRAME(&_hx_pos_2994a453e9fce1dd_49_set)
HXLINE(  50)		this->start->min = startMin;
HXLINE(  51)		 ::Dynamic _hx_tmp;
HXDLIN(  51)		if (hx::IsNull( startMax )) {
HXLINE(  51)			_hx_tmp = this->start->min;
            		}
            		else {
HXLINE(  51)			_hx_tmp = startMax;
            		}
HXDLIN(  51)		this->start->max = _hx_tmp;
HXLINE(  52)		 ::Dynamic _hx_tmp1;
HXDLIN(  52)		if (hx::IsNull( endMin )) {
HXLINE(  52)			_hx_tmp1 = this->start->min;
            		}
            		else {
HXLINE(  52)			_hx_tmp1 = endMin;
            		}
HXDLIN(  52)		this->end->min = _hx_tmp1;
HXLINE(  53)		 ::Dynamic _hx_tmp2;
HXDLIN(  53)		if (hx::IsNull( endMax )) {
HXLINE(  53)			if (hx::IsNull( endMin )) {
HXLINE(  53)				_hx_tmp2 = this->start->max;
            			}
            			else {
HXLINE(  53)				_hx_tmp2 = this->end->min;
            			}
            		}
            		else {
HXLINE(  53)			_hx_tmp2 = endMax;
            		}
HXDLIN(  53)		this->end->max = _hx_tmp2;
HXLINE(  55)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxRangeBounds_obj,set,return )

bool FlxRangeBounds_obj::equals( ::flixel::util::helpers::FlxRangeBounds OtherRangeBounds){
            	HX_STACKFRAME(&_hx_pos_2994a453e9fce1dd_66_equals)
HXLINE(  66)		 ::flixel::util::helpers::FlxBounds _this = this->start;
HXDLIN(  66)		 ::flixel::util::helpers::FlxBounds otherBounds = OtherRangeBounds->start;
HXDLIN(  66)		bool _hx_tmp;
HXDLIN(  66)		if (hx::IsEq( _this->min,otherBounds->min )) {
HXLINE(  66)			_hx_tmp = hx::IsEq( _this->max,otherBounds->max );
            		}
            		else {
HXLINE(  66)			_hx_tmp = false;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  66)			 ::flixel::util::helpers::FlxBounds _this1 = this->end;
HXDLIN(  66)			 ::flixel::util::helpers::FlxBounds otherBounds1 = OtherRangeBounds->end;
HXDLIN(  66)			if (hx::IsEq( _this1->min,otherBounds1->min )) {
HXLINE(  66)				return hx::IsEq( _this1->max,otherBounds1->max );
            			}
            			else {
HXLINE(  66)				return false;
            			}
            		}
            		else {
HXLINE(  66)			return false;
            		}
HXDLIN(  66)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRangeBounds_obj,equals,return )

::String FlxRangeBounds_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_2994a453e9fce1dd_74_toString)
HXLINE(  75)		 ::Dynamic value = this->start->min;
HXDLIN(  75)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  75)		_this->label = HX_("start.min",86,2f,d5,ec);
HXDLIN(  75)		_this->value = value;
HXDLIN(  75)		 ::flixel::util::LabelValuePair _hx_tmp = _this;
HXLINE(  76)		 ::Dynamic value1 = this->start->min;
HXDLIN(  76)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  76)		_this1->label = HX_("start.max",98,28,d5,ec);
HXDLIN(  76)		_this1->value = value1;
HXDLIN(  76)		 ::flixel::util::LabelValuePair _hx_tmp1 = _this1;
HXLINE(  77)		 ::Dynamic value2 = this->end->min;
HXDLIN(  77)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  77)		_this2->label = HX_("end.min",7f,6f,06,16);
HXDLIN(  77)		_this2->value = value2;
HXDLIN(  77)		 ::flixel::util::LabelValuePair _hx_tmp2 = _this2;
HXLINE(  78)		 ::Dynamic value3 = this->end->max;
HXDLIN(  78)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  78)		_this3->label = HX_("end.max",91,68,06,16);
HXDLIN(  78)		_this3->value = value3;
HXLINE(  74)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(4)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_this3));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRangeBounds_obj,toString,return )


hx::ObjectPtr< FlxRangeBounds_obj > FlxRangeBounds_obj::__new( ::Dynamic startMin, ::Dynamic startMax, ::Dynamic endMin, ::Dynamic endMax) {
	hx::ObjectPtr< FlxRangeBounds_obj > __this = new FlxRangeBounds_obj();
	__this->__construct(startMin,startMax,endMin,endMax);
	return __this;
}

hx::ObjectPtr< FlxRangeBounds_obj > FlxRangeBounds_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic startMin, ::Dynamic startMax, ::Dynamic endMin, ::Dynamic endMax) {
	FlxRangeBounds_obj *__this = (FlxRangeBounds_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxRangeBounds_obj), true, "flixel.util.helpers.FlxRangeBounds"));
	*(void **)__this = FlxRangeBounds_obj::_hx_vtable;
	__this->__construct(startMin,startMax,endMin,endMax);
	return __this;
}

FlxRangeBounds_obj::FlxRangeBounds_obj()
{
}

void FlxRangeBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRangeBounds);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxRangeBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(active,"active");
}

hx::Val FlxRangeBounds_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxRangeBounds_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast<  ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast<  ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRangeBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxRangeBounds_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxRangeBounds_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxRangeBounds_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsBool,(int)offsetof(FlxRangeBounds_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxRangeBounds_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxRangeBounds_obj_sMemberFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void FlxRangeBounds_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRangeBounds_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxRangeBounds_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRangeBounds_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxRangeBounds_obj::__mClass;

void FlxRangeBounds_obj::__register()
{
	hx::Object *dummy = new FlxRangeBounds_obj;
	FlxRangeBounds_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.helpers.FlxRangeBounds","\xc3","\x71","\x2f","\x28");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxRangeBounds_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxRangeBounds_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxRangeBounds_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxRangeBounds_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxRangeBounds_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxRangeBounds_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace helpers
