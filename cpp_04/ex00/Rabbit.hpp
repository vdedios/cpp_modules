#ifndef RABBIT_HPP
# define RABBIT_HPP

#include <iostream>
#include "Victim.hpp"

class Rabbit: public Victim {
    public:
        Rabbit (void);
        Rabbit (std::string name);
        Rabbit (Rabbit & rabbit);
        ~Rabbit(void);
        Rabbit & operator=(Rabbit & src);
        void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& o, Rabbit const & rabbit);

#endif