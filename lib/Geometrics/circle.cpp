#include "circle.h"

Circle::Circle(double radius, Point2D c) : radius(radius), centre(c) {}

double Circle::getRadius() const { return radius; }

Point2D Circle::getCentre() const { return centre; }

double Circle::getArea() const { return 3.14159 * radius * radius; }

double Circle::getDiameter() const { return 2 * radius; }

void Circle::setRadius(double radius) { this->radius = radius; }

ostream& operator<<(ostream& os, const Circle& circle) {
    os << "Circle: " << endl;
    os << "rad: " << circle.getRadius() << endl;
    os << "centre: " << circle.getCentre();
    return os;
}