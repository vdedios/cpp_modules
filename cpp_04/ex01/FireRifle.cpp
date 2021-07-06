#include "FireRifle.hpp"

FireRifle::FireRifle(void): AWeapon("Fire Rifle", 50, 1) {
}

FireRifle::FireRifle(std::string name, int damage, int apcost): AWeapon(name, damage, apcost) {
}

FireRifle::FireRifle(FireRifle & fireRifle) {
    *this = fireRifle;
}

FireRifle::~FireRifle(void) {
}

FireRifle & FireRifle::operator=(FireRifle & src) {
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_damage = src._damage;
    return *this;
}

void FireRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}