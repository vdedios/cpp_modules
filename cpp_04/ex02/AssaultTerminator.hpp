#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {
    public:
        AssaultTerminator(void);
        AssaultTerminator(AssaultTerminator const &);
        ~AssaultTerminator(void);
        AssaultTerminator & operator=(AssaultTerminator const &);
        ISpaceMarine* clone(void) const;
        void battleCry(void) const;
        void rangedAttack(void) const;
        void meleeAttack(void) const;
};

#endif
