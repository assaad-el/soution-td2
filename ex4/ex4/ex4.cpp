#include <iostream>

class Tableau {
private:
    int* elements;
    int taille;

public:
    // Constructeur
    Tableau(int size) : taille(size) {
        elements = new int[taille];
    }

    // Méthode pour connaître la taille du tableau
    int getTaille() const {
        return taille;
    }

    // Méthode pour remplir le tableau
    void remplirTableau() {
        std::cout << "Entrez les nombres entiers : ";
        for (int i = 0; i < taille; ++i) {
            std::cin >> elements[i];
        }
    }

    // Méthode pour afficher le tableau
    void afficherTableau() {
        std::cout << "Le tableau est : ";
        for (int i = 0; i < taille; ++i) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }

    // Destructeur
    ~Tableau() {
        delete[] elements;
    }
};

int main() {
    int taille;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;

    // Création d'un objet de la classe Tableau en utilisant la taille fournie par l'utilisateur
    Tableau monTableau(taille);

    // Remplissage du tableau
    monTableau.remplirTableau();

    // Affichage du tableau
    monTableau.afficherTableau();

    std::cout << "La taille du tableau est : " << monTableau.getTaille() << std::endl;

    return 0;
}
