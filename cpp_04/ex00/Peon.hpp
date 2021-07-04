#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon: public Victim {
    public:
        Peon (void);
        Peon (std::string name);
        Peon (Peon & peon);
        ~Peon(void);
        Peon & operator=(Peon & src);
        void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& o, Peon const & peon);

#endif