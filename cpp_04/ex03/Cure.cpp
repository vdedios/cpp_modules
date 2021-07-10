#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {
}

Cure::Cure(Cure const & cure) {
    *this = cure;
}

Cure::~Cure(void) {
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    this->_xp += 10;
}

AMateria* Cure::clone(void) const {
    return new Cure(*this);
}