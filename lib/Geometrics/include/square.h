#pragma once
#include <iostream>

#include "shape.h"

class Square : public Shape {
   public:
    Square(int sideLen);
    virtual ~Square();
    virtual double getArea() const override;
    virtual void setSideLen(int sideLen);
    virtual int getSideLen() const;

   private:
    int sideLen;
};

std::ostream& operator<<(std::ostream& os, const Square& square);
