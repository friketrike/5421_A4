
#ifndef CANVAS
#define CANVAS

#include <iostream>
#include <vector>

class Canvas {
  private:
    int m, n;
    vector<vector<char>> grid;

  public:
    const int getHeight() const;
    const int getWidth() const;
    friend ostream& ostream::operator<<(ostream& ostr, const Canvas& canvas);
    virtual clear(const char& ch) =0;
    virtual putChar(const int& c, const int& r, const char& ch) =0;
    virtual getChar(const int& c, const int& r) =0;
    decorate() {}
    virtual validatePos(const int& c, const int& r) =0;
};

#endif
