#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
    public:
        Span(unsigned int);
        Span(Span const &);
        ~Span(void);
        Span & operator=(Span const &);
        int getSize(void) const;
        std::vector<int> getVector(void) const;
        void addNumber(int);
        int shortestSpan(void);
        int longestSpan(void);

    private:
        Span(void);
        unsigned int        _size;
        std::vector<int>    _v;
};

#endif