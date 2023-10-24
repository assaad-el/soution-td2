#include <iostream>
#include <string>

int main() {
    // Chaîne de caractères représentant la date et l'heure (JJMMAAAAHHNN)
    std::string dateHeure = "010920091123";

    // Extraction des différents champs
    std::string jour = dateHeure.substr(0, 2);
    std::string mois = dateHeure.substr(2, 2);
    std::string annee = dateHeure.substr(4, 4);
    std::string heure = dateHeure.substr(8, 2);
    std::string minutes = dateHeure.substr(10, 2);

    // Conversion des champs en entiers
    int jourInt = std::stoi(jour);
    int moisInt = std::stoi(mois);
    int anneeInt = std::stoi(annee);
    int heureInt = std::stoi(heure);
    int minutesInt = std::stoi(minutes);

    // Affichage des champs extraits
    std::cout << "Jour: " << jourInt << std::endl;
    std::cout << "Mois: " << moisInt << std::endl;
    std::cout << "Année: " << anneeInt << std::endl;
    std::cout << "Heure: " << heureInt << std::endl;
    std::cout << "Minutes: " << minutesInt << std::endl;

    return 0;
}
