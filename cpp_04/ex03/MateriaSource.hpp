#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

# ifndef MAX_MATERIA
#  define MAX_MATERIA 4
# endif


class MateriaSource: public IMateriaSource {
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &);
        ~MateriaSource(void);
        MateriaSource const & operator = (MateriaSource const &);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

    private:
        AMateria * _materia[MAX_MATERIA];
        int _materiaCount;

        void _deleteAllMateria(void);
};

#endif
