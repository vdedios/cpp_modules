#include "Squad.hpp"

Squad::Squad(void): _spaceMarine(NULL), _squadUnits(0) {
}

Squad::Squad(ISpaceMarine ** spaceMarine, int squadUnits): _spaceMarine(spaceMarine), _squadUnits(squadUnits) {
}

Squad::Squad(Squad const & squad) {
    *this = squad;
    //deep copy
    this->_deleteUnits();
}

Squad::~Squad(void) {
    this->_deleteUnits();
    if (this->_spaceMarine != NULL) {
        delete this->_spaceMarine;
    }
}

Squad & Squad::operator=(Squad const & rhs) {
    this->_deleteUnits();
    this->_spaceMarine = rhs._spaceMarine;
    this->_squadUnits = rhs._squadUnits;
    return *this;
}

int Squad::getCount(void) const {
    return this->_squadUnits;
}

ISpaceMarine* Squad::getUnit(int unit) const {
    int count = 0;
    ISpaceMarine **squad = this->_spaceMarine;

    if (unit < 0) {
        return NULL;
    }
    while (count < unit) {
        squad++;
        count++;
    }
    return (*squad);
}

int Squad::push(ISpaceMarine* spaceMarine) {
    ISpaceMarine **squad = new ISpaceMarine*[this->_squadUnits + 1];
    int i = 0;

    while (i < this->_squadUnits) {
        squad[i] = this->_spaceMarine[i];
        i++;
    }
    squad[i] = spaceMarine;
    if (this->_spaceMarine != NULL) {
        delete this->_spaceMarine;
    }
    this->_spaceMarine = squad;
    this->_squadUnits++;
    return this->_squadUnits;
}

void Squad::_deleteUnits(void) {
    if (this->_squadUnits > 0) {
        while (this->_squadUnits > 0) {
            delete this->_spaceMarine[this->_squadUnits - 1];
            this->_squadUnits--;
        }
    }
}