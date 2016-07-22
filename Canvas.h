
#ifndef CANVAS
#define CANVAS

#include <iostream>
#include <vector>

using namespace std;

class Canvas {
  private:
    int m, n;
    vector<vector<char>> grid;

  public:
    Canvas(const int& rows, const int& columns) 
        : m(rows)
        , n(columns) // TODO initialize the vector? nah, derived classes should
    {}
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
