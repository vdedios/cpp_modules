#ifndef FIREDAEMON_HPP
# define FIREDAEMON_HPP

# include <iostream>
# include "Enemy.hpp"

class FireDaemon: public Enemy {
    public:
        FireDaemon (void);
        FireDaemon(std::string type, int hp);
        FireDaemon (FireDaemon & fireDaemon);
        ~FireDaemon(void);
        FireDaemon & operator=(FireDaemon & src);

        void takeDamage(int damage);
};

#endif