
/*
 * Assignennt 4, COMP 5421, summer 2016  
 * Federico O'Reilly Regueiro 40012304
 * Concordia University
 * 
 * Canvas base-clas header file file
 */

#ifndef CANVAS
#define CANVAS

#include <iostream>
#include <vector>

using namespace std;

class Canvas {
  protected:
    int n, m;
    vector<vector<char>> grid;
    const static char BLANK; 
    const static char H_MARGIN;
    const static char V_MARGIN;
    const static char CORNER;

    // pre-condition, caller has validated position (r, c) to be in the grid
    vector<char>::iterator getIteratorRC (const int& r, const int& c);

  public:
    Canvas(const int& columns, const int& rows) 
        : n(columns)
        , m(rows)
    {grid.resize(m, vector<char>(n, Canvas::BLANK));}

    virtual ~Canvas()=default;

    const int getHeight() const;
    const int getWidth() const;
    friend ostream& operator<<(ostream& ostr, const Canvas& canvas);

    virtual void clear(const char& ch) =0;
    virtual void putChar(const int& c, const int& r, const char& ch) =0;
    virtual char getChar(const int& c, const int& r) =0;
    virtual void decorate() =0;
    virtual bool validatePos(const int& c, const int& r) =0;
};

#endif
