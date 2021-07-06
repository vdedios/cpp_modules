#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 21, 5) {
}

PlasmaRifle::PlasmaRifle(std::string name, int damage, int apcost): AWeapon(name, damage, apcost) {
}

PlasmaRifle::PlasmaRifle(PlasmaRifle & plasmaRifle) {
    *this = plasmaRifle;
}

PlasmaRifle::~PlasmaRifle(void) {
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle & src) {
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_damage = src._damage;
    return *this;
}

void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}