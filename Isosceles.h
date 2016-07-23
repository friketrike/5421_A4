
#ifndef ISOSCELES
#define ISOSCELES

#include <iostream>
#include <cmath>
#include "Shape.h"
#include "Triangle.h"

class Isosceles : public Triangle {
  public:
    Isosceles(const int& h, std::string dname)
        : Triangle((2*h)-1, h, dname, "Isosceles")
    {}
    virtual void scale(const int& n);
    virtual double geoPerimeter() const;
    virtual int scrArea() const;
    virtual int scrPerimeter() const;
    virtual void getBoundingDimensions(int& w, int& h) const;
    virtual void draw(int c, int r, Canvas& canvas, char ch = '*') const;
};

#endif
