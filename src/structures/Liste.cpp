/*************************************************************************
                           Liste  -  description
                             -------------------
    début                : 21/11/2021
    copyright            : (C) 2021 par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Liste> (fichier Liste.cpp) --------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
//------------------------------------------------------ Include personnel
#include "Liste.h"
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
int Liste::Taille() const {
    int taille = 0;

    if (premier) {
        taille = premier->Taille();
    }

    return taille;
}

void Liste::Ajouter(const Trajet* trajet_) {
    if (premier) {
        premier->Ajouter(new Element(trajet_));
    } else {
        premier = new Element(trajet_);
    }
}

//------------------------------------------------- Surcharge d'opérateurs
Liste& Liste::operator=(const Liste& liste_) {
}

//-------------------------------------------- Constructeurs - destructeur
Liste::Liste(const Liste& liste_) {
    #ifdef MAP
        std::cout << "Appel au constructeur de copie de <Liste>" << std::endl;
    #endif
}

Liste::Liste() : premier(nullptr) {
    #ifdef MAP
        std::cout << "Appel au constructeur de <Liste>" << std::endl;
    #endif
}

Liste::~Liste() {
    #ifdef MAP
        std::cout << "Appel au destructeur de <Liste>" << std::endl;
    #endif

    delete premier;
}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
