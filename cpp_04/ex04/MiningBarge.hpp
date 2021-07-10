#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include <cstddef>
# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

# ifndef MAX_LASERS
#  define MAX_LASERS 4
# endif

class MiningBarge {
    public:
        MiningBarge(void);
        ~MiningBarge(void);
        MiningBarge const & operator = (MiningBarge const &);

        void equip(IMiningLaser*);
        void mine(IAsteroid*) const;

    private:
        IMiningLaser *_lasers[MAX_LASERS];
        int _laserCount;
};

#endif
