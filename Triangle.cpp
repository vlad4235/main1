#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(const Point& A, const Point& B, const Point& C, const std::string& color)
    : Figure(color), A_(A), B_(B), C_(C) {}

double Triangle::Area() const {
    return std::abs((A_.x * (B_.y - C_.y) + B_.x * (C_.y - A_.y) + C_.x * (A_.y - B_.y)) / 2.0);
}

void Triangle::PrintInfo() const {
    Figure::PrintInfo();
    std::cout << "Triangle with vertices: " << A_ << ", " << B_ << ", " << C_ << std::endl;
    std::cout << "Area: " << Area() << std::endl;
}