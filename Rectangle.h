
/*
 * Assignennt 4, COMP 5421, summer 2016  
 * Federico O'Reilly Regueiro 40012304
 * Concordia University
 * 
 * Rectangle header file
 */

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
    virtual double geoArea() const;
    virtual double geoPerimeter() const;
    virtual int scrArea() const;
    virtual int scrPerimeter() const;
    virtual void getBoundingDimensions(int& w, int& h) const;
    virtual void draw(int c, int r, Canvas& canvas, char ch = '*') const;
};

#endif
