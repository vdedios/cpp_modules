#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T, typename U>
void iter(T *addr, int len, U f(T const &)) {
    for(int i = 0; i < len; i++) {
        f(addr[i]);
    }
}

#endif
