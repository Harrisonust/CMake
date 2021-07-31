#include "circle.h"

Circle::Circle(double radius) : radius(radius) {}

double Circle::getRadius() const { return radius; }

double Circle::getArea() const { return 3.14159 * radius * radius; }

double Circle::getDiameter() const { return 2 * radius; }

void Circle::setRadius(double radius) { this->radius = radius; }

ostream& operator<<(ostream& os, const Circle& circle) {
    os << "Circle: " << circle.getRadius();
    return os;
}