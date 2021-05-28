#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"

int main() {
    PhoneBook phoneBook;
    std::string input;

    std::cout << " ___ _  _  ___  _  _ ___ ___  ___   ___  _  __" << std::endl;
    std::cout << "| _ \\ || |/ _ \\| \\| | __| _ )/ _ \\ / _ \\| |/ /" << std::endl;
    std::cout << "|  _/ __ | (_) | .` | _|| _ \\ (_) | (_) | ' < " << std::endl;
    std::cout << "|_| |_||_|\\___/|_|\\_|___|___/\\___/ \\___/|_|\\_\\" << std::endl;
    std::cout << std::endl;
    while (true) {
        std::cout << "What do you want to do? ";
        getline(std::cin, input);
        if (std::cin.eof() || input == "EXIT") {
            exit(0);
        } else if (input == "ADD") {
            phoneBook.add();
        } else if (input == "SEARCH") {
            phoneBook.search();
        }
    }
    return (0);
}
