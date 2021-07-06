#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy("RadScorpion", 80) {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(std::string type, int hp): Enemy(type, hp) {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion & radScorpion) {
    *this = radScorpion;
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void) {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=(RadScorpion & src) {
    this->_type = src._type;
    this->_hp = src._hp;
    return *this;
}
