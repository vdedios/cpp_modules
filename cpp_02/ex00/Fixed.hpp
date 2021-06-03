#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

    public:
        Fixed(void);
        Fixed(int const fixedPoint);
        Fixed(Fixed const & Fixed);
        ~Fixed(void);

        Fixed& operator=(Fixed const & member);

        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        int _fixedPoint;
        static const int _FRACTIONALBITS = 8;
};

#endif
