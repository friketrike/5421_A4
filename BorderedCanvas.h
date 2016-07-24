
/*
 * Assignennt 4, COMP 5421, summer 2016  
 * Federico O'Reilly Regueiro 40012304
 * Concordia University
 * 
 * Borfered Canvas header file
 */

#ifndef BORDERED_CANVAS
#define BORDERED_CANVAS

#include "Canvas.h"

using namespace std;

class BorderedCanvas : public Canvas {
  public:
    BorderedCanvas(const int& columns, const int& rows)
        : Canvas(columns + 2, rows + 2)
    {decorate();}

    virtual void clear(const char& ch);
    virtual void putChar(const int& c, const int& r, const char& ch);
    virtual char getChar(const int& c, const int& r);
    virtual void decorate();
    virtual bool validatePos(const int& c, const int& r);
};

 #endif
