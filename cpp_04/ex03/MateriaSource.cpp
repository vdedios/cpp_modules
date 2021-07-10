#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _materiaCount(0) {
}

MateriaSource::MateriaSource(MateriaSource const & materiaSource) {
    *this = materiaSource;
    this->_deleteAllMateria();
}

MateriaSource::~MateriaSource(void) {
}

MateriaSource const & MateriaSource::operator=(MateriaSource const & materiaSource) {
    this->_materiaCount = materiaSource._materiaCount;
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (m && this->_materiaCount < MAX_MATERIA) {
        this->_materia[this->_materiaCount] = m;
        this->_materiaCount++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    int i = 0;

    while (i < this->_materiaCount) {
        if (this->_materia[i]->getType() == type) {
            return this->_materia[i];
        }
        i++;
    }
    return NULL;
}

void MateriaSource::_deleteAllMateria(void) {
    while (this->_materiaCount > 0) {
        delete this->_materia[this->_materiaCount - 1];
        this->_materia[this->_materiaCount - 1] = NULL;
        this->_materiaCount--;
    }
}
