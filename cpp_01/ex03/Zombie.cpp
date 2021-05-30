#include "Zombie.hpp"

Zombie::Zombie (std::string name, std::string type) : name(name), type(type) {
    return ;
}

Zombie::~Zombie(void) {
    return ;
}

void Zombie::announce(void) const {
    std::cout << this->name << "; " << this->type << " Braiiiiiiinnnssss..." << std::endl;
}
