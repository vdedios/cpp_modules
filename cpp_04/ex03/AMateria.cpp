#include "AMateria.hpp"

AMateria::AMateria(void): _xp(0) {
}

AMateria::AMateria(std::string const & type): _xp(0), _type(type) {
}

AMateria::~AMateria(void) {
}

AMateria const & AMateria::operator=(AMateria const & materia) {
    this->_type = materia._type;
    this->_xp = materia._xp;
    return *this;
}

std::string const & AMateria::getType(void) const {
    return this->_type;
}

unsigned int AMateria::getXP(void) const {
    return this->_xp;
}

void AMateria::use(ICharacter& target) {
    this->_xp += 10;
    std::cout << target.getName() << std::endl;
}
