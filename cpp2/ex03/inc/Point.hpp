#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point : public Fixed
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
        Fixed::Ctor ctor_;
        Fixed::_fixedPointValue _x;
        Fixed::_fixedPointValue _y;
};

#endif