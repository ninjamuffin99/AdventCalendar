// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#ifndef INCLUDED_flixel_effects_postprocess__PostProcess_Uniform
#define INCLUDED_flixel_effects_postprocess__PostProcess_Uniform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_688f290728f1a2d3_22_new)
HX_DECLARE_CLASS4(flixel,effects,postprocess,_PostProcess,Uniform)

namespace flixel{
namespace effects{
namespace postprocess{
namespace _PostProcess{


class HXCPP_CLASS_ATTRIBUTES Uniform_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Uniform_obj OBJ_;
		Uniform_obj();

	public:
		enum { _hx_ClassId = 0x5bd4a5cf };

		void __construct(int id,Float value);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.effects.postprocess._PostProcess.Uniform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.effects.postprocess._PostProcess.Uniform"); }

		hx::ObjectPtr< Uniform_obj > __new(int id,Float value) {
			hx::ObjectPtr< Uniform_obj > __this = new Uniform_obj();
			__this->__construct(id,value);
			return __this;
		}

		static hx::ObjectPtr< Uniform_obj > __alloc(hx::Ctx *_hx_ctx,int id,Float value) {
			Uniform_obj *__this = (Uniform_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Uniform_obj), false, "flixel.effects.postprocess._PostProcess.Uniform"));
			*(void **)__this = Uniform_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_688f290728f1a2d3_22_new)
HXLINE(  23)		( ( ::flixel::effects::postprocess::_PostProcess::Uniform)(__this) )->id = id;
HXLINE(  24)		( ( ::flixel::effects::postprocess::_PostProcess::Uniform)(__this) )->value = value;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniform_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Uniform","\x14","\x69","\xb5","\x82"); }

		int id;
		Float value;
};

} // end namespace flixel
} // end namespace effects
} // end namespace postprocess
} // end namespace _PostProcess

#endif /* INCLUDED_flixel_effects_postprocess__PostProcess_Uniform */ 
