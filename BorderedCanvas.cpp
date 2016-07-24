
/*
 * Assignennt 4, COMP 5421, summer 2016  
 * Federico O'Reilly Regueiro 40012304
 * Concordia University
 * 
 * Bordered Canvas implementation file
 */

#include "BorderedCanvas.h"

void BorderedCanvas::clear(const char& ch) {
    for (auto itM = grid.begin(); itM != grid.end(); ++itM) {
        for (auto itN = itM->begin(); itN != itM->end(); ++itN) {
            *itN = ch;
        }
    }
    decorate();
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

void BorderedCanvas::decorate() { 
    // decorate the corners
    *(grid.begin()->begin()) = Canvas::CORNER;
    *(grid.begin()->end()-1) = Canvas::CORNER;
    *((grid.end()-1)->begin()) = Canvas::CORNER;
    *((grid.end()-1)->end()-1) = Canvas::CORNER;
    // now the horizontal margins
    for (int i = 1; i < (n - 1); ++i) {
        *(grid.begin()->begin() + i) = Canvas::H_MARGIN;
        *((grid.end()-1)->begin() + i) = Canvas::H_MARGIN;
    }
    // finally, the vertical margins
    for (int i = 1; i < (m - 1); ++i) {
        *(grid.begin()+i)->begin() =  Canvas::V_MARGIN;
        *((grid.begin()+i)->end()-1) =  Canvas::V_MARGIN;
    }
}

bool BorderedCanvas::validatePos(const int& c, const int& r) {
    return (c >= 0 && r >= 0 && c < (n -2) && r < (m - 2));
}
