
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
    virtual void scale(int n){}
    virtual double geometricArea() const{}
    virtual double geometricPerimeter() const{}
    virtual int screenArea() const{}
    virtual int screenPerimeter() const{}
    virtual void getBoundingDimensions(int& w, int& h) const{w = d; h = d;}
    virtual void draw(int c, int r, Canvas& canvas, char ch = '*') const {} 
};

#endif
