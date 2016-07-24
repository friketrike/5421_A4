
/*
 * Assignennt 4, COMP 5421, summer 2016  
 * Federico O'Reilly Regueiro 40012304
 * Concordia University
 * 
 * Plain Canvas header file
 */

#ifndef PLAIN_CANVAS
#define PLAIN_CANVAS

#include "Canvas.h"

using namespace std;

class PlainCanvas : public Canvas {
  public:
    PlainCanvas(const int& columns, const int& rows)
        : Canvas(columns, rows)
    {}

    virtual void clear(const char& ch);
    virtual void putChar(const int& c, const int& r, const char& ch);
    virtual char getChar(const int& c, const int& r);
    virtual void decorate() {} // no need in plain canvas
    virtual bool validatePos(const int& c, const int& r);
};

 #endif
