#include <iostream>

#include "ScavTrap.hpp"

int main() {
    ScavTrap scavTrap("hero");

    scavTrap.takeDamage(3);
    scavTrap.attack("dynamic");
    scavTrap.guardGate();

    return (0);
}