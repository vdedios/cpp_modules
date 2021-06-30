#include <iostream>

#include "FragTrap.hpp"

int main() {
    FragTrap fragTrap("hero");

    fragTrap.takeDamage(3);
    fragTrap.attack("dynamic");
    fragTrap.highFiveGuys();

    return (0);
}