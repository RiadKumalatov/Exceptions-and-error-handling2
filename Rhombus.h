#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Parallelogram.h"

class Rhombus : public Parallelogram {
public:
    Rhombus(double a, double A, double B);
    void validate_rhombus() const;
};

#endif // RHOMBUS_H
