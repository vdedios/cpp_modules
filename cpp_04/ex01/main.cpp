#include <iostream>

#include "Enemy.hpp"
#include "Character.hpp"
#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "FireDaemon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "FireRifle.hpp"

int main()
{
    Character* me = new Character("me");

    std::cout << *me;

    Enemy* a = new FireDaemon();
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* fr = new FireRifle();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    me->equip(fr);
    std::cout << *me;
    me->attack(a);
    std::cout << *me;
    me->attack(a);
    std::cout << *me;
    me->attack(a);
    std::cout << *me;

    return 0;
}