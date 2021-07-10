#include "TacticalMarine.hpp"


TacticalMarine::TacticalMarine(void) {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & tacticalMarine) {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    *this = tacticalMarine;
}

TacticalMarine::~TacticalMarine(void) {
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const &) {
    return *this;
}

ISpaceMarine* TacticalMarine::clone(void) const {
    TacticalMarine *copyTacticalMarine = new TacticalMarine(*this);

    return copyTacticalMarine;
}

void TacticalMarine::battleCry(void) const {
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack(void) const {
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const {
    std::cout << "* attacks with a chainsword *" << std::endl;
}