#include <unistd.h>
#include <sys/time.h>

#include "ZombieEvent.hpp"

std::string rand_name(void) {
    static const std::string base[] = {"paco", "pepa", "manolo", "juana", "cuca"};
    struct timeval curr;
    gettimeofday(&curr, NULL);

    srand(curr.tv_usec);
    return (base[rand() % sizeof(base)/sizeof(base[0])]);
}

void    randomChump(void) {
    ZombieEvent event;
    Zombie      *Zombie;

    event.setZombieType("dangerous");
    Zombie = event.newZombie(rand_name());
    Zombie->announce();
    delete Zombie;
}

int main(void) {
    Zombie miZombie("pepe", "good");
    miZombie.announce();
    randomChump();
    randomChump();
    randomChump();
}
