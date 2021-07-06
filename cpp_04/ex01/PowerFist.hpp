#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"


class PowerFist: public AWeapon {
    public:
        PowerFist (void);
        PowerFist(std::string name, int damage, int apcost);
        PowerFist (PowerFist & powerFist);
        ~PowerFist(void);
        PowerFist & operator=(PowerFist & src);
        void attack() const;
};

#endif