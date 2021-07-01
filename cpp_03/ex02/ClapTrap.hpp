#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

    public:
        ClapTrap(void);
        ClapTrap(std::string const name);
        ClapTrap(std::string const name, int hitPoints, int energyPoints, int attackDamage);
        ClapTrap(ClapTrap const & ClapTrap);
        ~ClapTrap(void);
        ClapTrap & operator=(ClapTrap const & ref);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;
        std::string     _name;
};

#endif
