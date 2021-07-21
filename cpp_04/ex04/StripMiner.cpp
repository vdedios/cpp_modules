#include "StripMiner.hpp"

StripMiner::StripMiner(void) {
}

StripMiner::StripMiner(StripMiner const & stripMiner) {
    *this = stripMiner;
}

StripMiner::~StripMiner(void) {
}

StripMiner const & StripMiner::operator=(StripMiner const & rhs) {
    (void)rhs;
    return *this;
}

void StripMiner::mine(IAsteroid* asteroid) {
    std::cout << "* strip mining... got " << asteroid->beMined(this) << "! *" << std::endl;
}