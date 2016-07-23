
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
    void decorate() {}
    virtual bool validatePos(const int& c, const int& r) =0;
};

#endif
