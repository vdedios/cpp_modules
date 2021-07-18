#include <iomanip>

#include "Converter.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: ./scalar <number>" << std::endl;
    }

    Converter converter((std::string(argv[1])));

    std::cout << "char: ";
    try {
        std::cout << "'" + std::string(1, converter.getCharVal()) + "'" << std::endl;
    } catch (std::out_of_range const & oor) {
        std::cout << oor.what() << std::endl;
    }

    std::cout << "int: ";
    try {
        std::cout << converter.getIntVal() << std::endl;
    } catch (std::out_of_range const & oor) {
        std::cout << oor.what() << std::endl;
    }

    std::cout << "float: ";
    try {
        std::cout << std::fixed << std::setprecision(1) << converter.getFloatVal() << "f" << std::endl;
    } catch (std::out_of_range const & oor) {
        std::cout << oor.what() << std::endl;
    }

    std::cout << "double: ";
    try {
        std::cout << converter.getDoubleVal() << std::endl;
    } catch (std::out_of_range const & oor) {
        std::cout << oor.what() << std::endl;
    }

    return (0);
}
