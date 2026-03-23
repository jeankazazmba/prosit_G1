#ifndef PERSONNELCONTACT_H
#define PERSONNELCONTACT_H

#include "Contact.h"

class PersonnelContact : public Contact {
private:
    std::string relation;

public:
    PersonnelContact(const std::string& nom, const std::string& numero, const std::string& relation);
    ~PersonnelContact();

    void afficher() const override;
};

#endif
