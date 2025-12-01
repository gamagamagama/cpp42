
#include "Point.hpp"

Point::Point(){}

Point::~Point(){}

Point::Point(const Point &other)
{
   // std::cout << "CPY constructor" << std::endl;
    *this = other;
}

Point &Point::operator=(const Point &other)
{
   // std::cout << "CPY assigment operator" << std::endl;
    _x = other.getX();
    _y = other.getY();
    return (*this);
}

Point::Point(float const x, float const y) : _x(x), _y(y) {}

Fixed Point::getX() const {return (_x);}
Fixed Point::getY() const {return (_y);}
