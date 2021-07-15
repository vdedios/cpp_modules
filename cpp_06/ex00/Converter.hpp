#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>

class Converter {
    public:
        Converter(void);
        Converter(std::string value);
        Converter(Converter const &);
        ~Converter(void);
        char getCharVal(void);
        int getIntVal(void);
        float getFloatVal(void);
        double getDoubleVal(void);

    private:
        std::string _value;
};

#endif
