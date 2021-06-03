#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(int const fixedPoint) : _fixedPoint(fixedPoint) {
    std::cout << "Parametric constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const & Fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = Fixed;
    return ;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed& Fixed::operator=(Fixed const & member) {
    std::cout << "Assignation operator called" << std::endl;
    this->_fixedPoint = member.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPoint;
}

void Fixed::setRawBits( int const raw ) {
    this->_fixedPoint = raw;
}
