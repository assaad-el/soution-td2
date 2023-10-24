#include <iostream>
#include <string>

using namespace std;

class Personne {
private:
    string nom;
    string prenom;
    string date_de_naissance;
public:
    Personne(const string& nom, const string& prenom, const string& dateNaissance)
        : nom(nom), prenom(prenom), date_de_naissance(dateNaissance) {}

    virtual void Afficher() const {
        cout << "Nom : " << nom << endl;
        cout << "Prenom : " << prenom << endl;
        cout << "Date de naissance : " << date_de_naissance << endl;
    }
};
class Employe : public Personne {
private:
    double salaire;

public:
    Employe(const string& nom, const string& prenom, const string& dateNaissance, double salaire)
        : Personne(nom, prenom, dateNaissance), salaire(salaire) {}

    void Afficher() const override {
        Personne::Afficher();
        cout << "Salaire : " << salaire << " euros" << endl;
    }
};

class Chef : public Employe {
private:
    string service;

public:
    Chef(const string& nom, const string& prenom, const string& dateNaissance, double salaire, const string& service)
        : Employe(nom, prenom, dateNaissance, salaire), service(service) {}

    void Afficher() const override {
        Employe::Afficher();
        cout << "Service : " << service << endl;
    }
};

class Directeur : public Chef {
private:
    string societe;

public:
    Directeur(const string& nom, const string& prenom, const string& dateNaissance, double salaire, const string& service, const string& societe)
        : Chef(nom, prenom, dateNaissance, salaire, service), societe(societe) {}

    void Afficher() const override {
        Chef::Afficher();
        cout << "Societe : " << societe << endl;
    }
};




int main()
{
    Personne personne("assaad", "el", "01/01/1980");
    Employe employe("yassine", "jr", "05/15/1990", 5000);
    Chef chef("oussama", "khir", "10/20/1985", 6000, "IT");
    Directeur directeur("ismail", "alkhbi", "03/12/1975", 8000, "Management", "ABC Company");

    cout << "Informations de la personne :" << endl;
    personne.Afficher();
    cout << endl;

    cout << "Informations de l'employe :" << endl;
    employe.Afficher();
    cout << endl;

    cout << "Informations du chef :" << endl;
    chef.Afficher();
    cout << endl;

    cout << "Informations du directeur :" << endl;
    directeur.Afficher();
}

