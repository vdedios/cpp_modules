#include "Converter.hpp"

Converter::Converter(void): _value("") {
}

Converter::Converter(std::string value): _value(value) {
}

Converter::Converter(Converter const & converter) {
    *this = converter;
}

Converter::~Converter(void) {
}

char Converter::getCharVal(void) {
    int value = std::stoi(this->_value);

    if (value <= 0 || value > 127) {
        throw std::out_of_range("imposible");
    }
    return (static_cast<char>(value));
}

int Converter::getIntVal(void) {
    return std::stoi(this->_value);
}

float Converter::getFloatVal(void) {
    return std::stof(this->_value);
}

double Converter::getDoubleVal(void) {
    return std::stod(this->_value);
}
