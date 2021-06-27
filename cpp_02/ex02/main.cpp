#include <iostream>

#include "Fixed.hpp"

int main( void ) {
    Fixed a(2.22f);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "a + b: " << a + b << std::endl;
    std::cout << "a - b: " << a - b << std::endl;
    std::cout << "a / b: " << a / b << std::endl;
    if (a > b) {
        std::cout << "a is bigger" << std::endl;
    } else if (a >= b) {
        std::cout << "a is bigger or equal" << std::endl;
    } else if (a < b) {
        std::cout << "b is bigger" << std::endl;
    } else if (a <= b) {
        std::cout << "b is bigger or equal" << std::endl;
    }
    if (a == b) {
        std::cout << "a and b are equal" << std::endl;
    } else if(a != b) {
        std::cout << "a and b are not equal" << std::endl;
    }
    std::cout << "a: " << a << std::endl;
    std::cout << "pre-increment: " << ++a << std::endl;
    std::cout << "pre-decrement: " << --a << std::endl;
    std::cout << "post-increment: " << a++;
    std::cout << "; a: " << a << std::endl;
    std::cout << "pre-decrement: " << a--;
    std::cout << "; a: " << a << std::endl;
    std::cout << "max(" << a << ", " << b << "): " << Fixed::max( a, b ) << std::endl;
    std::cout << "min(" << a << ", " << b << "): " << Fixed::min( a, b ) << std::endl;

    return 0;
}