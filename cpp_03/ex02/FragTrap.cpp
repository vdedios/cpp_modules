#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    std::cout << "FragTrap default constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 50, 20) {
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

void FragTrap::guardGate(void) {
    std::cout << this->_name << " has entered in Gate keeper mode" << std::endl;
    return ;
}