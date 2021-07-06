#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion: public Enemy {
    public:
        RadScorpion (void);
        RadScorpion(std::string type, int hp);
        RadScorpion (RadScorpion & radScorpion);
        ~RadScorpion(void);
        RadScorpion & operator=(RadScorpion & src);
};

#endif
