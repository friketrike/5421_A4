
#include "RightAngle.h"

void RightAngle::scale(const int& n) { 
    if (h + n >= 1) {
        h += n;
        b += n;
    }
}

double RightAngle::geoPerimeter() const {
    return (2 + Shape::SQRT2) * h;
}

int RightAngle::scrArea() const {
    return (h * (h + 1)) / 2;
}

int RightAngle::scrPerimeter() const{ 
    return (4 * (h - 1));
}

void RightAngle::getBoundingDimensions(int& w, int& h) const {
    w = this->b; 
    h = this->h;
}

void RightAngle::draw(int c, int r, Canvas& canvas, char ch) const {
    // TODO
} 

