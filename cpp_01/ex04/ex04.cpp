#include <iostream>
#include <string>

int main(void) {
    std::string *str_ptr = new std::string("HI THIS IS BRAIN");
    std::string &str_ref = *str_ptr;
    std::cout << *str_ptr << std::endl;
    std::cout << str_ref << std::endl;
}