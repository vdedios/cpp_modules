#include "Character.hpp"

Character::Character(void): _name(""), _apcost(40), _weapon(NULL)  {
}

Character::Character(std::string const name): _name(name), _apcost(40), _weapon(NULL) {
}

Character::Character(Character & character) {
    *this = character;
}

Character::~Character(void) {
}

Character & Character::operator=(Character & src) {
    this->_name = src._name;
    this->_apcost = src._apcost;
    return *this;
}

std::string Character::getName(void) const {
    return this->_name;
}

AWeapon *Character::getAWeapon(void) const {
    return this->_weapon;
}

int  Character::Character::getApcost(void) const {
    return this->_apcost;
}

void Character::recoverAP(void) {
    this->_apcost += 10;
    if (this->_apcost > 40) {
        this->_apcost = 40;
    }
}

void Character::equip(AWeapon* weapon) {
    this->_weapon = weapon;
}

void Character::attack(Enemy* enemy) {
    if (this->_apcost && this->_weapon) {
        std::cout << this->_name;
        std::cout << " attacks ";
        std::cout << enemy->getType();
        std::cout << " with a ";
        std::cout << this->_weapon->getName() << std::endl;
        this->_weapon->attack();
        this->_apcost -= this->_weapon->getapcostCost();
        enemy->takeDamage(this->_weapon->getDamage());
        if (enemy->gethp() <=0 ) {
            delete enemy;
        }
    }
}

std::ostream& operator<<(std::ostream& o, Character const & character) {
    if (character.getAWeapon()) {
        o << character.getName();
        o << " has ";
        o << character.getApcost();
        o << " AP and wields a ";
        o << character.getAWeapon()->getName() << std::endl;
    } else {
        o << character.getName();
        o << " has ";
        o << character.getApcost();
        o << " and is unarmed"<< std::endl;
    }
    return o;
}