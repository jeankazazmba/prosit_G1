#ifndef PROFESSIONNELCONTACT_H
#define PROFESSIONNELCONTACT_H

#include "Contact.h"

class ProfessionnelContact : public Contact {
private:
    std::string entreprise;

public:
    ProfessionnelContact(const std::string& nom, const std::string& numero, const std::string& entreprise);
    ~ProfessionnelContact();

    void afficher() const override;
};

#endif
