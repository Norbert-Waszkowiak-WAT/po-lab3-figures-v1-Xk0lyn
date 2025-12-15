#include "point.h"

Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }

void Point::setX(double newX) { x = newX; }
void Point::setY(double newY) { y = newY; }

std::string Point::toString() const {
    std::ostringstream oss;
    oss << "Point(";
    oss << std::fixed << std::setprecision(1);
    oss << x << ", " << y << ")";
    return oss.str();
}

bool Point::equals(const Point& other) const {
    return (x == other.x) && (y == other.y);
}

void Point::flip() {
    x = -x;
    y = -y;
}

void Point::move(double dx, double dy) {
    x += dx;
    y += dy;
}

double Point::distance(const Point& other) const {
    double dx = x - other.x;
    double dy = y - other.y;
    return std::sqrt(dx*dx + dy*dy);
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.getX() << ", " << p.getY() << ")";
    return os;
}
