#include <iostream>
#include <string>

#include "Array.hpp"

int main(void) {
    Array<std::string> arr(5);

    arr[0] = "Hola";
    std::cout << arr[0] << std::endl;

    try {
        std::cout << arr[10] << std::endl;
    } catch (Array<std::string>::OutOfBoundsException &oob) {
        std::cout << oob.what() << std::endl;
    }
    return (0);
}