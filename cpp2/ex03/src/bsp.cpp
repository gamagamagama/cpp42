#include "Fixed.hpp"
#include "Point.hpp"
#include <vector>
#include <algorithm>
#include <limits>

// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
// 	Fixed	cx_ax(c.getX() - a.getX());
// 	Fixed	cy_ay(c.getY() - a.getY());
// 	Fixed	bx_ax(b.getX() - a.getX());
// 	Fixed	by_ay(b.getY() - a.getY());
// 	Fixed	w1( (a.getX() * cy_ay.toFloat() + (point.getY() - a.getY()) * cx_ax.toFloat() - point.getX() * cy_ay.toFloat()) /
// 				(by_ay.toFloat() * cx_ax.toFloat() - bx_ax.toFloat() * cy_ay.toFloat()));
// 	Fixed	w2( (point.getY() - a.getY() - w1.toFloat() * by_ay.toFloat()) /
// 				cy_ay.toFloat());
// 	//std::cout << "w1 = " << w1 << std::endl;
// 	//std::cout << "w2 = " << w2 << std::endl;
// 	//std::cout << "w1 + w2 = " << w1 + w2 << std::endl;
// 	if (w1 >= 0 && w1 >= 0 && (w1 + w2) <= 1)
// 		return (true);
// 	return (false);
// }


// bool bsp(Point const a, Point const b, Point const c, Point const point) {
//     Fixed areaABCval = areaABC(a, b, c).toFloat();
//     Fixed areaPABval = areaPAB(a, b, point).toFloat();
//     Fixed areaPBCval = areaPBC(b, c, point).toFloat();
//     Fixed areaPCAval = areaPCA(a, c, point).toFloat();
//     std::cout << "area " << areaPABval + areaPBCval + areaPCAval << std::endl;
//     return ((areaABCval == (areaPABval + areaPBCval + areaPCAval)) ? true : false);
// }

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed A  = areaABC(a,b,c).toFloat();
    Fixed A1 = areaPAB(a,b,point).toFloat();
    Fixed A2 = areaPBC(b,c,point).toFloat();
    Fixed A3 = areaPCA(a,c,point).toFloat();
    Fixed sum = A1 + A2 + A3;
    Fixed eps = std::numeric_limits<Fixed>::epsilon().toFloat();
    Fixed lol = A - sum;
    std::cout <<"A - sum = " << lol << std::endl;
    std::cout <<"A = "<< A << std::endl;
    std::cout <<"eps = "<< eps << std::endl;
    return (lol < eps) && (A > eps);
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
    std::cout << "sum:"<< bsp(a, b, c, point) <<std::endl;
    
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
    //px * (ay - cy)
    //cx * (cy - py)
    //ax * (py - cy)




// Simple ASCII visualizer for four points (A,B,C,P).
// cols/rows control resolution of the printed grid.


