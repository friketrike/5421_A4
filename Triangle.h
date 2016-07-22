
#ifndef TRIANGLE
#define TRIANGLE

#include <iostream>
#include "Shape.h"

class Triangle : public Shape {
  public:
    int b, h;
    Triangle(int b, int h, std::string dname, std::string, gname)
        : Shape(dname, gname)
        , b(b)
        , h(h)
    {}
    virtual void scale(int n) =0;
    virtual double geometricArea() const {return double(h*b)/2;}
    virtual double geometricPerimeter() const =0;
    virtual int screenArea() const =0;
    virtual int screenPerimeter() const =0;
    virtual void getBoundingDimensions(int& w, int& h) const { 
        w = this->b; 
        h = this->h;
    }
    virtual void draw(int c, int r, Canvas& canvas, char ch = '*') const =0;
};

#endif
