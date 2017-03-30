#pragma once
///////////////////////////////////////////////////////////////////////////////
/// @file Shapes.hpp
/// @author BrainlessLabs
/// @version 0.1
/// @brief Basic Shapes that will be used.
///////////////////////////////////////////////////////////////////////////////

#include <boost/geometry.hpp>
#include <mathfu/vector.h>
#include <mathfu/glsl_mappings.h>
#include <mathfu/constants.h>

namespace blib{
    namespace poly{
        using Point2D = mathfu::vec2;
    }
}

namespace boost
{
    namespace geometry
    {
        namespace traits
        {
            // Adapt Point2D to Boost.Geometry
            using Point2D = blib::poly::Point2D;
            using val_type = Point2D::Scalar;
            
            template<> struct tag<Point2D>
            { typedef point_tag type; };

            template<> struct coordinate_type<Point2D>
            { typedef val_type type; };

            template<> struct coordinate_system<Point2D>
            { typedef cs::cartesian type; };

            template<> struct dimension<Point2D> : boost::mpl::int_<2> {};

            template<>
            struct access<Point2D, 0>
            {
                static val_type get(Point2D const& p)
                {
                    return p.x;
                }

                static void set(Point2D& p, val_type const& value)
                {
                    p.x = value;
                }
            };

            template<>
            struct access<Point2D, 1>
            {
                static val_type get(Point2D const& p)
                {
                    return p.y;
                }

                static void set(Point2D& p, val_type const& value)
                {
                    p.y = value;
                }
            };
        }
    }
}