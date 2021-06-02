#ifndef HUMANB_CPP
# define HUMANB_CPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void attack() const;
        void setWeapon(Weapon& weapon);

    private:
        const std::string _name;
        Weapon* _weapon;
};

#endif
