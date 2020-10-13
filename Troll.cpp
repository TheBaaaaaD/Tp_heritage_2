#include "Troll.h"

Troll::Troll(string nom, float taille, int pdv){
    this->nom = nom;
    this->taille = taille;
    this->pdv = pdv;
    cout<<"Troll creer !"<<endl;
}
/******************Getter********************/
int Troll::get_pdv(){return(pdv);}
/******************Setter********************/
void Troll::set_pdv(int degats){
    this->pdv -= degats;
}