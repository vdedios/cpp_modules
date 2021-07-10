#ifndef AMATERIA_CPP
# define AMATERIA_CPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria {
    public:
        AMateria(void);
        AMateria(std::string const & type);
        virtual ~AMateria(void);
        AMateria const & operator=(AMateria const &);

        std::string const & getType(void) const;
        unsigned int getXP(void) const;
        virtual AMateria* clone(void) const = 0;
        virtual void use(ICharacter& target);

    protected:
        unsigned int _xp;
        std::string _type;
};

#endif
