#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double a);
    void validate_equilateral_triangle() const;
};

#endif // EQUILATERAL_TRIANGLE_H
