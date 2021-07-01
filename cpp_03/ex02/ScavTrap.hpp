#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

    public:
        ScavTrap(void);
        ScavTrap(std::string const Name);
        ScavTrap(ScavTrap const & ScavTrap);
        ~ScavTrap(void);
        ScavTrap & operator=(ScavTrap const & ref);
        void guardGate(void);
};

#endif
