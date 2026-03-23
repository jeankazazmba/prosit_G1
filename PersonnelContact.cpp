#include "PersonnelContact.h"
#include <iostream>

using namespace std;

PersonnelContact::PersonnelContact(const string& nom, const string& numero, const string& relation) 
    : Contact(nom, numero), relation(relation) {}

PersonnelContact::~PersonnelContact() {
    cout << "[Destructeur] Suppression du contact personnel : " << nom << endl;
}

void PersonnelContact::afficher() const {
    Contact::afficher();
    cout << " | Relation: " << relation << " [Personnel]" << endl;
}
