#include "Zombie.hpp"

Zombie::Zombie (std::string name, std::string type) : _name(name), _type(type) {
    return ;
}

Zombie::~Zombie(void) {
    return ;
}

void Zombie::announce(void) const {
    std::cout << this->_name << "; " << this->_type << " Braiiiiiiinnnssss..." << std::endl;
}
