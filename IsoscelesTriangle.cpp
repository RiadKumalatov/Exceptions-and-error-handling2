#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B)
    : Triangle(a, b, a, A, B, A) {
    validate_isosceles_triangle();
}

void IsoscelesTriangle::validate_isosceles_triangle() const {
    if (a != c || A != C) {
        throw BadShapeCreationException("Ошибка создания равнобедренного треугольника: стороны a и c или углы A и C не равны.");
    }
}
