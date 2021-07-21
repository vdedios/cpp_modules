#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {
    public:
        AWeapon (void);
        AWeapon(std::string const & name, int damage, int apcost);
        AWeapon (AWeapon & aweapon);
        virtual ~AWeapon(void);
        AWeapon & operator=(AWeapon & src);

        std::string getName() const;
        int getapcostCost() const;
        int getDamage() const;

        virtual void attack() const = 0;
    
    protected:
        std::string _name;
        int _damage;
        int _apcost;
};

#endif