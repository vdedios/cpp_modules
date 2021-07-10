#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
    public:
        Ice(void);
        Ice(Ice const &);
        ~Ice(void);
        void use(ICharacter& target);
        AMateria* clone(void) const;
};

#endif
