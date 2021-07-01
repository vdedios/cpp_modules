#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    std::cout << "FragTrap default constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
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