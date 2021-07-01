#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

    public:
        ClapTrap(void);
        ClapTrap(std::string const Name);
        ClapTrap(ClapTrap const & ClapTrap);
        ~ClapTrap(void);
        ClapTrap & operator=(ClapTrap const & ref);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;
};

#endif
