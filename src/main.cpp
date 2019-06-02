#include <iostream>
#include "Point.h"
#include "Vector.h"

int main() {
    Vector v, u;
    Point a;
    Point b(1, 1, 1);

    std::cout << a << std::endl << b << std::endl;

    v = a.getVectorTo(b);
    u = a.getVectorFrom(b);

    std::cout << std::endl << v << std::endl << u << std::endl;

    return 0;
}
