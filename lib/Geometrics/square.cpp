#include "square.h"

Square::Square(int sideLen) : sideLen(sideLen) {}
Square::~Square() { return; }
double Square::getArea() const { return double(sideLen * sideLen); }
void Square::setSideLen(int s) { sideLen = s; }
int Square::getSideLen() const { return sideLen; }

std::ostream& operator<<(std::ostream& os, const Square& square) {
    os << "Square: sideLen = " << square.getSideLen();
    return os;
}
