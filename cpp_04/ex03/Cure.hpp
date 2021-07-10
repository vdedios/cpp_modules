#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
    public:
        Cure(void);
        Cure(Cure const &);
        ~Cure(void);
        void use(ICharacter& target);
        AMateria* clone(void) const;
};

#endif
