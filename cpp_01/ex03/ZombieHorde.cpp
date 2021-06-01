#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _nZombies(N) {
    if (N < 0 && N > INT_MAX) {
        std::cout << "Could not allocate" << N << " zombies." << std::endl;
        return ;
    }
    this->_horde = new Zombie*[N];
    for (int i = 0; i < N; i++) {
        this->_horde[i] = new Zombie(this->crt_rand("name", i), this->crt_rand("type", i));
    }
    return ;
}

ZombieHorde::~ZombieHorde(void) {
    return ;
}

void ZombieHorde::announce(void) {
    for (int i = 0; i < this->_nZombies; i++) {
        this->_horde[i]->announce();
    }
}

std::string ZombieHorde::crt_rand(std::string item, int seed) const{
    static const std::string base_names[] = {"paco", "pepa", "manolo", "juana", "cuca"};
    static const std::string base_types[] = {"good", "bad", "fighter", "fool", "dangerous"};
    struct timeval curr;
    gettimeofday(&curr, NULL);

    srand((curr.tv_usec * seed) + seed);
    if (item == "name") {
        return (base_names[rand() % sizeof(base_names)/sizeof(base_names[0])]);
    }
    return (base_types[rand() % sizeof(base_types)/sizeof(base_types[0])]);
}
