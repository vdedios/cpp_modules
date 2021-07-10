#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void) {
}

DeepCoreMiner::~DeepCoreMiner() {
}

DeepCoreMiner const & DeepCoreMiner::operator=(DeepCoreMiner const & rhs) {
    (void)rhs;
    return *this;
}

void DeepCoreMiner::mine(IAsteroid* asteroid) {
    std::cout << "* mining deep... got " << asteroid->beMined(this) << "! *" << std::endl;
}