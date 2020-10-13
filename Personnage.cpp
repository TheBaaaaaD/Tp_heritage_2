#include "Personnage.h"

Personnage::Personnage(){
    
}
Personnage::Personnage(string nom, float taille){
    this->nom = nom;
    this->taille = taille;
}
/*******************************************Geter****************************************/
string Personnage::get_nom(){return(nom);}//renvoie le nom
float Personnage::get_taille(){return(taille);}//renvoie la taille