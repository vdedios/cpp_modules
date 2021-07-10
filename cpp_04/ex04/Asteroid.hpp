#ifndef ASTEROID_HPP
# define ASTEROID_HPP

# include "IAsteroid.hpp"

class Asteroid: public IAsteroid {
    public:
        Asteroid(void);
        Asteroid (Asteroid const &);
        ~Asteroid();
        Asteroid const & operator=(Asteroid const &);

        std::string beMined(StripMiner *) const;
        std::string beMined(DeepCoreMiner *) const;
        std::string getName() const;

    private:
        std::string _name;
};

#endif
