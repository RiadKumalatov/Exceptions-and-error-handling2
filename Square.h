#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(double a);
    void validate_square() const;
};

#endif // SQUARE_H
