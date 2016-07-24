
/*
 * Assignennt 4, COMP 5421, summer 2016  
 * Federico O'Reilly Regueiro 40012304
 * Concordia University
 * 
 * Plain canvas implementation file
 */

#include "PlainCanvas.h"

void PlainCanvas::clear(const char& ch) {
    for (auto itM = grid.begin(); itM != grid.end(); ++itM) {
        for (auto itN = itM->begin(); itN != itM->end(); ++itN) {
            *itN = ch;
        }
    }
}

void PlainCanvas::putChar(const int& c, 
        const int& r, const char& ch) {
    if (!validatePos(c, r)) {
#ifndef NDEBUG        
        cerr << "Warning: writing beyond canvas client-area failed." << endl;
#endif        
        return;
    }
    auto itRC = getIteratorRC(r, c);
    *itRC = ch;
}

char PlainCanvas::getChar(const int& c, const int& r) {
    if (!validatePos(c, r)) {    
#ifndef NDEBUG        
        cerr << "Warning: reading beyond canvas client-area failed." << endl;
#endif        
        return '\0';
    }
    auto itRC = getIteratorRC(r, c);
    return *itRC;
}

bool PlainCanvas::validatePos(const int& c, const int& r) {
    return (r >= 0 && c >= 0 && r <= m && c <= n);
}
