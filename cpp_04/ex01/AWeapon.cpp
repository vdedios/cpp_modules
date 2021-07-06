#include "AWeapon.hpp"

AWeapon::AWeapon(void): _name(""), _damage(0), _apcost(0) {
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage): _name(name), _damage(damage), _apcost(apcost) {
}

AWeapon::AWeapon(AWeapon & aweapon) {
    *this = aweapon;
}


AWeapon::~AWeapon(void) {
}

std::string AWeapon::getName(void) const {
    return this->_name;
}

int AWeapon::getapcostCost() const {
    return this->_apcost;
}

int AWeapon::getDamage() const {
    return this->_damage;
}

AWeapon & AWeapon::operator=(AWeapon & src) {
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_damage = src._damage;
    return *this;
}
