#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    std::cout << "ScavTrap default constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap name constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const & ScavTrap) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = ScavTrap;
    return ;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called" << std::endl;
    return ;
}

void ScavTrap::guardGate(void) {
    std::cout << this->_name << " has entered in Gate keeper mode" << std::endl;
    return ;
}