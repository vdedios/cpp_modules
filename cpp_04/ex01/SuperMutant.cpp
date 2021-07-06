#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy("Super Mutant", 170) {
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(std::string type, int hp): Enemy(type, hp) {
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant & superMutant) {
    *this = superMutant;
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void) {
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage) {
    if (this->_hp <= 0 || damage < 0 ) {
        return ;
    }
    this->_hp = damage < this->_hp
        ? this->_hp - damage + 3
        : 0;
}

SuperMutant & SuperMutant::operator=(SuperMutant & src) {
    this->_type = src._type;
    this->_hp = src._hp;
    return *this;
}
