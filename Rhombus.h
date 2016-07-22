
#ifndef RHOMBUS
#define RHOMBUS

#include <iostream>
#include "Shape.h"

class Rhombus : public Shape {
  public:
    int d;  
    Rhombus(const int& d, const std::string& dname)
        : Shape(dname, "Rhombus")
        , d(d|1) 
    { }
    virtual void scale(const int& n);
    virtual double geoArea() const;
    virtual double geoPerimeter() const;
    virtual int scrArea() const;
    virtual int scrPerimeter() const;
    virtual void getBoundingDimensions(int& w, int& h) const;
    virtual void draw(int c, int r, Canvas& canvas, char ch = '*') const; 
};

#endif
