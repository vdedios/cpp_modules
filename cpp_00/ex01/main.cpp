#include <iostream>
#include <string>

static void exec_option(std::string option) {
    if (option == "EXIT") {
        exit(0);
    } else if (option == "ADD") {
        std::cout << "add" << std::endl;
    } else if (option == "SEARCH") {
        std::cout << "search" << std::endl;
    }
}

static void phonebook() {
    std::string input;

    while (true) {
        std::cout << "What do you want to do? ";
        getline(std::cin, input);
        exec_option(input);
    }
}

int main() {
    std::cout << " ___ _  _  ___  _  _ ___ ___  ___   ___  _  __" << std::endl;
    std::cout << "| _ \\ || |/ _ \\| \\| | __| _ )/ _ \\ / _ \\| |/ /" << std::endl;
    std::cout << "|  _/ __ | (_) | .` | _|| _ \\ (_) | (_) | ' < " << std::endl;
    std::cout << "|_| |_||_|\\___/|_|\\_|___|___/\\___/ \\___/|_|\\_\\" << std::endl;
    std::cout << std::endl;
    phonebook();
    return (0);
}
