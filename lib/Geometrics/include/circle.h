#pragma once
#include <iostream>
using namespace std;

class Circle {
   public:
    Circle(double radius = 0);
    double getRadius() const;
    double getArea() const;
    double getDiameter() const;
    void setRadius(double radius);

   private:
    double radius;
};

ostream& operator<<(ostream& os, const Circle& circle);