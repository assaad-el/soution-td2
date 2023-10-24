#include <iostream>

class Fonction {
public:
    Fonction() : nombreAppels(0) {}

    void appeler() {
        nombreAppels++;
        std::cout << "Appel numéro " << nombreAppels << " : orienter objet" << std::endl;
    }

private:
    int nombreAppels; 
};

int main() {
    Fonction fonction;

    fonction.appeler();  
    fonction.appeler();  
    fonction.appeler(); 

    return 0;
}