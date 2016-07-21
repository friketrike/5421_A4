
#include <iostream>
#include "Shape.h"
#include "Rhombus.h"
#include "Rectangle.h"

int main(){
    Shape * sp1 = new Rhombus(16, "diamond");
    std::cout << sp1->toString() << std::endl;
    sp1->scale(4);
    sp1->change_d_name("newDiamond");
    std::cout << sp1->toString() << std::endl;
    Rectangle r(8, 7, "NiceBox");
    Shape& sr1 = r;
    std::cout << sr1.toString() << std::endl;
}
