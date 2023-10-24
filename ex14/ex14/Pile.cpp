// Pile.cpp
#include "Pile.h"
#include <iostream>

Pile::Pile(int tailleMax) : tailleMax(tailleMax), sommet(-1) {
    elements = new int[tailleMax];
}

Pile::~Pile() {
    delete[] elements;
}

void Pile::push(int valeur) {
    if (sommet < tailleMax - 1) {
        sommet++;
        elements[sommet] = valeur;
    }
    else {
        std::cout << "La pile est pleine. Impossible d'ajouter plus d'éléments." << std::endl;
    }
}

int Pile::pop() {
    if (sommet >= 0) {
        int valeur = elements[sommet];
        sommet--;
        return valeur;
    }
    else {
        std::cout << "La pile est vide." << std::endl;
        return -1;
    }
}
