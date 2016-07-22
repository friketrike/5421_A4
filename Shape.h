
#ifndef SHAPE
#define SHAPE

#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>
#include <typeinfo>
#include "Canvas.h"

class Shape {

  // public or private? decide according to usage  
  public:  
    static const int SQRT2;
    static int objectCounter;
    int uid;
    std::string dname, gname;
    Shape(const std::string& dname, const std::string& gname) 
        : uid(++Shape::objectCounter)
        , dname(dname)
        , gname(gname)
    {++(Shape::objectCounter);}
    void change_d_name(const std::string& newName);

    std::string toString() const;

    // Derived classes must implement this
    virtual void scale(const int& n)=0;
    virtual double geoArea() const =0;
    virtual double geoPerimeter() const =0;
    virtual int scrArea() const =0;
    virtual int scrPerimeter() const =0;
    virtual void getBoundingDimensions(int& w, int& h) const =0;
    virtual void draw(int c, int r, Canvas& canvas, char ch = '*') const =0;
};

#endif
