
#ifndef RIGHTTRIANGLE
#define RIGHTTRIANGLE

#include <iostream>
#include "Shape.h"

class RightTriangle : public Triangle{
  public:
    RightTriangle(int h, std::string dname)
        : Triangle(h, h, dname, "Right Isosceles")
    {}
    virtual void scale(int n);
    virtual double geometricPerimeter() const;
    virtual int screenArea() const;
    virtual int screenPerimeter() const;
    virtual void getBoundingDimensions(int& w, int& h) const;
    virtual void draw(int c, int r, Canvas& canvas, char ch = '*') const {}
};

#endif
