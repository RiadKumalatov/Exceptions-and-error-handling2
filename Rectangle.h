#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Quadrangle.h"

class Rectangle : public Quadrangle {
public:
    Rectangle(double a, double b);
    void validate_rectangle() const;
};

#endif // RECTANGLE_H
