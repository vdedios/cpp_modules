#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>

template<typename T>
typename T::const_iterator easyfind(T const & t, int const & n) {
    typename T::const_iterator match = std::find(t.begin(), t.end(), n);
    if (match == t.end() && *match != n) {
        throw std::out_of_range("not found");
    }
    return (match);
}

#endif
