#include "Square.h"

Square::Square(double a)
    : Rectangle(a, a) {
    validate_square();
}

void Square::validate_square() const {
    if (a != b || a != c || a != d || A != 90 || B != 90 || C != 90 || D != 90) {
        throw BadShapeCreationException("Ошибка создания квадрата: стороны или углы не соответствуют требованиям.");
    }
}
