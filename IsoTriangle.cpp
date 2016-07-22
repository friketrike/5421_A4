

#include "IsoTriangle.h"

void IsoTriangle::scale(const int& n) { 
    if (h + n >= 1) {
        h += n;
        b = (2 * h) - 1;
    }
}

double IsoTriangle::geoPerimeter() const {
    return ( b + ( 2.0*std::sqrt((0.25 *b * b) + (h * h)) ) );
}

int IsoTriangle::scrArea() const {
    return h * h;
}

int IsoTriangle::scrPerimeter() const{ 
    return (4 * (h - 1));
}

void IsoTriangle::getBoundingDimensions(int& w, int& h) const {
    w = this->b; 
    h = this->h;
}

void IsoTriangle::draw(int c, int r, Canvas& canvas, char ch) const {
    // TODO
} 

