#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <limits.h>
# include <unistd.h>
# include <sys/time.h>

class ZombieHorde {

    public:
        ZombieHorde(int N);
        ~ZombieHorde(void);
        void announce();

    private:
        Zombie const **_horde;
        int const _nZombies;
        std::string crt_rand(std::string item, int seed) const;
};

#endif
