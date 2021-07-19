#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class Array {
	public:
		Array<T>(void): _arr(new T[0]), _len(0) {}
		Array<T>(unsigned int n): _arr(new T[n]), _len(n) {}
		Array<T>(Array<T> const & array) {
            this->_arr = new T[array.size()];
            this->_len = array.size();
            for (int i = 0; i < array.size(); i++) {
                this->_arr[i] = array[i];
            }
        }
		~Array<T>(void){}

        class OutOfBoundsException: public std::exception {
            public:
                const char * what() const throw() {
                    return ("out of bounds");
                }
        };

        T & operator[](int const & index) {
            if (index > this->_len) {
                throw OutOfBoundsException();
            }
            return (this->_arr[index]);
        }

        int size(void) const { return this->_len; }

	private:
		T *     _arr;
        int     _len;
};

#endif