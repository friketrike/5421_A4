
#include <assert.h>
#include "Canvas.h"

const char Canvas::BLANK = ' ';

vector<char>::iterator Canvas::getIteratorRC (const int& c, const int& r) {
    assert(c <= n && r <= m);
    return ((grid.begin() + r)->begin() + c);
}

const int Canvas::getHeight() const {
    return m;
}

const int Canvas::getWidth() const {
    return n;
}

ostream& operator<<(ostream& ostr, const Canvas& canvas) { 
    auto itM = canvas.grid.begin();
    auto itM_Stop = canvas.grid.end();
    while (itM != itM_Stop) {
        auto itN = itM->begin();
        auto itN_Stop = itM->end();
        while (itN != itN_Stop) {
            ostr << *itN;
            ++itN;
        }
        ostr << endl;
        ++itM;
    }
    return ostr;
}

