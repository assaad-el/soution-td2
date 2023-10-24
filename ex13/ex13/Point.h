
#ifndef POINT_H
#define POINT_H

class Point {
private:
    float x;
    float y;

public:
    Point(float x, float y); 
    void deplace(float deltaX, float deltaY); 
    void affiche() const; 
};

#endif
