#ifndef TROLL_H_INCLUDED
#define TROLL_H_INCLUDED

    #include "Personnage.h"

    class Troll:public Personnage{
        private :
            int pdv;
        protected :
        
        public :
            Troll(string, float, int);
            int get_pdv();
            void set_pdv(int);
    };



#endif