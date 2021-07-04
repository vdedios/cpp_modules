#include "Peon.hpp"

Peon::Peon(void) {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name): Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon & peon) {
    *this = peon;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const {
    std::cout << this->_name;
    std::cout << " has been turned into a pink pony!" << std::endl;
}

Peon & Peon::operator=(Peon & src) {
    this->_name = src._name;
    return *this;
}

std::ostream& operator<<(std::ostream& o, Peon const & peon) {
    o << "I am " + peon.getName() + " and I like otters!\n";
    return o;
}
