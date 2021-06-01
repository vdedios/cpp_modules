#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain {

    public:
        Brain(float weight, float size, int age);
        ~Brain(void);
        std::string identify(void) const;
        void getParams(void) const;

    private:
        float const _weight;
        float const _size;
        int   const _age;
};

#endif
