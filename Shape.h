#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual void print_info() const = 0;
    virtual ~Shape() {}
};

#endif // SHAPE_H
