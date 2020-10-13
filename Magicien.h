#ifndef MAGICIEN_H_INCLUDED
#define MAGICIEN_H_INCLUDED

#include "Personnage.h"
#include "Troll.h"

    class Magicien : public Personnage{
        private :
            int pdv;
            int pdm;
        protected :
        
        public :
            Magicien(string,float,int,int);
            int get_pdm();
            int get_pdv();
            void exercer_magie(Magicien *);
            void exercer_magie2(Troll *);
    };


#endif