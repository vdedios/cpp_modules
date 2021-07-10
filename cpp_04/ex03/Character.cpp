#include "Character.hpp"

Character::Character(void): _name(""), _materiaCount(0) {
}

Character::Character(std::string name): _name(name), _materiaCount(0) {
}

Character::Character(Character const & character) {
    *this = character;
    this->_deleteAllMateria();
}

Character::~Character(void) {
}

Character const & Character::operator=(Character const & character) {
    this->_name = character._name;
    return *this;
}

std::string const & Character::getName(void) const {
    return this->_name;
}

void Character::equip(AMateria* m) {
    if (m && this->_materiaCount < MAX_MATERIA) {
        this->_materia[this->_materiaCount] = m;
        this->_materiaCount++;
    }
}

void Character::unequip(int idx) {
    if (idx < MAX_MATERIA) {
        this->_materia[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx < this->_materiaCount) {
        this->_materia[idx]->use(target);
    }
}

void Character::_deleteAllMateria(void) {
    while (this->_materiaCount > 0) {
        delete this->_materia[this->_materiaCount - 1];
        this->_materia[this->_materiaCount - 1] = NULL;
        this->_materiaCount--;
    }
}
