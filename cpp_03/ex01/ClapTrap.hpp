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
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;

    protected:
        std::string     _name;
};

#endif
