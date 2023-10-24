#include <iostream>
using namespace std;

class Checker {
public:
    bool estMultipleDeDeux(int nombre) {
        return nombre % 2 == 0;
    }

    bool estMultipleDeTrois(int nombre) {
        return nombre % 3 == 0;
    }
};

int main() {
    Checker checker;
    int nombre;

     cout << "Entrez un nombre entier : ";
     cin >> nombre;

    if (checker.estMultipleDeDeux(nombre)) {
         cout << "Il est pair" <<  endl;
    }

    if (checker.estMultipleDeTrois(nombre)) {
         cout << "Il est multiple de 3" <<  endl;
    }

    if (checker.estMultipleDeDeux(nombre) && checker.estMultipleDeTrois(nombre)) {
         cout << "Il est divisible par 6" <<  endl;
    }
    else {
        
    }
    return 0;
}