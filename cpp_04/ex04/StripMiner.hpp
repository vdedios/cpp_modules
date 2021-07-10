#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include <iostream>
# include "IMiningLaser.hpp"

class IAsteroid;

class StripMiner: public IMiningLaser{
    public:
        StripMiner(void);
        ~StripMiner();
        StripMiner const & operator=(StripMiner const &);
        void mine(IAsteroid*);
};

#endif
