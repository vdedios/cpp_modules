#include "Brain.hpp"

Brain::Brain(float weight, float size, int age) : _weight(weight), _size(size), _age(age) {
    return ;
}

Brain::~Brain(void) {
    return ;
}

std::string Brain::identify(void) const {
    std::stringstream ss;

    ss << (void *const)this;  
    std::string addr = ss.str(); 
	return addr;
}

void Brain::getParams(void) const{
    std::cout << "size: " << this->_size << std::endl;
    std::cout << "weight: " << this->_weight << std::endl;
    std::cout << "age: " << this->_age << std::endl;
}