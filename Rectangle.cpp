#include "Rectangle.h"

Rectangle::Rectangle(double a, double b)
    : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
    validate_rectangle();
}

void Rectangle::validate_rectangle() const {
    if (a != c || b != d || A != 90 || B != 90 || C != 90 || D != 90) {
        throw BadShapeCreationException("Ошибка создания прямоугольника: стороны или углы не соответствуют требованиям.");
    }
}
