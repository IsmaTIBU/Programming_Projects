#include "Article.h"
#include <iostream>
using namespace std;

Article::Article(string &titre, string auteur, string *resume, string revue, string editeur, int num_edit)
    : Document(titre, resume, auteur), revue(revue), editeur(editeur), num_edit(num_edit) {
}


Article::Article(const Article &copie) : Document(copie),revue(copie.revue), editeur(copie.editeur), num_edit(copie.num_edit) {
}

Article *Article::clone() const {
    return new Article(*this);
}

void Article::afficher() {
    Document::afficher();
    cout << "Revue: " << revue << endl;
    cout << "Editeur: " << editeur << endl;
    cout << "Numero d'edition: " << num_edit << endl;
}

Article &Article::operator=(const Article &autre) {
    Document::operator=(autre);
    this->revue = autre.revue;
    this->editeur = autre.editeur;
    this->num_edit = autre.num_edit;
    return *this;
}
