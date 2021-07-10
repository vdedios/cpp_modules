#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"
#include "Asteroid.hpp"
#include "Comet.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "MiningBarge.hpp"

int main(void) {

    IAsteroid* asteroid = new Asteroid();
    IAsteroid* comet = new Comet();
    IMiningLaser* stripMiner = new StripMiner();
    IMiningLaser* deepCoreMiner = new DeepCoreMiner();
    MiningBarge miningBarge;

    miningBarge.equip(stripMiner);
    miningBarge.equip(deepCoreMiner);
    miningBarge.mine(asteroid);
    miningBarge.mine(comet);

    return 0;
}