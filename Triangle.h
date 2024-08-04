#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include "BadShapeCreationException.h"

class Triangle : public Shape {
protected:
    double a, b, c;
    double A, B, C;

public:
    Triangle(double a, double b, double c, double A, double B, double C);
    virtual void print_info() const override;
    void validate_triangle() const;
};

#endif // TRIANGLE_H
