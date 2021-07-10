#include "StripMiner.hpp"

StripMiner::StripMiner(void) {
}

StripMiner::~StripMiner() {
}

StripMiner const & StripMiner::operator=(StripMiner const & rhs) {
    (void)rhs;
    return *this;
}

void StripMiner::mine(IAsteroid* asteroid) {
    std::cout << "* strip mining... got " << asteroid->beMined(this) << "! *" << std::endl;
}