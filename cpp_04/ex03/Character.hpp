#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include <cstddef>
# include "ICharacter.hpp"
# include "AMateria.hpp"

# ifndef MAX_MATERIA
#  define MAX_MATERIA 4
# endif

class Character: public ICharacter {
    public:
        Character(void);
        Character(std::string name);
        Character(Character const &);
        ~Character(void);
        Character const & operator=(Character const &);

        std::string const & getName(void) const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

    private:
        AMateria *_materia[MAX_MATERIA];
        std::string _name;
        int _materiaCount;

        void _deleteAllMateria(void);

};

#endif