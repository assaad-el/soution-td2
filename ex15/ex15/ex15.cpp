#include <iostream>
#include <cstring>

class Fichier {
private:
    char* pointeur; 
    int longueur;   

public:
    Fichier(int taille) : longueur(taille) {
        pointeur = new char[longueur]; 
    }

    ~Fichier() {
        delete[] pointeur; 
    }

    void Remplit() {
        for (int i = 0; i < longueur; ++i) {
            pointeur[i] = 'A' + (i % 26); 
        }
    }

    void Affiche() const {
        std::cout << "Contenu du fichier en mémoire : ";
        for (int i = 0; i < longueur; ++i) {
            std::cout << pointeur[i];
        }
        std::cout << std::endl;
    }
};

int main() {

    Fichier* fichier = new Fichier(10);

    fichier->Remplit();
    fichier->Affiche();

    delete fichier;

    return 0;
}
