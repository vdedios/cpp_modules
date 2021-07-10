#include "Comet.hpp"


Comet::Comet(void): _name("comet") {
}

Comet::Comet (Comet const & asteroid) {
    *this = asteroid;
}

Comet::~Comet() {
}

Comet const & Comet::operator=(Comet const & asteroid) {
    this->_name = asteroid._name;
    return *this;
}

std::string Comet::beMined(StripMiner * stripMiner) const{
    (void)stripMiner;
    return (std::string("Tartarite"));
}
std::string Comet::beMined(DeepCoreMiner * deepCoreMiner) const{
    (void)deepCoreMiner;
    return (std::string("Meium"));
}

std::string Comet::getName() const{
    return (this->_name);
}
