#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent {

    public:
        ZombieEvent();
        ~ZombieEvent();
        void setZombieType(std::string type);
        Zombie *newZombie(std::string name) const;

    private:
        std::string _type;
};

#endif
