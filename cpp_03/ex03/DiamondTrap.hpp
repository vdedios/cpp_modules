#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {

    public:
        DiamondTrap(void);
        DiamondTrap(std::string const Name);
        DiamondTrap(DiamondTrap const & DiamondTrap);
        ~DiamondTrap(void);
        DiamondTrap & operator=(DiamondTrap const & ref);
        void whoAmI(void);

    private:
        std::string _name;
};

#endif
