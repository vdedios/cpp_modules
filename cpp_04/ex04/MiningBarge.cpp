#include "MiningBarge.hpp"


MiningBarge::MiningBarge(void): _laserCount(0) {
}

MiningBarge::~MiningBarge(void) {
}

MiningBarge const & MiningBarge::operator = (MiningBarge const & miningBarge) {
    this->_laserCount = miningBarge._laserCount;
    return *this;
}

void MiningBarge::equip(IMiningLaser* miningBarge) {
    if (this->_laserCount < MAX_LASERS) {
        this->_lasers[this->_laserCount] = miningBarge;
        this->_laserCount++;
    }
}

void MiningBarge::mine(IAsteroid* miningBarge) const {
    for (int i = 0; i < _laserCount; ++i) {
        this->_lasers[i]->mine(miningBarge);
    }
}
