#include "AssaultTerminator.hpp"


AssaultTerminator::AssaultTerminator(void) {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & tacticalMarine) {
    std::cout << "Teleports from space" << std::endl;
    *this = tacticalMarine;
}

AssaultTerminator::~AssaultTerminator(void) {
    std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const &) {
    return *this;
}

ISpaceMarine* AssaultTerminator::clone(void) const {
    AssaultTerminator *copyAssaultTerminator = new AssaultTerminator(*this);

    return copyAssaultTerminator;
}

void AssaultTerminator::battleCry(void) const {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const {
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const {
    std::cout << "* attacks with chainfists *" << std::endl;
}