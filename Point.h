#pragma once
#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
public:
    Point(double x = 0, double y = 0);
    double Distance(const Point& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Point& point);

    double x, y;
};

#endif // POINT_H