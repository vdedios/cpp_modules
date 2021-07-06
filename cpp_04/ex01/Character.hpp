#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character: public Enemy {
    public:
        Character (void);
        Character(std::string const name);
        Character (Character & character);
        ~Character(void);
        Character & operator=(Character & src);

        void recoverAP(void);
        void equip(AWeapon* weapon);
        void attack(Enemy* enemy);

        std::string getName(void) const;
        int getApcost(void) const;
        AWeapon *getAWeapon(void) const;
    
    private:
        std::string _name;
        int         _apcost;
        AWeapon     *_weapon;
};

std::ostream& operator<<(std::ostream& o, Character const & character);

#endif