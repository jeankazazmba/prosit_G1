#include <iostream>
#include <string>
#include <limits>
#include "GestionnaireContacts.h"

using namespace std;

void afficherMenuPrincipal() {
    cout << "\n======= GESTIONNAIRE DE CONTACTS =======" << endl;
    cout << "1. Ajouter un contact" << endl;
    cout << "2. Rechercher un contact" << endl;
    cout << "3. Supprimer un contact" << endl;
    cout << "4. Afficher tous les contacts" << endl;
    cout << "0. Quitter" << endl;
    cout << "Choix : ";
}

void afficherSousMenuAjout() {
    cout << "\n--- Type de contact ---" << endl;
    cout << "1. Personnel" << endl;
    cout << "2. Professionnel" << endl;
    cout << "0. Annuler" << endl;
    cout << "Choix : ";
}

int main() {
    GestionnaireContacts gestionnaire;
    int choix = -1;

    while (choix != 0) {
        afficherMenuPrincipal();
        if (!(cin >> choix)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choix) {
            case 1: {
                int type = -1;
                afficherSousMenuAjout();
                cin >> type;
                
                if (type == 0) break;

                string nom, numero, extra;
                cout << "Nom : "; cin >> nom;
                cout << "Numero : "; cin >> numero;

                if (type == 1) {
                    cout << "Relation (ami, famille, etc.) : "; cin >> extra;
                    gestionnaire.ajouterPersonnel(nom, numero, extra);
                } else if (type == 2) {
                    cout << "Entreprise : "; cin >> extra;
                    gestionnaire.ajouterProfessionnel(nom, numero, extra);
                } else {
                    cout << "Choix invalide." << endl;
                }
                break;
            }
            case 2: {
                string nom;
                cout << "Nom a rechercher : "; cin >> nom;
                gestionnaire.rechercherContact(nom);
                break;
            }
            case 3: {
                string nom;
                cout << "Nom a supprimer : "; cin >> nom;
                gestionnaire.supprimerContact(nom);
                break;
            }
            case 4:
                gestionnaire.afficherTous();
                break;
            case 0:
                cout << "Au revoir !" << endl;
                break;
            default:
                cout << "Option invalide." << endl;
        }
    }

    return 0;
}