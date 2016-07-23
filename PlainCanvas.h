
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
    virtual bool validatePos(const int& c, const int& r);
};

 #endif
