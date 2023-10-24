#pragma once
#ifndef PILE_H
#define PILE_H

class Pile {
private:
    int* elements; 
    int tailleMax; 
    int sommet;    

public:
    Pile(int tailleMax);  
    ~Pile();             
    void push(int valeur); 
    int pop();           
};

#endif
