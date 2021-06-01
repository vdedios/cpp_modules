#include "Human.hpp"

Human::Human() : _brain(2.4, 3.2, 20) {
    return ;
}

Human::~Human(void) {
    return ;
}

std::string Human::identify(void) const {
    return this->_brain.identify();
}

const Brain& Human::getBrain(void) const {
	return this->_brain;
}
