#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

#include "Triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b, double c, double A, double B);
    void validate_right_triangle() const;
};

#endif // RIGHT_TRIANGLE_H
