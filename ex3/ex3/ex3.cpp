#include <iostream>
using namespace std;

class EnterTableau {
private:
    int tableau[10];

public:
    void EntrerNombres() {
        int i = 0;
        while (i < 10) {
            cout << "Entrez un nombre : ";
            cin >> tableau[i];
            i++;
        }
    }

    int PlusPetit() {
        int plusPetit = tableau[0];
        int i = 1;
        while (i < 10) {
            if (tableau[i] < plusPetit) {
                plusPetit = tableau[i];
            }
            i++;
        }
        return plusPetit;
    }

    int PlusGrand() {
        int plusGrand = tableau[0];
        int i = 1;
        while (i < 10) {
            if (tableau[i] > plusGrand) {
                plusGrand = tableau[i];
            }
            i++;
        }
        return plusGrand;
    }
};

int main() {
    EnterTableau enterTableau;
    enterTableau.EntrerNombres();
    int petit = enterTableau.PlusPetit();
    cout << "Le nombre le plus petit est : " << petit << endl;
    int grand = enterTableau.PlusGrand();
    cout << "Le nombre le plus grand est : " << grand << endl;

    return 0;
}
