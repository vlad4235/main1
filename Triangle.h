#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"
#include "Point.h"

class Triangle : public Figure {
public:
    Triangle(const Point& A, const Point& B, const Point& C, const std::string& color);
    double Area() const override;
    void PrintInfo() const override;

private:
    Point A_, B_, C_;
};

#endif // TRIANGLE_H