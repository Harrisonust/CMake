#pragma once
#include <math.h>

#include <iostream>

class Point2D {
   public:
    Point2D(double x = 0, double y = 0) : p1(x), p2(y) {}
    double getDistance(Point2D another) const {
        return sqrt(pow(p1 - another.p1, 2) + pow(p2 - another.p2, 2));
    }
    double getX() const { return p1; }
    double getY() const { return p2; }
    void setX(double x) { p1 = x; }
    void setY(double y) { p2 = y; }

   private:
    double p1;
    double p2;
};

std::ostream &operator<<(std::ostream &os, const Point2D &p);

#define Pt2D(p1, p2) Point2D(p1, p2)