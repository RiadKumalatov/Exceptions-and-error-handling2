#include <iostream>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print_shape_info(const Shape& shape) {
    shape.print_info();
}

int main() {
    setlocale(LC_ALL, "Russian");

    try {
        Triangle triangle(10, 20, 30, 50, 60, 70);
        print_shape_info(triangle);
    }
    catch (const BadShapeCreationException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        RightTriangle right_triangle(10, 20, 30, 50, 60);
        print_shape_info(right_triangle);
    }
    catch (const BadShapeCreationException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
        print_shape_info(isosceles_triangle);
    }
    catch (const BadShapeCreationException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        EquilateralTriangle equilateral_triangle(30);
        print_shape_info(equilateral_triangle);
    }
    catch (const BadShapeCreationException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
        print_shape_info(quadrangle);
    }
    catch (const BadShapeCreationException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Rectangle rectangle(10, 20);
        print_shape_info(rectangle);
    }
    catch (const BadShapeCreationException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Square square(20);
        print_shape_info(square);
    }
    catch (const BadShapeCreationException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Parallelogram parallelogram(20, 30, 30, 40);
        print_shape_info(parallelogram);
    }
    catch (const BadShapeCreationException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Rhombus rhombus(30, 30, 40);
        print_shape_info(rhombus);
    }
    catch (const BadShapeCreationException& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
