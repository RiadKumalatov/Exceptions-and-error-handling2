#include "Triangle.h"
#include <iostream>
#include <stdexcept>

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : a(a), b(b), c(c), A(A), B(B), C(C) {
    validate_triangle();
}

void Triangle::validate_triangle() const {
    if (A + B + C != 180) {
        throw BadShapeCreationException("Ошибка создания треугольника: сумма углов не равна 180.");
    }
}

void Triangle::print_info() const {
    std::cout << "Треугольник:\nСтороны: a=" << a << " b=" << b << " c=" << c
        << "\nУглы: A=" << A << " B=" << B << " C=" << C << "\n";
}
