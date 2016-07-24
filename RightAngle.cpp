
/*
 * Assignennt 4, COMP 5421, summer 2016  
 * Federico O'Reilly Regueiro 40012304
 * Concordia University
 * 
 * Right-Angle triangle implementation file
 */

#include "RightAngle.h"

void RightAngle::scale(const int& n) { 
    if (h + n >= 1) {
        h += n;
        b += n;
    }
}

double RightAngle::geoPerimeter() const {
    return ((2.0 + Shape::SQRT2) * h);
}

int RightAngle::scrArea() const {
    return (h * (h + 1)) / 2;
}

int RightAngle::scrPerimeter() const{ 
    return (3 * (h - 1));
}

void RightAngle::getBoundingDimensions(int& w, int& h) const {
    w = this->b; 
    h = this->h;
}

void RightAngle::draw(int c, int r, Canvas& canvas, char ch) const {
    for (int m = 0; m < h; ++m) {
        for (int n = 0; n <= m; ++n) {
            canvas.putChar(c + n, r + m, ch);
        }
    } 
} 

