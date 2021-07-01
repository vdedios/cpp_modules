#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    std::cout << "ScavTrap default constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20) {
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

ScavTrap & ScavTrap::operator=(ScavTrap const & ref) {
    this->_name = ref._name;
    this->_hitPoints = ref._hitPoints;
    this->_energyPoints = ref._energyPoints;
    this->_attackDamage = ref._attackDamage;
    return *this;
}