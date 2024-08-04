#include "RightTriangle.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B)
    : Triangle(a, b, c, A, B, 90) {
    validate_right_triangle();
}

void RightTriangle::validate_right_triangle() const {
    if (C != 90) {
        throw BadShapeCreationException("Ошибка создания прямоугольного треугольника: угол C не равен 90.");
    }
}
