#include "Victim.hpp"

Victim::Victim(void): _name("") {
    std::cout << "Default constructor called" << std::endl;
}

Victim::Victim(std::string name): _name(name) {
    std::cout << "Some random victim called ";
    std::cout << this->_name;
    std::cout << " just appeared!" << std::endl;
}

Victim::Victim(Victim & victim) {
    *this = victim;
    std::cout << "Some random victim called ";
    std::cout << this->_name;
    std::cout << "just appeared!" << std::endl;
}

Victim::~Victim(void) {
    std::cout << "Victim ";
    std::cout << this->_name;
    std::cout << " just died for no appearent reason!" << std::endl;
}

std::string Victim::getName(void) const {
    return this->_name;
}

void Victim::getPolymorphed() const {
    std::cout << this->_name;
    std::cout << " has been turned into a cute little sheep!" << std::endl;
}

Victim & Victim::operator=(Victim & src) {
    this->_name = src._name;
    return *this;
}

std::ostream& operator<<(std::ostream& o, Victim const & victim) {
    o << "I am " + victim.getName() + " and I like otters!\n";
    return o;
}
