#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void) {

    std::vector<int> v;

    for (int i = 0; i < 100; i++) {
        v.push_back(i);
    }

    try {
        std::vector<int>::const_iterator it = easyfind<std::vector<int> >(v, 80);
        std::cout << *it << std::endl;
    } catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
