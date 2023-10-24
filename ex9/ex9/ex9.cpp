#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string nom;
    int age;

public:
    void set_value(const string &n, int a) {
        nom = n;
        age = a;
    }
};

class Zebra : public Animal {
public:
    void afficherInformationsZebra() {
        cout << "Zebra nom " << nom << endl;
        cout << " age " << age << " ans" << endl;
        cout << "Originaire afrique." << endl;
    }
};

class Dolphin : public Animal {
public:
    void afficherInformationsDolphin() {
        cout << "Dolphin nom :" << nom << endl;
        cout << "age :" << age << " ans" << endl;
        cout << "Originaire des oceans." << endl;
    }
};

int main() {
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("fred", 3);
    cout << "Informations pour Zebra :" << endl;
    zebra.afficherInformationsZebra();

    cout << endl;

    dolphin.set_value("Daloon", 2);
    cout << "Informations pour Dolphin :" << endl;
    dolphin.afficherInformationsDolphin();

    
}
