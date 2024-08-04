#include "Rhombus.h"

Rhombus::Rhombus(double a, double A, double B)
    : Parallelogram(a, a, A, B) {
    validate_rhombus();
}

void Rhombus::validate_rhombus() const {
    if (a != b || a != c || a != d || A != C || B != D) {
        throw BadShapeCreationException("Ошибка создания ромба: стороны или углы не соответствуют требованиям.");
    }
}
