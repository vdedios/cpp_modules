#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

    public:
        FragTrap(void);
        FragTrap(std::string const Name);
        FragTrap(FragTrap const & FragTrap);
        ~FragTrap(void);
        FragTrap & operator=(FragTrap const & ref);
        void highFiveGuys(void);
};

#endif
