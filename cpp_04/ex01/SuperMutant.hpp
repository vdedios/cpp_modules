#ifndef SUPERMUTANT_CPP
# define SUPERMUTANT_CPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy {
    public:
        SuperMutant (void);
        SuperMutant(std::string type, int hp);
        SuperMutant (SuperMutant & superMutant);
        ~SuperMutant(void);
        SuperMutant & operator=(SuperMutant & src);

        void takeDamage(int damage);
};

#endif