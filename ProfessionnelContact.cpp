#include "ProfessionnelContact.h"
#include <iostream>

using namespace std;

ProfessionnelContact::ProfessionnelContact(const string& nom, const string& numero, const string& entreprise) 
    : Contact(nom, numero), entreprise(entreprise) {}

ProfessionnelContact::~ProfessionnelContact() {
    cout << "[Destructeur] Suppression du contact professionnel : " << nom << endl;
}

void ProfessionnelContact::afficher() const {
    Contact::afficher();
    cout << " | Entreprise: " << entreprise << " [Professionnel]" << endl;
}
