
#include "Rhombus.h"

void Rhombus::scale(const int& n) { 
    d = (!(n&1) && n<d) ? d + n : d;
}
double Rhombus::geoArea() const {
    return (d*d)/2.0;
}

double Rhombus::geoPerimeter() const {
    return (2.0*(Shape::SQRT2))*d;
}

int Rhombus::scrArea() const {
    int n = d/2;
    return (2*n*(n + 1)) + 1;
}

int Rhombus::scrPerimeter() const{ 
    return 2*(d - 1);
}

void Rhombus::getBoundingDimensions(int& w, int& h) const {
    w = d; 
    h = d;
}

void Rhombus::draw(int c, int r, Canvas& canvas, char ch) const {
    const int offset = d/2;
    for (int m = 0; m < d; ++m) {
        for (int n = 0; n < d; ++n) {
            if ((std::abs(m - offset) + std::abs(n - offset)) <= offset) {
                canvas.putChar(c + n, r + m, ch);
            }
        }
    } 
} 

