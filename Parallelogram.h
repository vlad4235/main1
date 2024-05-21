#pragma once
#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Figure.h"
#include "Point.h"

class Parallelogram : public Figure {
public:
    Parallelogram(const Point& A, const Point& B, const Point& C, const Point& D, const std::string& color);
    double Area() const override;
    void PrintInfo() const override;

private:
    Point A_, B_, C_, D_;
};

#endif // PARALLELOGRAM_H