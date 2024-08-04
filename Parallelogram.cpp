#include "Parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadrangle(a, b, a, b, A, B, A, B) {
    validate_parallelogram();
}

void Parallelogram::validate_parallelogram() const {
    if (a != c || b != d || A != C || B != D) {
        throw BadShapeCreationException("Ошибка создания параллелограмма: стороны или углы не соответствуют требованиям.");
    }
}
