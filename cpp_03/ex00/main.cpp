#include <iostream>

#include "ClapTrap.hpp"

int main() {
    ClapTrap *dynamicSoldier = new ClapTrap("dynamic");
    ClapTrap staticSoldier("static");

    dynamicSoldier->attack("static");
    staticSoldier.takeDamage(3);
    staticSoldier.attack("dynamic");
    dynamicSoldier->takeDamage(3);
    dynamicSoldier->beRepaired(4);

    delete dynamicSoldier;
    return (0);
}