#include <iostream>

#include "Const.h"
#include "Const2.h"
#include "circle.h"
#include "handy_math.h"
using namespace std;

int main() {
    cout << endl << "hello world!" << endl;

    // include pure header files
    cout << "PI: " << PI_CONST << endl;
    cout << "90 deg = " << 90 * CONVERT_TO_RAD << " rad" << endl;

    // use self-defined libriary with .cpp and .h files (version 1)
    cout << "math_add(int, int): " << math_add(1, 2) << endl;
    cout << "math_add(float, float): " << math_add(1.2, 1.1) << endl;

    // use self-defined library with .cpp and .h files (version 2: recursive
    // cmakelists)
    Circle circle(10.0);
    cout << circle << endl;
    cout << "area: " << circle.getArea() << endl;

    return 0;
}
