#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    public:
        Point();
        Point(const Point &other);
        Point &operator=(const Point &other);
        Point(float const x, float const y);
        Fixed getX() const;
        Fixed getY() const;
        ~Point();
    private:
        Fixed _x;
        Fixed _y;
        
        
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
Fixed areaABC(Point const a, Point const b, Point const c);
Fixed areaPAB( Point const a, Point const b, Point const point);
Fixed areaPBC( Point const b, Point const c, Point const point);
Fixed areaPCA( Point const a, Point const c, Point const point);
void area_print(Point const a, Point const b, Point const c, Point const point);

#endif