#include <iostream>

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamondTrap("hero");

    std::cout << std::endl << "-- POINTS --" << std::endl;
    diamondTrap.getAttackDamage();
    diamondTrap.getEnergyPoints();
    diamondTrap.getHitPoints();

    std::cout << std::endl << "-- ATTACKS --" << std::endl;
    diamondTrap.takeDamage(3);
    diamondTrap.attack("dynamic");

    std::cout << std::endl  << "-- SPECIAL FUNCTIONS --" << std::endl;
    diamondTrap.highFiveGuys();
    diamondTrap.guardGate();
    diamondTrap.whoAmI();

    return (0);
}
