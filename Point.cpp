#include "Point.h"
#include <cmath>

Point::Point(double x, double y) : x(x), y(y) {}

double Point::Distance(const Point& other) const {
    return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}