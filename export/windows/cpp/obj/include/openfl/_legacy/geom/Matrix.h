// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#define INCLUDED_openfl__legacy_geom_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace openfl{
namespace _legacy{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Matrix_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();

	public:
		enum { _hx_ClassId = 0x50d5d035 };

		void __construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.geom.Matrix")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._legacy.geom.Matrix"); }
		static hx::ObjectPtr< Matrix_obj > __new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty);
		static hx::ObjectPtr< Matrix_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Matrix","\x61","\xaa","\x5c","\xf0"); }

		Float a;
		Float b;
		Float c;
		Float d;
		Float tx;
		Float ty;
		 ::openfl::_legacy::geom::Matrix clone();
		::Dynamic clone_dyn();

		void concat( ::openfl::_legacy::geom::Matrix m);
		::Dynamic concat_dyn();

		void copyColumnFrom(int column, ::openfl::geom::Vector3D vector3D);
		::Dynamic copyColumnFrom_dyn();

		void copyColumnTo(int column, ::openfl::geom::Vector3D vector3D);
		::Dynamic copyColumnTo_dyn();

		void copyFrom( ::openfl::_legacy::geom::Matrix other);
		::Dynamic copyFrom_dyn();

		void copyRowFrom(int row, ::openfl::geom::Vector3D vector3D);
		::Dynamic copyRowFrom_dyn();

		void copyRowTo(int row, ::openfl::geom::Vector3D vector3D);
		::Dynamic copyRowTo_dyn();

		void createBox(Float scaleX,Float scaleY,hx::Null< Float >  rotation,hx::Null< Float >  tx,hx::Null< Float >  ty);
		::Dynamic createBox_dyn();

		void createGradientBox(Float width,Float height,hx::Null< Float >  rotation,hx::Null< Float >  tx,hx::Null< Float >  ty);
		::Dynamic createGradientBox_dyn();

		 ::openfl::_legacy::geom::Point deltaTransformPoint( ::openfl::_legacy::geom::Point point);
		::Dynamic deltaTransformPoint_dyn();

		bool equals( ::Dynamic matrix);
		::Dynamic equals_dyn();

		void identity();
		::Dynamic identity_dyn();

		 ::openfl::_legacy::geom::Matrix invert();
		::Dynamic invert_dyn();

		 ::openfl::_legacy::geom::Matrix mult( ::openfl::_legacy::geom::Matrix m);
		::Dynamic mult_dyn();

		void rotate(Float angle);
		::Dynamic rotate_dyn();

		void scale(Float x,Float y);
		::Dynamic scale_dyn();

		void setRotation(Float angle,hx::Null< Float >  scale);
		::Dynamic setRotation_dyn();

		void setTo(Float a,Float b,Float c,Float d,Float tx,Float ty);
		::Dynamic setTo_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::openfl::_legacy::geom::Point transformPoint( ::openfl::_legacy::geom::Point point);
		::Dynamic transformPoint_dyn();

		void translate(Float x,Float y);
		::Dynamic translate_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom

#endif /* INCLUDED_openfl__legacy_geom_Matrix */ 
