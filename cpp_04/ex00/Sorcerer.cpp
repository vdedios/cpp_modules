#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void): _name(""), _title("") {
    std::cout << "Default constructor called" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title) {
    std::cout << this->_name;
    std::cout << ", ";
    std::cout << this->_title;
    std::cout << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer & sorcerer) {
    *this = sorcerer;
    std::cout << this->_name;
    std::cout << ", ";
    std::cout << this->_title;
    std::cout << ", is born!" << std::endl;
}


Sorcerer::~Sorcerer(void) {
    std::cout << this->_name;
    std::cout << ", ";
    std::cout << this->_title;
    std::cout << ", is dead. Consequences will never be the same" << std::endl;
}

std::string Sorcerer::getName(void) const {
    return this->_name;
}

std::string Sorcerer::getTitle(void) const {
    return this->_title;
}

void Sorcerer::polymorph(Victim const & victim) const {
    victim.getPolymorphed();
}

Sorcerer & Sorcerer::operator=(Sorcerer & src) {
    this->_name = src._name;
    this->_title = src._title;
    return *this;
}

std::ostream& operator<<(std::ostream& o, Sorcerer const & sorcerer) {
    o << "I am " + sorcerer.getName() + ", " + sorcerer.getTitle() + ", and I like ponies!\n";
    return o;
}
