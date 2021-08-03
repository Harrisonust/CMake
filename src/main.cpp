#include <iostream>

// clang-format off
#include "path.h"
#include "Const.h"
#include "Const2.h"

#include "handy_math.h"

#include "circle.h"
#include "square.h"
#include "triangle.h"
// clang-format on

using namespace std;

int main() {
    cout << "project_root_path: " << project_root_path << endl;

    cout << endl << "hello world!" << endl;

    // include pure header files
    cout << "PI: " << PI_CONST << endl;
    cout << "90 deg = " << 90 * CONVERT_TO_RAD << " rad" << endl;

    // use self-defined libriary with .cpp and .h files (version 1)
    cout << "math_add(int, int): " << math_add(1, 2) << endl;
    cout << "math_add(float, float): " << math_add(1.2, 1.1) << endl << endl;

    // use self-defined library with .cpp and .h files (version 2: recursive
    // cmakelists)
    Circle circle(10.0);
    cout << circle << endl;
    cout << "area: " << circle.getArea() << endl << endl;

    Square square(10);
    cout << square << endl;
    cout << "area: " << square.getArea() << endl << endl;

    Triangle triangle(Point2D(0, 0), Point2D(10, 0), Point2D(0, 10));
    cout << triangle << endl;
    cout << "area: " << triangle.getArea() << endl << endl;
    return 0;
}
