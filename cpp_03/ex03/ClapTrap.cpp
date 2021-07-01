#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _hitPoints(10), _energyPoints(10), _attackDamage(0), _name("") {
    std::cout << "ClapTrap default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string const name): _hitPoints(10), _energyPoints(10), _attackDamage(0), _name(name) {
    std::cout << "ClapTrap name constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & ClapTrap) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = ClapTrap;
    return ;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap destructor called" << std::endl;
    return ;
}

void ClapTrap::attack(std::string const & target) {
    if (this->_hitPoints <= this->_attackDamage) {
        std::cout << "FR4G-TP ";
        std::cout << this->_name;
        std::cout << " has not enough hit points";
        return ;
    }
    this->_hitPoints -= this->_attackDamage;
    std::cout << "FR4G-TP ";
    std::cout << this->_name;
    std::cout << " attacks ";
    std::cout << target;
    std::cout << " causing ";
    std::cout << this->_attackDamage;
    std::cout << " points of damage! " << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_energyPoints <= amount) {
        std::cout << "FR4G-TP ";
        std::cout << this->_name;
        std::cout << " has died..";
        return ;
    }
    this->_energyPoints -= amount;
    std::cout << "FR4G-TP ";
    std::cout << this->_name;
    std::cout << " has been attacked losing ";
    std::cout << amount;
    std::cout << " points of damage! " << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
    this->_energyPoints += amount;
    std::cout << "FR4G-TP ";
    std::cout << this->_name;
    std::cout << " has been repaired adding ";
    std::cout << amount;
    std::cout << " points of damage! " << std::endl;
    return ;
}

void ClapTrap::getHitPoints(void) {
    std::cout << "Hit points: " << this->_hitPoints << std::endl;
    return ;
}
void ClapTrap::getEnergyPoints(void) {
    std::cout << "Energy points: " << this->_energyPoints << std::endl;
    return ;
}
void ClapTrap::getAttackDamage(void) {
    std::cout << "Attack damage: " << this->_attackDamage << std::endl;
    return ;
}
