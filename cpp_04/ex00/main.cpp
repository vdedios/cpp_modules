#include <iostream>
#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Rabbit.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Rabbit bugs("Bugs Bunny");
    Victim *genericVictim;

    std::cout << robert << jim << joe << bugs;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(bugs);

    genericVictim = &joe;
    robert.polymorph(*genericVictim);

    genericVictim = &bugs;
    robert.polymorph(*genericVictim);
    return 0;
}