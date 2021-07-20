#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template<typename T>
class MutantStack: public std::stack<T> {
    public:
        MutantStack(void) {}
        MutantStack(MutantStack const & mutantstack) { *this = mutantstack; }
        ~MutantStack(void) {}
        MutantStack & operator=(MutantStack const & mutantstack) { *this->c = mutantstack.c; return *this; }

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(void) { return std::stack<T>::c.begin(); }
        iterator end(void) { return std::stack<T>::c.end(); }
};

#endif
