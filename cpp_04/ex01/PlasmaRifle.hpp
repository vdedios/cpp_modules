#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"


class PlasmaRifle: public AWeapon {
    public:
        PlasmaRifle (void);
        PlasmaRifle(std::string name, int damage, int apcost);
        PlasmaRifle (PlasmaRifle & plasmaRifle);
        ~PlasmaRifle(void);
        PlasmaRifle & operator=(PlasmaRifle & src);
        void attack() const;
};

#endif