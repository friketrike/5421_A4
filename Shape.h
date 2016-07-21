
#ifndef SHAPE
#define SHAPE

#include <string>
#include <typeinfo>
#include "Canvas.h"

class Shape {

  // public or private? decide according to usage  
  public:  
    static int objectCounter;
    int uid;
    std::string dname, gname;
    Shape(std::string dname, std::string gname) 
        : uid(++Shape::objectCounter)
        , dname(dname)
        , gname(gname)
    {++(Shape::objectCounter);}
    void change_d_name(const std::string& newName);

    std::string toString() const;

    // Derived classes must implement this
    virtual void scale(int n)=0;
    virtual double geometricArea() const =0;
    virtual double geometricPerimeter() const =0;
    virtual int screenArea() const =0;
    virtual int screenPerimeter() const =0;
    virtual void getBoundingDimensions(int& w, int& h) const =0;
    virtual void draw(int c, int r, Canvas& canvas, char ch = '*') const =0;
};

#endif
