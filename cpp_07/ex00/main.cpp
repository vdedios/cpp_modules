#include <iostream>
#include "whatever.hpp"

int main(void) {
    int a = 10;
    int b = 3;

    swap<int>(a, b);
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << max<int>(10, -1) << std::endl;
    std::cout << min<int>(10, 10) << std::endl;

    return (0);
}
