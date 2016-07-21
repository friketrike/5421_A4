
#include "Shape.h"

int Shape::objectCounter = 0;

void Shape::change_d_name(const std::string& newName){
    dname = newName;
}

std::string Shape::toString() const {
    int w, h;
    getBoundingDimensions(w, h);
    std::string info = "Shape Information:";
    info += '\n';
    info.append(info.length()-1, '-');
    info += '\n';
    info = info + "Static type:    " + typeid(this).name() + '\n';
    info = info + "Dynamic Type:   " + typeid(*this).name() + '\n';
    info = info + "Generic Name:   " + gname + '\n';
    info = info + "Description:    " + dname + '\n';
    info = info + "id:             " + std::to_string(uid) + '\n';
    info = info + "Bound Box W:    " + std::to_string(w) + '\n';
    return info;
}
