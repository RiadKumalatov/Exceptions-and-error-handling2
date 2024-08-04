#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Quadrangle.h"

class Parallelogram : public Quadrangle {
public:
    Parallelogram(double a, double b, double A, double B);
    void validate_parallelogram() const;
};

#endif // PARALLELOGRAM_H
