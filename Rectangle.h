
#ifndef RECTANGLE
#define RECTANGLE

#include <iostream>
#include "Shape.h"

class Rectangle : public Shape {
  public:
    int w, h;  
    Rectangle(const int& w, const int& h, const std::string& dname)
        : Shape(dname, "Rectangle")
        , w(w)
        , h(h)
    {}
    virtual void scale(const int& n);
    virtual double geometricArea() const;
    virtual double geometricPerimeter() const;
    virtual int screenArea() const;
    virtual int screenPerimeter() const;
    virtual void getBoundingDimensions(int& w, int& h) const;
    virtual void draw(int c, int r, Canvas& canvas, char ch = '*') const {}
};

#endif
