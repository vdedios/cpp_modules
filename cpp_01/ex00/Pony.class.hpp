
#ifndef PONY_CLASS_HPP
# define PONY_CLASS_HPP

# include <iostream>
# include <string>

class Pony {

public:
    int const         age;
    float const       weight;
    std::string const color;

	Pony(int age, float weight, std::string color);
	~Pony( void );
};

#endif
