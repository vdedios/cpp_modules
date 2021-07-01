#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
    std::cout << "DiamondTrap default constructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) {
    this->_hitPoints = this->FragTrap::_hitPoints;
    this->_energyPoints = this->ScavTrap::_energyPoints;
    this->_attackDamage = this->FragTrap::_attackDamage;
    std::cout << "DiamondTrap name constructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & DiamondTrap) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = DiamondTrap;
    return ;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap destructor called" << std::endl;
    return ;
}

void DiamondTrap::whoAmI(void) {
    std::cout << "My name is " << this->_name << std::endl;
    std::cout << "ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
