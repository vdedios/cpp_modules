#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T>
void getValue(T val) {
    std::cout << val << std::endl;
}

template< typename T, typename U>
void iter(T *addr, int len, U f(T)) {
    for(int i = 0; i < len; i++) {
        f(addr[i]);
    }
}

#endif
