#include "Converter.hpp"

Converter::Converter(void): _value(""), _valueType("") {
}

Converter::Converter(std::string value): _value(value), _valueType("") {
    this->_setValueType();
}

Converter::Converter(Converter const & converter) {
    *this = converter;
}

Converter::~Converter(void) {
}

char Converter::getCharVal(void) const {
    int tmp;

    if (this->_valueType == "char") {
        return (this->_charValue);
    }
    if (this->_valueType == "int") {
        tmp = static_cast<int>(this->_intValue);
        if (tmp > CHAR_MAX || tmp < 0) {
            throw std::out_of_range("imposible");
        } else if (tmp < 32) {
            throw std::out_of_range("non displayable");
        }
        return (static_cast<char>(this->_intValue));
    }
    if (this->_valueType == "float") {
        tmp = static_cast<int>(this->_floatValue);
        if (tmp > CHAR_MAX || tmp < 0) {
            throw std::out_of_range("imposible");
        } else if (tmp < 32) {
            throw std::out_of_range("non displayable");
        }
        return (static_cast<char>(this->_floatValue));
    }
    if (this->_valueType == "double") {
        tmp = static_cast<int>(this->_doubleValue);
        if (tmp > CHAR_MAX || tmp < 0) {
            throw std::out_of_range("imposible");
        } else if (tmp < 32) {
            throw std::out_of_range("non displayable");
        }
        return (static_cast<char>(this->_doubleValue));
    }
    throw std::out_of_range("imposible");
}

int Converter::getIntVal(void)  const {
    long tmp;

    if (this->_valueType == "char") {
        return (static_cast<int>(this->_charValue));
    }
    if (this->_valueType == "int") {
        return (this->_intValue);
    }
    if (this->_valueType == "float") {
        tmp = static_cast<long>(this->_floatValue);
        if (tmp > INT_MAX || tmp < INT_MIN) {
            throw std::out_of_range("imposible");
        }
        return (static_cast<int>(this->_floatValue));
    }
    if (this->_valueType == "double") {
        tmp = static_cast<long>(this->_doubleValue);
        if (tmp > INT_MAX || tmp < INT_MIN) {
            throw std::out_of_range("imposible");
        }
        return (static_cast<int>(this->_doubleValue));
    }
    throw std::out_of_range("imposible");
}

float Converter::getFloatVal(void)  const {
    if (this->_valueType == "char") {
        return static_cast<float>(this->_charValue);
    }
    if (this->_valueType == "int") {
        return static_cast<float>(this->_intValue);
    }
    if (this->_valueType == "float") {
        return (this->_floatValue);
    }
    if (this->_valueType == "double") {
        return static_cast<float>(this->_doubleValue);
    }
    throw std::out_of_range("imposible");
}

double Converter::getDoubleVal(void)  const {
    if (this->_valueType == "char") {
        return static_cast<double>(this->_charValue);
    }
    if (this->_valueType == "int") {
        return static_cast<double>(this->_intValue);
    }
    if (this->_valueType == "float") {
        return static_cast<double>(this->_floatValue);
    }
    if (this->_valueType == "double") {
        return (this->_doubleValue);
    }
    throw std::out_of_range("imposible");
}

void Converter::_setValueType(void) {
    std::string value = this->_value;

    if (this->_isChar(value)) {
        this->_valueType = "char";
        this->_charValue = value[1];
        return ;
    } 
    if (this->_isInt(value)) {
        this->_valueType = "int";
        this->_intValue = std::stoi(value);
        return ;
    }
    if (this->_isDouble(value)) {
        this->_valueType = "double";
        this->_doubleValue = std::stod(value);
        return ;
    }
    if (this->_isFloat(value)) {
        this->_valueType = "float";
        this->_floatValue = std::stof(value);
        return ;
    }
}

bool Converter::_isChar(std::string value) {
    if (value.length() == 3
            && value[0] == '\''
            && (value[1] > 32 && value[1] < 127)
            && value[2] == '\'') {
        this->_charValue = value[1];
        return (true);
    }
    return (false);
}

bool Converter::_isInt(std::string value) {
    int         pos;

    pos = this->_isNumber(value, 0);
    if (pos == static_cast<int>(value.length())) {
        try {
            std::stoi(value);
            return true;
        } catch (std::out_of_range const & oor) {
            return false;
        }
    }
    return false;
}

bool Converter::_isFloat(std::string value) {
    int         pos;

    if (value == "inff"
            || value == "-inff"
            || value == "nanf") {
        return true;
    }
    pos = this->_isNumber(value, 0);
    if (value[pos] == '.') {
        pos = this->_isNumber(value, pos + 1);
        if (pos == static_cast<int>(value.length()) - 1 && value[pos] == 'f') {
            try {
                std::stof(value);
                return true;
            } catch (std::out_of_range const & oor) {
                return false;
            }
        }
    }

    return false;
}

bool Converter::_isDouble(std::string value) {
    int         pos;

    if (value == "inf"
            || value == "-inf"
            || value == "nan") {
        return true;
    }
    pos = this->_isNumber(value, 0);
    if (pos == static_cast<int>(value.length())) {
        try {
            std::stod(value);
            return true;
        } catch (std::out_of_range const & oor) {
            return false;
        }
    }
    if (value[pos] == '.') {
        pos = this->_isNumber(value, pos + 1);
        if (pos == static_cast<int>(value.length())) {
            try {
                std::stod(value);
                return true;
            } catch (std::out_of_range const & oor) {
                return false;
            }
        }
    }

    return false;
}

int Converter::_isNumber(std::string value, int initialPos) {
    int i = initialPos;

    if (i == 0 && value[i] == '-') {
        i++;
    }
    while (i < static_cast<int>(value.length())) {
        if (value[i] < '0' || value[i] > '9') {
            break;
        }
        i++;
    }
    return (i);
}
