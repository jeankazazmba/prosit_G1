#ifndef ANNUAIRE_H
#define ANNUAIRE_H

#include <map>
#include <string>
#include <iostream>
#include "Utils.h"

template <typename T>
class Annuaire {
private:
    std::map<std::string, T*> elements;

public:
    Annuaire() {
        std::cout << "[Template] Initialisation d'un annuaire generique." << std::endl;
    }

    virtual ~Annuaire() {
        std::cout << "[Template] Nettoyage de l'annuaire generique..." << std::endl;
        for (auto& pair : elements) {
            delete pair.second;
        }
        elements.clear();
    }

    void ajouter(const std::string& cle, T* element) {
        supprimer(cle);
        elements[cle] = element;
    }

    void supprimer(const std::string& cle) {
        auto it = elements.find(cle);
        if (it != elements.end()) {
            delete it->second;
            elements.erase(it);
        }
    }

    T* rechercher(const std::string& cle) const {
        auto it = elements.find(cle);
        if (it != elements.end()) {
            return it->second;
        }
        return nullptr;
    }

    void afficherTout() const {
        if (elements.empty()) {
            std::cout << "L'annuaire est vide." << std::endl;
            return;
        }
        for (const auto& pair : elements) {
            afficherElement(*(pair.second));
        }
    }

    size_t taille() const {
        return elements.size();
    }
};

#endif
