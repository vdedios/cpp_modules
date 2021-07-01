#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    std::cout << "FragTrap default constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap name constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const & FragTrap) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = FragTrap;
    return ;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

void FragTrap::highFiveGuys(void) {
    std::cout << this->_name << " says: \"High Five!\" " << std::endl;
    return ;
}

FragTrap & FragTrap::operator=(FragTrap const & ref) {
    this->_name = ref._name;
    this->_hitPoints = ref._hitPoints;
    this->_energyPoints = ref._energyPoints;
    this->_attackDamage = ref._attackDamage;
    return *this;
}