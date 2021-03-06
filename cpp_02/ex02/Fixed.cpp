#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0) {
    return ;
}

Fixed::Fixed(int const N) {
    this->_fixedPoint = N << Fixed::_FRACTIONALBITS;
    return ;
}

Fixed::Fixed(float const N) {
    this->_fixedPoint = (int)roundf(N * this->_leftShiftFractionalBits());
    return ;
}

Fixed::Fixed(Fixed const & Fixed) {
    *this = Fixed;
    return ;
}

Fixed::~Fixed(void) {
    return ;
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
    float integer = (float)(this->_fixedPoint >> Fixed::_FRACTIONALBITS);
    float decimal = this->_rightShiftFractionalBits() * (this->_fixedPoint & (this->_leftShiftFractionalBits() - 1));

    return  integer + decimal;
}

// --- Operator overload ---

Fixed& Fixed::operator=(Fixed const & member) {
    this->_fixedPoint = member.getRawBits();
    return *this;
}

// Comparison

bool Fixed::operator>(Fixed const & fact) const{
    return this->toFloat() > fact.toFloat();
}

bool Fixed::operator>=(Fixed const & fact) const{
    return this->toFloat() >= fact.toFloat();
}

bool Fixed::operator<(Fixed const & fact) const{
    return this->toFloat() < fact.toFloat();
}

bool Fixed::operator<=(Fixed const & fact) const{
    return this->toFloat() <= fact.toFloat();
}

bool Fixed::operator==(Fixed const & fact) const{
    return this->toFloat() == fact.toFloat();
}

bool Fixed::operator!=(Fixed const & fact) const{
    return this->toFloat() != fact.toFloat();
}

// Arithmetic

Fixed Fixed::operator+(Fixed const & fact) const{
    return Fixed( this->toFloat() + fact.toFloat());
}

Fixed Fixed::operator-(Fixed const & fact) const{
    return Fixed( this->toFloat() - fact.toFloat());
}

Fixed Fixed::operator*(Fixed const & fact) const{
    return Fixed( this->toFloat() * fact.toFloat());
}

Fixed Fixed::operator/(Fixed const & fact) const{
    return Fixed( this->toFloat() / fact.toFloat());
}

// Incremental and decremental

Fixed& Fixed::operator++() {
    float inc = this->toFloat() + 1;
    this->_fixedPoint = (int)roundf(inc * this->_leftShiftFractionalBits());
    return (*this);
}

Fixed& Fixed::operator--() {
    float inc = this->toFloat() - 1;
    this->_fixedPoint = (int)roundf(inc * this->_leftShiftFractionalBits());
    return (*this);
}

Fixed Fixed::operator++(int n) {
    (void)n;
    float initial = this->toFloat();
    this->_fixedPoint = (int)roundf((initial + 1) * this->_leftShiftFractionalBits());
    return Fixed(initial);
}

Fixed Fixed::operator--(int n) {
    (void)n;
    float initial = this->toFloat();
    this->_fixedPoint = (int)roundf((initial - 1) * this->_leftShiftFractionalBits());
    return Fixed(initial);
}

// Comparison members

Fixed& Fixed::min(Fixed &el1, Fixed &el2) {
    if (el1.toFloat() < el2.toFloat()) {
        return  (el1);
    }
    return  (el2);
}

Fixed const & Fixed::min(Fixed const &el1, Fixed const &el2) {
    if (el1.toFloat() < el2.toFloat()) {
        return  (el1);
    }
    return  (el2);
}

Fixed& Fixed::max(Fixed &el1, Fixed &el2) {
    if (el1.toFloat() > el2.toFloat()) {
        return  (el1);
    }
    return  (el2);
}

Fixed const & Fixed::max(Fixed const &el1, Fixed const &el2) {
    if (el1.toFloat() > el2.toFloat()) {
        return  (el1);
    }
    return  (el2);
}

// Stream

std::ostream& operator<<(std::ostream& o, Fixed const & fixedPoint) {
    o << fixedPoint.toFloat();
    return o;
}
