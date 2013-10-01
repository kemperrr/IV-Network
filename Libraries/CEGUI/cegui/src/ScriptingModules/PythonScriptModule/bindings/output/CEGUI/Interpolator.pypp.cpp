// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "Interpolator.pypp.hpp"

namespace bp = boost::python;

struct Interpolator_wrapper : CEGUI::Interpolator, bp::wrapper< CEGUI::Interpolator > {

    Interpolator_wrapper()
    : CEGUI::Interpolator()
      , bp::wrapper< CEGUI::Interpolator >(){
        // null constructor
        
    }

    virtual ::CEGUI::String const & getType(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual ::CEGUI::String interpolateAbsolute( ::CEGUI::String const & value1, ::CEGUI::String const & value2, float position ){
        bp::override func_interpolateAbsolute = this->get_override( "interpolateAbsolute" );
        return func_interpolateAbsolute( boost::ref(value1), boost::ref(value2), position );
    }

    virtual ::CEGUI::String interpolateRelative( ::CEGUI::String const & base, ::CEGUI::String const & value1, ::CEGUI::String const & value2, float position ){
        bp::override func_interpolateRelative = this->get_override( "interpolateRelative" );
        return func_interpolateRelative( boost::ref(base), boost::ref(value1), boost::ref(value2), position );
    }

    virtual ::CEGUI::String interpolateRelativeMultiply( ::CEGUI::String const & base, ::CEGUI::String const & value1, ::CEGUI::String const & value2, float position ){
        bp::override func_interpolateRelativeMultiply = this->get_override( "interpolateRelativeMultiply" );
        return func_interpolateRelativeMultiply( boost::ref(base), boost::ref(value1), boost::ref(value2), position );
    }

};

void register_Interpolator_class(){

    { //::CEGUI::Interpolator
        typedef bp::class_< Interpolator_wrapper, boost::noncopyable > Interpolator_exposer_t;
        Interpolator_exposer_t Interpolator_exposer = Interpolator_exposer_t( "Interpolator", "*!\n\
        \n\
            Defines a 'interpolator' class\n\
        \n\
            Interpolator allows you to interpolate between 2 properties.\n\
            You can jut pass them as strings and Interpolator does everything for you.\n\
        \n\
            If you want to define your own interpolator, inherit this class and add it\n\
            to AnimationManager via AnimationManager.addInterpolator to make it\n\
            available for animations.\n\
        \n\
        @see\n\
            AnimationManager\n\
        *\n" );
        bp::scope Interpolator_scope( Interpolator_exposer );
        { //::CEGUI::Interpolator::getType
        
            typedef ::CEGUI::String const & ( ::CEGUI::Interpolator::*getType_function_type )(  ) const;
            
            Interpolator_exposer.def( 
                "getType"
                , bp::pure_virtual( getType_function_type(&::CEGUI::Interpolator::getType) )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "! returns type string of this interpolator\n" );
        
        }
        { //::CEGUI::Interpolator::interpolateAbsolute
        
            typedef ::CEGUI::String ( ::CEGUI::Interpolator::*interpolateAbsolute_function_type )( ::CEGUI::String const &,::CEGUI::String const &,float ) ;
            
            Interpolator_exposer.def( 
                "interpolateAbsolute"
                , bp::pure_virtual( interpolateAbsolute_function_type(&::CEGUI::Interpolator::interpolateAbsolute) )
                , ( bp::arg("value1"), bp::arg("value2"), bp::arg("position") ) );
        
        }
        { //::CEGUI::Interpolator::interpolateRelative
        
            typedef ::CEGUI::String ( ::CEGUI::Interpolator::*interpolateRelative_function_type )( ::CEGUI::String const &,::CEGUI::String const &,::CEGUI::String const &,float ) ;
            
            Interpolator_exposer.def( 
                "interpolateRelative"
                , bp::pure_virtual( interpolateRelative_function_type(&::CEGUI::Interpolator::interpolateRelative) )
                , ( bp::arg("base"), bp::arg("value1"), bp::arg("value2"), bp::arg("position") ) );
        
        }
        { //::CEGUI::Interpolator::interpolateRelativeMultiply
        
            typedef ::CEGUI::String ( ::CEGUI::Interpolator::*interpolateRelativeMultiply_function_type )( ::CEGUI::String const &,::CEGUI::String const &,::CEGUI::String const &,float ) ;
            
            Interpolator_exposer.def( 
                "interpolateRelativeMultiply"
                , bp::pure_virtual( interpolateRelativeMultiply_function_type(&::CEGUI::Interpolator::interpolateRelativeMultiply) )
                , ( bp::arg("base"), bp::arg("value1"), bp::arg("value2"), bp::arg("position") ) );
        
        }
    }

}