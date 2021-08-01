#include "Point2D.h"

std::ostream &operator<<(std::ostream &os, const Point2D &p) {
    os << "(" << p.getX() << ", " << p.getY() << ")";
    return os;
}