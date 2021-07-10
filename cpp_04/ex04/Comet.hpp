#ifndef COMET_HPP
# define COMET_HPP

# include "IAsteroid.hpp"

class Comet: public IAsteroid {
    public:
        Comet(void);
        Comet (Comet const &);
        ~Comet();
        Comet const & operator=(Comet const &);

        std::string beMined(StripMiner *) const;
        std::string beMined(DeepCoreMiner *) const;
        std::string getName() const;

    private:
        std::string _name;
};

#endif
