#include "Magicien.h"


Magicien::Magicien(string nom, float taille,int pdv, int pdm):Personnage(nom,taille){//on envoie toute les valeurs
    this->pdv = pdv;
    this->pdm = pdm;
    cout<<"Mage creer !"<<endl;
}
void Magicien::exercer_magie(Magicien *mage_mechant){
    pdm -= 500;
    cout<<"vous avez perdu 500 points de magie !"<<endl<<"Il vous en reste "<<pdm<<endl;
    mage_mechant->pdv -= 150;
}
void Magicien::exercer_magie2(Troll *Ugly){
    pdm -= 250;
    cout<<"vous avez perdu 250 points de magie !"<<endl<<"Il vous en reste "<<pdm<<endl;
    Ugly->set_pdv(50);
}

/******************Getter********************/
int Magicien::get_pdv(){return(pdv);}
int Magicien::get_pdm(){return(pdm);}