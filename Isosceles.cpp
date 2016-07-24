
/*
 * Assignennt 4, COMP 5421, summer 2016  
 * Federico O'Reilly Regueiro 40012304
 * Concordia University
 * 
 * Isosceles triangle implementation file
 */

#include "Isosceles.h"

void Isosceles::scale(const int& n) { 
    if (h + n >= 1) {
        h += n;
        b = (2 * h) - 1;
    }
}

double Isosceles::geoPerimeter() const {
    return ( b + ( 2.0*std::sqrt((0.25 *b * b) + (h * h)) ) );
}

int Isosceles::scrArea() const {
    return h * h;
}

int Isosceles::scrPerimeter() const{ 
    return (4 * (h - 1));
}

void Isosceles::getBoundingDimensions(int& w, int& h) const {
    w = this->b; 
    h = this->h;
}

void Isosceles::draw(int c, int r, Canvas& canvas, char ch) const {
    const int offset = b/2;
    for (int m = 0; m < h; ++m) {
        for (int n = 0; n <= b; ++n) {
            if ((m - std::abs(n - offset)) >= 0) {
                canvas.putChar(c + n, r + m, ch);
            }
        }
    } 
} 

