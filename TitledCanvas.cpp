#include <algorithm>
#include "TitledCanvas.h"

void TitledCanvas::clear(const char& ch) {
    auto itM = grid.begin();
    auto itN = itM->begin();
    // insert a top margin
    *itN++ = '+';
    for (; itN != (itM->end() - 1); ++itN) {
        *itN = '-';
    }
    *itN = '+';
    ++itM;
    // now the title
    itN = itM->begin();
    *itN++ = '|';
    for (int i = 0; (i < title.length()) && itN != itM->end(); ++i, ++itN) {
        *itN = title.at(i);
    }
    for (; itN != itM->end() - 1; ++itN) {
        *itN = ch;
    }
    *itN = '|';
    // now the header line
    ++itM;
    itN = itM->begin();
    *itN++ = '|';
    for (; itN != (itM->end() - 1); ++itN) {
        *itN = '-';
    }
    *itN = '|';
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

void TitledCanvas::putChar(const int& c, 
        const int& r, const char& ch) {
    if (!validatePos(c, r)) {
#ifndef NDEBUG        
        cerr << "Warning: writing beyond canvas client-area failed." << endl;
#endif        
        return;
    }
    auto itRC = getIteratorRC(c + 1, r + 3);
    *itRC = ch;
}

char TitledCanvas::getChar(const int& c, const int& r) {
    if (!validatePos(c, r)) {    
#ifndef NDEBUG        
        cerr << "Warning: reading beyond canvas client-area failed." << endl;
#endif        
        return '\0';
    }
    auto itRC = getIteratorRC(c + 1, r + 3);
    return *itRC;
}

bool TitledCanvas::validatePos(const int& c, const int& r) {
    return (c >= 0 && r >= 0 && c < (n - 2) && r < (m - 4));
}

