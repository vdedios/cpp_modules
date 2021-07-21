#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {
    public:
        Victim (void);
        Victim (std::string name);
        Victim (Victim & victim);
        virtual ~Victim(void);
        Victim & operator=(Victim & src);
        std::string getName(void) const;
        virtual void getPolymorphed() const;
    
    protected:
        std::string _name;
};

std::ostream& operator<<(std::ostream& o, Victim const & victim);

#endif