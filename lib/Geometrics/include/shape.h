#pragma once
#include "Point2D.h"
class Shape {
   public:
    Shape() = default;
    virtual ~Shape() = default;
    virtual double getArea() const = 0;
};