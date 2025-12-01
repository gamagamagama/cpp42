#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed areaABCval = areaABC(a, b, c);
    Fixed areaPABval = areaPAB(a, b, point);
    Fixed areaPBCval = areaPBC(b, c, point);
    Fixed areaPCAval = areaPCA(a, c, point);
    return ((areaABCval == (areaPABval + areaPBCval + areaPCAval)) ? true : false);
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
    Fixed area = (a.getX() * (b.getY() - c.getY())) 
            + (b.getX() * (c.getY() - a.getY())) 
            + (c.getX() * (a.getY() - b.getY()));
    return(((area < 0) ? area * Fixed(-1) : area));

}

Fixed areaPAB(Point const a, Point const b, Point const point) {
    Fixed area = (point.getX() * (b.getY() - a.getY())) 
            + (b.getX() * (a.getY() - point.getY())) 
            + (a.getX() * (point.getY() - b.getY()));
    return((area < 0) ? area * Fixed(-1) : area);
}

Fixed areaPBC(Point const b, Point const c, Point const point) {
    Fixed area = (point.getX() * ((c.getY() - b.getY()))) 
            + (c.getX() * ((b.getY() - point.getY()))) 
            + (b.getX() * ((point.getY() - c.getY())));
    return((area < 0) ? area * Fixed(-1) : area);
}

Fixed areaPCA(Point const a, Point const c, Point const point) {
    Fixed area = (point.getX() * (a.getY() - c.getY()))
            + (c.getX() * (c.getY() - point.getY()))
            + (a.getX() * (point.getY() - c.getY()));
    return((area < 0) ? area * Fixed(-1) : area);
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
