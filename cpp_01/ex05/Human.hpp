#ifndef HUMAN_CPP
# define HUMAN_CPP

# include "Brain.hpp"
# include <iostream>
# include <string>

class Human {
    public:
        Human();
        ~Human(void);
        std::string identify(void) const;
        const Brain& getBrain(void) const;

    private:
        Brain const _brain;
};

#endif
