#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(int const N) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPoint = N << Fixed::_FRACTIONALBITS;
    return ;
}

Fixed::Fixed(float const N) {
    std::cout << "Float constructor called" << std::endl;

    this->_fixedPoint = (int)roundf(N * this->_leftShiftFractionalBits());
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
    return this->_fixedPoint;
}

void Fixed::setRawBits( int const raw ) {
    this->_fixedPoint = raw;
}

int Fixed::_leftShiftFractionalBits(int fractionalBits) const {
    if (fractionalBits <= 1) {
        return 2;
    }
    return Fixed::_leftShiftFractionalBits(fractionalBits - 1) * 2;
}

float Fixed::_rightShiftFractionalBits(int fractionalBits) const {
    if (fractionalBits <= 0) {
        return 1;
    }
    return Fixed::_rightShiftFractionalBits(fractionalBits - 1) / 2;
}

int Fixed::toInt(void) const {
    return this->_fixedPoint >> Fixed::_FRACTIONALBITS;
}

float Fixed::toFloat(void) const {
    float integer = (float)(this->_fixedPoint >> this->_FRACTIONALBITS);
    float decimal = this->_rightShiftFractionalBits() * (this->_fixedPoint & (this->_leftShiftFractionalBits() - 1));

    return  integer + decimal;
}

std::ostream& operator<<(std::ostream& o, Fixed const & fixedPoint) {
    o << fixedPoint.toFloat();
    return o;
}
