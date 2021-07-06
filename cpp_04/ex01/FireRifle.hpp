#ifndef FIRERIFLE_HPP
# define FIRERIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"


class FireRifle: public AWeapon {
    public:
        FireRifle (void);
        FireRifle(std::string name, int damage, int apcost);
        FireRifle (FireRifle & fireRifle);
        ~FireRifle(void);
        FireRifle & operator=(FireRifle & src);
        void attack() const;
};

#endif