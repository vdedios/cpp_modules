#ifndef SQUAD_CPP
# define SQUAD_CPP

#include <cstddef>
#include <iostream>
#include "ISquad.hpp"
#include "ISquad.hpp"

class Squad: public ISquad {
    public:
        Squad(void);
        Squad(ISpaceMarine **, int);
        Squad(Squad const &);
        ~Squad(void);
        Squad & operator=(Squad const &);
        int getCount(void) const;
        ISpaceMarine* getUnit(int) const;
        int push(ISpaceMarine*);
    
    private:
        ISpaceMarine **_spaceMarine;
        int _squadUnits; 

        void _deleteUnits(void);
};

#endif
