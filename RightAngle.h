
/*
 * Assignennt 4, COMP 5421, summer 2016  
 * Federico O'Reilly Regueiro 40012304
 * Concordia University
 * 
 * Right Angle triangle header file
 */

#ifndef RIGHTANGLE
#define RIGHTANGLE

#include <iostream>
#include "Shape.h"
#include "Triangle.h"

class RightAngle : public Triangle {
  public:
    RightAngle(const int& h, const std::string& dname)
        : Triangle(h, h, dname, "Right Angle")
    {}
    virtual void scale(const int& n);
    virtual double geoPerimeter() const;
    virtual int scrArea() const;
    virtual int scrPerimeter() const;
    virtual void getBoundingDimensions(int& w, int& h) const;
    virtual void draw(int c, int r, Canvas& canvas, char ch = '*') const;
};

#endif
