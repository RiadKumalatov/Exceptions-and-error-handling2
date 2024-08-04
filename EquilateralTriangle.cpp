#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(double a)
    : Triangle(a, a, a, 60, 60, 60) {
    validate_equilateral_triangle();
}

void EquilateralTriangle::validate_equilateral_triangle() const {
    if (a != b || b != c || A != 60 || B != 60 || C != 60) {
        throw BadShapeCreationException("Ошибка создания равностороннего треугольника: все стороны и углы должны быть равны.");
    }
}
