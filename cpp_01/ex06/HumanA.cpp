#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
    return ;
}

HumanA::~HumanA() {
    return ;
}

void HumanA::attack() const {
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon) {
    this->_weapon = weapon;
}
