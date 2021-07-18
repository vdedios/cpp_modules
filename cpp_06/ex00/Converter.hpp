#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <limits.h>
# include <stdlib.h>

class Converter {
    public:
        Converter(void);
        Converter(std::string value);
        Converter(Converter const &);
        ~Converter(void);
        char getCharVal(void) const;
        int getIntVal(void) const;
        float getFloatVal(void) const;
        double getDoubleVal(void) const;

    private:
        std::string _value;
        std::string _valueType;
        char        _charValue;
        int         _intValue;
        float       _floatValue;
        double      _doubleValue;

        bool        _isChar(std::string);
        bool        _isInt(std::string);
        bool        _isFloat(std::string);
        bool        _isDouble(std::string);
        void        _setValueType(void);
        int         _isNumber(std::string, int);
};

#endif
