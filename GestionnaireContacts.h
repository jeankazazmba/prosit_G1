#ifndef GESTIONNAIRECONTACTS_H
#define GESTIONNAIRECONTACTS_H

#include "Annuaire.h"
#include "Contact.h"

// GestionnaireContacts herite de la classe generique Annuaire pour les contacts
class GestionnaireContacts : public Annuaire<Contact> {
public:
    GestionnaireContacts();
    ~GestionnaireContacts();

    void ajouterPersonnel(const std::string& nom, const std::string& numero, const std::string& relation);
    void ajouterProfessionnel(const std::string& nom, const std::string& numero, const std::string& entreprise);
    
    void rechercherContact(const std::string& nom) const;
    void supprimerContact(const std::string& nom);
    void afficherTous() const;
};

#endif