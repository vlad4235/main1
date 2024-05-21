#pragma once
#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include "Point.h"

class Figure {
public:
    Figure(const std::string& color);
    virtual ~Figure() = default;

    virtual double Area() const = 0;
    virtual void PrintInfo() const;

protected:
    std::string color_;
};

#endif // FIGURE_H