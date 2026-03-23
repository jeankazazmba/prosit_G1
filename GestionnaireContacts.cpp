#include "GestionnaireContacts.h"
#include "PersonnelContact.h"
#include "ProfessionnelContact.h"
#include <iostream>

using namespace std;

GestionnaireContacts::GestionnaireContacts() {
    cout << "[Gestionnaire] Initialisation specifique." << endl;
}

GestionnaireContacts::~GestionnaireContacts() {
    cout << "[Gestionnaire] Destruction specifique." << endl;
}

void GestionnaireContacts::ajouterPersonnel(const string& nom, const string& numero, const string& relation) {
    // Utilisation de la méthode 'ajouter' de la classe parente Annuaire
    ajouter(nom, new PersonnelContact(nom, numero, relation));
}

void GestionnaireContacts::ajouterProfessionnel(const string& nom, const string& numero, const string& entreprise) {
    ajouter(nom, new ProfessionnelContact(nom, numero, entreprise));
}

void GestionnaireContacts::rechercherContact(const string& nom) const {
    Contact* c = rechercher(nom);
    if (c) {
        cout << "\nContact trouve :" << endl;
        afficherElement(*c);
    } else {
        cout << "\nContact '" << nom << "' non trouve." << endl;
    }
}

void GestionnaireContacts::supprimerContact(const string& nom) {
    supprimer(nom);
    cout << "Contact '" << nom << "' supprime." << endl;
}

void GestionnaireContacts::afficherTous() const {
    cout << "\n--- Liste de tous les contacts (" << taille() << ") ---" << endl;
    afficherTout();
}