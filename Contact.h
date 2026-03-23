
#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
protected:
    std::string nom;
    std::string numero;

public:
    Contact(const std::string& nom, const std::string& numero);
    virtual ~Contact(); // Destructeur virtuel pour la gestion dynamique

    std::string getNom() const;
    std::string getNumero() const;

    virtual void afficher() const; // Methode virtuelle pour le polymorphisme
};

#endif