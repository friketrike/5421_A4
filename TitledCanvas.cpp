
/*
 * Assignennt 4, COMP 5421, summer 2016  
 * Federico O'Reilly Regueiro 40012304
 * Concordia University
 * 
 * Titled canvas implementation file
 */

#include "TitledCanvas.h"

void TitledCanvas::clear(const char& ch) {
    for (auto itM = grid.begin(); itM != grid.end(); ++itM) {
        for (auto itN = itM->begin(); itN != itM->end(); ++itN) {
            *itN = ch;
        }
    }
    decorate();
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

void TitledCanvas::decorate() {
    // write in the title
    vector<char>::iterator iter;
    int i;
    for (iter = (grid.begin()+1)->begin()+1, i = 0;
            iter != (grid.begin()+1)->end()-1 && i < title.length();
            ++iter, ++i) {
        *iter = title.at(i);
    }
    // decorate the corners
    *(grid.begin()->begin()) = Canvas::CORNER;
    *(grid.begin()->end()-1) = Canvas::CORNER;
    *((grid.end()-1)->begin()) = Canvas::CORNER;
    *((grid.end()-1)->end()-1) = Canvas::CORNER;
    // now the horizontal margins
    for (i = 1; i < (n - 1); ++i) {
        *(grid.begin()->begin() + i) = Canvas::H_MARGIN;
        *((grid.begin()+2)->begin() + i) = Canvas::H_MARGIN;
        *((grid.end()-1)->begin() + i) = Canvas::H_MARGIN;
    }
    // finally, the vertical margins
    for (int i = 1; i < (m - 1); ++i) {
        *(grid.begin()+i)->begin() =  Canvas::V_MARGIN;
        *((grid.begin()+i)->end()-1) =  Canvas::V_MARGIN;
    }
}

bool TitledCanvas::validatePos(const int& c, const int& r) {
    return (c >= 0 && r >= 0 && c < (n - 2) && r < (m - 4));
}

