#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED


#include <iostream>
#include <string>

    using namespace std;
    
    class Personnage{
      private :
      
      protected :
        float taille;
        string nom;
      public :
        Personnage();
        Personnage(string, float);
        string get_nom();
        float get_taille();
    };



#endif //Personnage.h