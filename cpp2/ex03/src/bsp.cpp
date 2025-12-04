#include "Fixed.hpp"
#include "Point.hpp"
#include "Colors.hpp"
#include <vector>
#include <algorithm>
#include <limits>


bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed A  = areaABC(a,b,c).toFloat();
    Fixed A1 = areaPAB(a,b,point).toFloat();
    Fixed A2 = areaPBC(b,c,point).toFloat();
    Fixed A3 = areaPCA(a,c,point).toFloat();
    Fixed floatMin = 0.00390625f;
    Fixed sum = A1 + A2 + A3 - floatMin;
    Fixed lol = A - sum;
    // std::cout << "A: " << A << std::endl;
    // std::cout << "A1: " << A1 << std::endl;
    // std::cout << "A2: " << A2 << std::endl;
    // std::cout << "A3: " << A3 << std::endl;
    // std::cout << "sum: " << sum << std::endl;
    // std::cout << "lol: " << lol << std::endl;
    // std::cout << std::endl;
    bool result = (lol >= 0 && A >= sum && A1 > 0 && A2 > 0 && A3 > 0) ? true : false;
    // std::cout <<RED<< "Result: " << result <<RESET<< std::endl;
    return (result);
}

void area_print(Point const a, Point const b, Point const c, Point const point) {
    
    std::cout << "A(" << a.getX() << ", " << a.getY() << ")" << std::endl;
    std::cout << "B(" << b.getX() << ", " << b.getY() << ")" << std::endl;
    std::cout << "C(" << c.getX() << ", " << c.getY() << ")" << std::endl;
    std::cout << "Point(" << point.getX() << ", " << point.getY() << ")" << std::endl;
    std::cout << std::endl;
    
    std::cout << "AreaABC: " << areaABC(a, b, c) << std::endl;
    std::cout << "AreaPAB: " << areaPAB(a, b, point) << std::endl;
    std::cout << "AreaPBC: " << areaPBC(b, c, point) << std::endl;
    std::cout << "AreaPCA: " << areaPCA(a, c, point) << std::endl;
    std::cout << std::endl;
    bsp(a, b, c, point);
    
}

Fixed areaABC(Point const a, Point const b, Point const c) {
    Fixed area = (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()))
                + (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()))
                + (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()));
    return (area < Fixed(0) ? area * Fixed(-1) : area);
}


Fixed areaPAB(Point const a, Point const b, Point const point) {
    Fixed area = (point.getX().toFloat() * (b.getY().toFloat() - a.getY().toFloat())) 
            + (b.getX().toFloat() * (a.getY().toFloat() - point.getY().toFloat())) 
            + (a.getX().toFloat() * (point.getY().toFloat() - b.getY().toFloat()));
    return((area < 0) ? area * Fixed(-1) : area);
}

Fixed areaPBC(Point const b, Point const c, Point const point) {
    Fixed area = (point.getX().toFloat() * ((c.getY().toFloat() - b.getY().toFloat()))) 
            + (c.getX().toFloat() * ((b.getY().toFloat() - point.getY().toFloat()))) 
            + (b.getX().toFloat() * ((point.getY().toFloat() - c.getY().toFloat())));
    return((area < 0) ? area * Fixed(-1) : area);
}

Fixed areaPCA(Point const a, Point const c, Point const point) {
    Fixed area = (a.getX().toFloat() * (c.getY().toFloat() - point.getY().toFloat()))
                + (c.getX().toFloat() * (point.getY().toFloat() - a.getY().toFloat()))
                + (point.getX().toFloat() * (a.getY().toFloat() - c.getY().toFloat()));
    return (area < Fixed(0) ? area * Fixed(-1) : area);
}


// DOT PRODUCT
    //AREA ABC
    //ax * (by - cy)
    //bx * (cy - ay)
    //cx * (ay - by)

    //AREA PAB
    //px * (by - ay)
    //bx * (ay - py)
    //ax * (py - by)

    //AREA PBC
    //px * (cy - by)
    //cx * (by - py)
    //bx * (py - cy)

    //AREA PCA
    //ax * (cy - py)
    //cx * (py - ay)
    //px * (ay - cy)



