#include "Point.h"
#include <iostream>

Point::Point(float x, float y) : x(x), y(y) {}

void Point::deplace(float deltaX, float deltaY) {
    x += deltaX;
    y += deltaY;
}

void Point::affiche() const {
    std::cout << "Coordonn�es du point : (" << x << ", " << y << ")" << std::endl;
}
