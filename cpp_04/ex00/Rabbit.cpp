#include "Rabbit.hpp"

Rabbit::Rabbit(void) {
    std::cout << "Ehh... What's up Doc?" << std::endl;
}

Rabbit::Rabbit(std::string name): Victim(name) {
    std::cout << "Ehh... What's up Doc?" << std::endl;
}

Rabbit::Rabbit(Rabbit & rabbit) {
    *this = rabbit;
    std::cout << "Ehh... What's up Doc?" << std::endl;
}

Rabbit::~Rabbit(void) {
    std::cout << "That's all folks..." << std::endl;
}

void Rabbit::getPolymorphed() const {
    std::cout << this->_name;
    std::cout << " has been turned into a brown coyote!" << std::endl;
}

Rabbit & Rabbit::operator=(Rabbit & src) {
    this->_name = src._name;
    return *this;
}

std::ostream& operator<<(std::ostream& o, Rabbit const & rabbit) {
    o << "I am " + rabbit.getName() + " and I like carrots!\n";
    return o;
}
