#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

    public:
        FragTrap(void);
        FragTrap(std::string const Name);
        FragTrap(FragTrap const & FragTrap);
        ~FragTrap(void);
        void guardGate(void);
};

#endif
