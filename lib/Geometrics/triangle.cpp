#include "triangle.h"

Triangle::Triangle(Point2D p1, Point2D p2, Point2D p0)
    : p1(p1), p2(p2), p0(p0) {}

double Triangle::getArea() const {
    double a = this->p1.getDistance(this->p2);
    double b = this->p2.getDistance(this->p0);
    double c = this->p0.getDistance(this->p1);
    double s = (a + b + c) / 2.0f;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

Point2D Triangle::getCentroid() const {
    double a = this->p1.getDistance(this->p2);
    double b = this->p2.getDistance(this->p0);
    double c = this->p0.getDistance(this->p1);
    double s = (a + b + c) / 2.0f;
    double x = (this->p1.getX() + this->p2.getX() + this->p0.getX()) / 3.0f;
    double y = (this->p1.getY() + this->p2.getY() + this->p0.getY()) / 3.0f;
    return Point2D(x, y);
}

Point2D Triangle::getCentroid() {
    double a = this->p1.getDistance(this->p2);
    double b = this->p2.getDistance(this->p0);
    double c = this->p0.getDistance(this->p1);
    double s = (a + b + c) / 2.0f;
    double x = (this->p1.getX() + this->p2.getX() + this->p0.getX()) / 3.0f;
    double y = (this->p1.getY() + this->p2.getY() + this->p0.getY()) / 3.0f;
    return Point2D(x, y);
}

Point2D Triangle::getPoint(int i) const {
    switch (i) {
        case 0:
            return this->p0;
        case 1:
            return this->p1;
        case 2:
            return this->p2;
    }
    return Point2D();
}

std::ostream& operator<<(std::ostream& os, const Triangle& t) {
    os << "Triangle: " << t.getPoint(0) << "  " << t.getPoint(1) << "  "
       << t.getPoint(2);

    return os;
}