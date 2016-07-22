
#ifndef TRIANGLE
#define TRIANGLE

#include <iostream>
#include "Shape.h"

class Triangle : public Shape {
  public:
    int b, h;
    Triangle(const int& b, const int& h, const std::string& dname, const std::string& gname)
        : Shape(dname, gname)
        , b(b)
        , h(h)
    {}
    virtual void scale(const int& n) =0;
    virtual double geoArea() const {return double(h*b)/2;}
    virtual double geoPerimeter() const =0;
    virtual int scrArea() const =0;
    virtual int scrPerimeter() const =0;
    virtual void getBoundingDimensions(int& w, int& h) const { 
        w = this->b; 
        h = this->h;
    }
    virtual void draw(int c, int r, Canvas& canvas, char ch = '*') const =0;
};

#endif
