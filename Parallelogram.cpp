#include "Parallelogram.h"
#include <iostream>
#include <cmath>

Parallelogram::Parallelogram(const Point& A, const Point& B, const Point& C, const Point& D, const std::string& color)
    : Figure(color), A_(A), B_(B), C_(C), D_(D) {}

double Parallelogram::Area() const {
    double base = A_.Distance(B_);
    double height = C_.Distance(Point(A_.x, C_.y));
    return base * height;
}

void Parallelogram::PrintInfo() const {
    Figure::PrintInfo();
    std::cout << "Parallelogram with vertices: " << A_ << ", " << B_ << ", " << C_ << ", " << D_ << std::endl;
    std::cout << "Area: " << Area() << std::endl;
}