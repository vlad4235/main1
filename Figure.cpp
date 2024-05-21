#include "Figure.h"
#include <iostream>

Figure::Figure(const std::string& color) : color_(color) {}

void Figure::PrintInfo() const {
    std::cout << "Color: " << color_ << std::endl;
}