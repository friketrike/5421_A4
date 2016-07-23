
#include "Rectangle.h"

void Rectangle::scale(const int& n) { 
    if ((w + n >= 1) && (h + n >= 1)) {
        w += n;
        h += n;
    }
}
double Rectangle::geoArea() const {
    return (w*h);
}

double Rectangle::geoPerimeter() const {
    return (2.0*(h + w));
}

int Rectangle::scrArea() const {
    return h*w;
}

int Rectangle::scrPerimeter() const{ 
    return (2*(h + w)) - 4;
}

void Rectangle::getBoundingDimensions(int& w, int& h) const {
    w = this->w; 
    h = this->h;
}

void Rectangle::draw(int c, int r, Canvas& canvas, char ch) const {
    for (int m = 0; m < h; ++m) {
        for (int n = 0; n < w; ++n) {
            canvas.putChar(c + n, r + m, ch);
        }
    } 
} 

