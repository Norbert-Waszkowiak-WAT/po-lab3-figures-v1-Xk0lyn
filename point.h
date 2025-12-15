#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <iomanip>

class Point {
private:
    double x;
    double y;

public:
    Point(double x = 0, double y = 0);
    
    double getX() const;
    double getY() const;
    
    void setX(double newX);
    void setY(double newY);
    
    std::string toString() const;
    bool equals(const Point& other) const;
    void flip();
    void move(double dx, double dy);
    
    double distance(const Point& other) const;
    
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

#endif
