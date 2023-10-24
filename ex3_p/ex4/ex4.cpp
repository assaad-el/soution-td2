#include <iostream>

using namespace std;
int main() {

    int nombres[10];
    int* ptrNombres = nombres; 

    for (int i = 0; i < 10; ++i) {
        cout << "Entrez le nombre #" << (i + 1) << ":";
        cin >> *(ptrNombres + i);
        }

    int* ptrPlusPetit = min_element(ptrNombres, ptrNombres + 10); 
    int* ptrPlusGrand = max_element(ptrNombres, ptrNombres + 10); 

    cout << "Le plus petit nombre est : " << *ptrPlusPetit << endl;
    cout << "Le plus grand nombre est : " << *ptrPlusGrand << endl;

    return 0;
}
