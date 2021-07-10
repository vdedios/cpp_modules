#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad
{
    public:
        virtual ~ISquad() {}
        virtual int getCount(void) const = 0;
        virtual ISpaceMarine* getUnit(int unit) const = 0;
        virtual int push(ISpaceMarine* spaceMarine) = 0;
};

#endif
