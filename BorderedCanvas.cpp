
#include "BorderedCanvas.h"

void BorderedCanvas::clear(const char& ch) {
    auto itM = grid.begin();
    auto itN = itM->begin();
    // insert a top margin
    *itN++ = '+';
    for (; itN != (itM->end() - 1); ++itN) {
        *itN = '-';
    }
    *itN = '+';
    ++itM;
    // now fill with 'ch' flanked with '|'
    for (;itM != (grid.end() - 1); ++itM) {
        auto itN = itM->begin();
        *itN++ = '|';
        for (;itN != (itM->end() - 1); ++itN) {
            *itN = ch;
        }
        *itN = '|';
    }
    // then insert the bottom part of the frame
    itN = itM->begin();
    *itN++ = '+';
    for (; itN != (itM->end() - 1); ++itN) {
        *itN = '-';
    }
    *itN = '+';
}

void BorderedCanvas::putChar(const int& c, 
        const int& r, const char& ch) {
    if (!validatePos(c, r)) {
#ifndef NDEBUG        
        cerr << "Warning: writing beyond canvas client-area failed." << endl;
#endif        
        return;
    }
    auto itRC = getIteratorRC(c + 1, r + 1);
    *itRC = ch;
}

char BorderedCanvas::getChar(const int& c, const int& r) {
    if (!validatePos(c, r)) {    
#ifndef NDEBUG        
        cerr << "Warning: reading beyond canvas client-area failed." << endl;
#endif        
        return '\0';
    }
    auto itRC = getIteratorRC(c + 1, r + 1);
    return *itRC;
}

bool BorderedCanvas::validatePos(const int& c, const int& r) {
    return (c >= 0 && r >= 0 && c < (n -2) && r < (m - 2));
}
