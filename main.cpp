/******************************************************************************



*******************************************************************************/
#include "Magicien.h"
#include "Troll.h"


int main()
{
    Magicien *mage1 = new Magicien("mage_1",2.15,500,2000);
    
    Magicien *mage2 = new Magicien("mage_2",2.25,750,2500);


        cout<<"Il s appelle "<<mage1->get_nom()<<", il mesure "<<mage1->get_taille()<<"m, il possede "<<mage1->get_pdv()<<" points de vie et "<<mage1->get_pdm()<<" points de magie !"<<endl;
        cout<<"Il s appelle "<<mage2->get_nom()<<", il mesure "<<mage2->get_taille()<<"m, il possede "<<mage2->get_pdv()<<" points de vie et "<<mage2->get_pdm()<<" points de magie !"<<endl;
        
    mage1->exercer_magie(mage2);
    
    cout<<"il reste "<<mage2->get_pdv()<< " points de vie au personnage "<<mage2->get_nom()<<endl;
    
    Troll *ugly = new Troll("Ugly",1.30,350);
    
    mage2->exercer_magie2(ugly);
    
        cout<<"Ugly a maintenant : "<<ugly->get_pdv()<<" points de vie"<<endl;
        cout<<"Le mage 2 a maintenant : "<<mage2->get_pdm()<<" points de magie"<<endl;
    
    
        
    return 0;
}
