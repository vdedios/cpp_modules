#include "FireDaemon.hpp"

FireDaemon::FireDaemon(void): Enemy("Fire Daemon", 110) {
    std::cout << "Aloha your time comes to an end!" << std::endl;
}

FireDaemon::FireDaemon(std::string type, int hp): Enemy(type, hp) {
    std::cout << "Aloha your time comes to an end!" << std::endl;
}

FireDaemon::FireDaemon(FireDaemon & fireDaemon) {
    *this = fireDaemon;
    std::cout << "Aloha your time comes to an end!" << std::endl;
}

FireDaemon::~FireDaemon(void) {
    std::cout << "Holy F..." << std::endl;
}

void FireDaemon::takeDamage(int damage) {
    if (this->_hp <= 0 || damage < 0 ) {
        return ;
    }
    this->_hp = damage < this->_hp
        ? this->_hp - damage + 3
        : 0;
}

FireDaemon & FireDaemon::operator=(FireDaemon & src) {
    this->_type = src._type;
    this->_hp = src._hp;
    return *this;
}
