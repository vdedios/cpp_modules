#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

    public:
        Zombie(std::string name, std::string type);
        ~Zombie(void);
        std::string name;
        std::string type;
        void announce(void) const;
};

#endif
