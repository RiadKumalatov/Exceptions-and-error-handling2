#ifndef ISOSCELES_TRIANGLE_H
#define ISOSCELES_TRIANGLE_H

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b, double A, double B);
    void validate_isosceles_triangle() const;
};

#endif // ISOSCELES_TRIANGLE_H
