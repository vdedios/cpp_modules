#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 50, 8) {
}

PowerFist::PowerFist(std::string name, int damage, int apcost): AWeapon(name, damage, apcost) {
}

PowerFist::PowerFist(PowerFist & powerFist) {
    *this = powerFist;
}

PowerFist::~PowerFist(void) {
}

PowerFist & PowerFist::operator=(PowerFist & src) {
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_damage = src._damage;
    return *this;
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}