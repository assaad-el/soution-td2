#include <iostream>

struct Element {
    int valeur;      
    Element* suivant; 
};

class Liste {
private:
    Element* premier; 

public:
    Liste() : premier(nullptr) {}

    ~Liste() {
        while (premier != nullptr) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

    void ajouterElement(int valeur) {
        Element* nouvelElement = new Element{ valeur, premier };
        premier = nouvelElement;
    }

    void supprimerElement() {
        if (premier != nullptr) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
        else {
            std::cout << "La liste est vide." << std::endl;
        }
    }

    void afficherListe() const {
        Element* courant = premier;
        while (courant != nullptr) {
            std::cout << courant->valeur << " ";
            courant = courant->suivant;
        }
        std::cout << std::endl;
    }
};

int main() {
    Liste maListe;

    maListe.ajouterElement(5);
    maListe.ajouterElement(10);
    maListe.ajouterElement(15);

    std::cout << "Liste actuelle : ";
    maListe.afficherListe();

    maListe.supprimerElement();

    std::cout << "Liste après suppression : ";
    maListe.afficherListe();

    return 0;
}
