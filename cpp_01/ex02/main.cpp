#include <unistd.h>
#include <sys/time.h>

#include "ZombieEvent.hpp"

std::string crt_rand(std::string item) {
    static const std::string base_names[] = {"paco", "pepa", "manolo", "juana", "cuca"};
    static const std::string base_types[] = {"good", "bad", "fighter", "fool", "dangerous"};
    struct timeval curr;
    gettimeofday(&curr, NULL);

    srand(curr.tv_usec);
    if (item == "name") {
        return (base_names[rand() % sizeof(base_names)/sizeof(base_names[0])]);
    }
    return (base_types[rand() % sizeof(base_types)/sizeof(base_types[0])]);
}

void    randomChump(void) {
    ZombieEvent event;
    Zombie      *Zombie;

    event.setZombieType(crt_rand("type"));
    Zombie = event.newZombie(crt_rand("name"));
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
