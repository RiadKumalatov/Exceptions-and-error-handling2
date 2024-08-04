#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B)
    : Triangle(a, b, a, A, B, A) {
    validate_isosceles_triangle();
}

void IsoscelesTriangle::validate_isosceles_triangle() const {
    if (a != c || A != C) {
        throw BadShapeCreationException("������ �������� ��������������� ������������: ������� a � c ��� ���� A � C �� �����.");
    }
}
