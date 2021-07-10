#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <string>
# include <iostream>

class StripMiner;
class DeepCoreMiner;

class IAsteroid {
    public:
        virtual ~IAsteroid() {}
        virtual std::string beMined(StripMiner *) const = 0;
        virtual std::string beMined(DeepCoreMiner *) const = 0;
        virtual std::string getName() const = 0;
};

#endif
