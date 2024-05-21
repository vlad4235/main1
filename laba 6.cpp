#include <iostream>
#include <vector>
#include "Parallelogram.h"
#include "Triangle.h"

void FigureInfo(const Figure& fig) {
    fig.PrintInfo();
}

int main() {
    std::vector<Figure*> figures;

    figures.push_back(new Parallelogram(Point(0, 0), Point(4, 0), Point(5, 3), Point(1, 3), "Shiny greenish-yellow"));
    figures.push_back(new Triangle(Point(0, 0), Point(4, 0), Point(2, 3), "Bright red"));

    for (const auto& fig : figures) {
        FigureInfo(*fig);
    }

    for (auto& fig : figures) {
        delete fig;
    }

    return 0;
}
