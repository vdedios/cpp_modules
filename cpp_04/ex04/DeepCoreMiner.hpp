#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include <iostream>
# include "IMiningLaser.hpp"

class IAsteroid;

class DeepCoreMiner: public IMiningLaser{
    public:
        DeepCoreMiner(void);
        ~DeepCoreMiner();
        DeepCoreMiner const & operator=(DeepCoreMiner const &);
        void mine(IAsteroid*);
};

#endif
