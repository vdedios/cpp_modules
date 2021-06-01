#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

    public:
        Zombie(std::string name, std::string type);
        ~Zombie(void);
        void announce(void) const;

    private:
        std::string const _name;
        std::string const _type;
};

#endif
