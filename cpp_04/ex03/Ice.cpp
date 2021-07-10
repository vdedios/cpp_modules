#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {
}

Ice::Ice(Ice const & ice) {
    *this = ice;
}

Ice::~Ice(void) {
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    this->_xp += 10;
}

AMateria* Ice::clone(void) const {
    return new Ice(*this);
}