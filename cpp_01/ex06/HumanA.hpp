#ifndef HUMANA_CPP
# define HUMANA_CPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA {
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
        void attack() const;
        void setWeapon(Weapon weapon);

    private:
        const std::string _name;
        Weapon& _weapon;
};

#endif
