#pragma once
#include <iostream>

#include "shape.h"

using namespace std;

class Circle : public Shape {
   public:
    Circle(double radius = 0, Point2D c = Point2D(0, 0));
    double getRadius() const;
    Point2D getCentre() const;
    double getArea() const override;
    double getDiameter() const;
    void setRadius(double radius);

   private:
    double radius;
    Point2D centre;
};

ostream& operator<<(ostream& os, const Circle& circle);