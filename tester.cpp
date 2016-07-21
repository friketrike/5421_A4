
#include <iostream>
#include "Shape.h"
#include "Rhombus.h"

int main(){
    Shape * s = new Rhombus(4, "diamond");
    std::cout << s->toString() << std::endl;
}
