
/*
 * Assignennt 4, COMP 5421, summer 2016  
 * Federico O'Reilly Regueiro 40012304
 * Concordia University
 * 
 * Shape implementation file
 */

#include "Shape.h"

// Useful constant for computing values accross several shapes
const double Shape::SQRT2 = std::sqrt(2.0);
int Shape::objectCounter = 0;
void Shape::change_d_name(const std::string& newName){
    dname = newName;
}

std::string Shape::toString() const {
    int w, h;
    std::stringstream info;
    info << std::setprecision(2) << std::showpoint << std::fixed;
    getBoundingDimensions(w, h);
    info << "Shape Information:" << std::endl;
    info << "------------------" << std::endl;
    info << "Static type:    " << typeid(this).name() << std::endl;
    info << "Dynamic Type:   " << typeid(*this).name() << std::endl;
    info << "Generic Name:   " << gname << std::endl;
    info << "Description:    " << dname << std::endl;
    info << "id:             " << uid << std::endl;
    info << "Bound Box W:    " << w << std::endl;
    info << "Bound Box H:    " << h << std::endl;
    info << "Scr Area:       " << scrArea() << std::endl;
    info << "Geo Area:       " << geoArea() << std::endl;
    info << "Scr Perimeter:  " << scrPerimeter() << std::endl;
    info << "Geo Perimeter:  " << geoPerimeter() << std::endl;
    return info.str();
}

std::ostream& operator<<(std::ostream& ostr, const Shape& shape) {
    ostr << shape.toString();
    return ostr;
}

