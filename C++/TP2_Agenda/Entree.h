#ifndef ENTREE_H
#define ENTREE_H
#include <string>
using namespace std;

class Tableau;

class Entree {
    string nom;
    string num_tel;

public:
    Entree(string nom="", string num_tel="");
    void affichage() const;
    //ça permet d'utiliser des attributs prives de la classe Tableau
    friend class Tableau;

    //Rajoutés pour que la concaténation marche bien
    const string& getNom() const;
    const string& getNumTel() const;
};



#endif //ENTREE_H
