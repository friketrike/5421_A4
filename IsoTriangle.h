
#ifndef ISOSCELES
#define ISOSCELES

#include <iostream>
#include <cmath>
#include "Shape.h"

class IsoTriangle : public Triangle {
  public:
    IsoTriangle(int h, std::string dname)
        : Triangle((2*h)-1, h, dname, "Isosceles")
    {}
    virtual void scale(int n);
    virtual double geometricPerimeter() const;
    virtual int screenArea() const;
    virtual int screenPerimeter() const;
    virtual void getBoundingDimensions(int& w, int& h) const;
    virtual void draw(int c, int r, Canvas& canvas, char ch = '*') const {};
};

#endif
