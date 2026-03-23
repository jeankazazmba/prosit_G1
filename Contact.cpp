#include "Contact.h"
#include <iostream>

using namespace std;

Contact::Contact(const string& nom, const string& numero) : nom(nom), numero(numero) {}

Contact::~Contact() {
    // Destructeur de base
}

string Contact::getNom() const {
    return nom;
}

string Contact::getNumero() const {
    return numero;
}

void Contact::afficher() const {
    cout << "Nom: " << nom << " | Numero: " << numero;
}