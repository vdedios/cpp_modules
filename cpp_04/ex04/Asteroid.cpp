#include "Asteroid.hpp"


Asteroid::Asteroid(void): _name("asteroid") {
}

Asteroid::Asteroid (Asteroid const & asteroid) {
    *this = asteroid;
}

Asteroid::~Asteroid() {
}

Asteroid const & Asteroid::operator=(Asteroid const & asteroid) {
    this->_name = asteroid._name;
    return *this;
}

std::string Asteroid::beMined(StripMiner * stripMiner) const{
    (void)stripMiner;
    return (std::string("Flavium"));
}
std::string Asteroid::beMined(DeepCoreMiner * deepCoreMiner) const{
    (void)deepCoreMiner;
    return (std::string("Dragonite"));
}

std::string Asteroid::getName() const{
    return (this->_name);
}
