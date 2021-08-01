#pragma once
#include <iostream>

#include "Point2D.h"
#include "shape.h"

class Triangle : public Shape {
   public:
    Triangle(Point2D p0, Point2D p1, Point2D p2);
    double getArea() const override;
    Point2D getCentroid() const;
    Point2D getCentroid();
    Point2D getPoint(int i) const;

   private:
    Point2D p0;
    Point2D p1;
    Point2D p2;
};

std::ostream& operator<<(std::ostream& os, const Triangle& t);