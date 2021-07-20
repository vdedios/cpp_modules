#include "span.hpp"

Span::Span(unsigned int N): _size(N) {
}

Span::Span(Span const & span) {
    *this = span;
}

Span::~Span(void) {
}

Span & Span::operator=(Span const & span) {
    this->_v = span.getVector();
    this->_size = span.getSize();
    return *this;
}

int Span::getSize(void) const {
    return this->_size;
}

std::vector<int> Span::getVector(void) const {
    return this->_v;
}

void Span::addNumber(int n) {
    if (this->_v.size() < this->_size) {
        this->_v.push_back(n);
    } else {
        throw std::out_of_range("out of range");
    }
}

int Span::shortestSpan(void) {
    if (this->_v.size() <= 1) {
        throw std::length_error("not enough numbers");
    }
    std::vector<int> v_aux(this->_v);
    std::sort(v_aux.begin(), v_aux.end());
    return (v_aux[1] - v_aux[0]);
}

int Span::longestSpan(void) {
    if (this->_v.size() <= 1) {
        throw std::length_error("not enough numbers");
    }
    std::vector<int> v_aux(this->_v);
    std::sort(v_aux.begin(), v_aux.end());
    return (v_aux[v_aux.size() - 1] - v_aux[0]);
}
