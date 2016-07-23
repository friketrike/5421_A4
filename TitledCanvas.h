
#ifndef TITLED_CANVAS
#define TITLED_CANVAS

#include <string>
#include "Canvas.h"

using namespace std;

class TitledCanvas : public Canvas {
  private:
    const string title;
  public:
    TitledCanvas(const int& columns, const int& rows, const string& title)
        : Canvas(columns + 2, rows + 4)
        , title(title)
    {}

    virtual void clear(const char& ch);
    virtual void putChar(const int& c, const int& r, const char& ch);
    virtual char getChar(const int& c, const int& r);
    virtual bool validatePos(const int& c, const int& r);
};

 #endif
