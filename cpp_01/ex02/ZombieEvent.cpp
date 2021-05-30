# include "ZombieEvent.hpp"
# include "Zombie.hpp"

ZombieEvent::ZombieEvent(void) : _type("") {
    return ;
}

ZombieEvent::~ZombieEvent() {
    return ;
}

void ZombieEvent::setZombieType(std::string type) {
    this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) const {
    return new Zombie(name, this->_type);
}
