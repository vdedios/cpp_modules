#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

    public:
        Fixed(void);
        Fixed(int const N);
        Fixed(float const N);
        Fixed(Fixed const & Fixed);
        ~Fixed(void);

        Fixed& operator=(Fixed const & member);
        Fixed operator+(Fixed const & el) const;
        Fixed operator-(Fixed const & el) const;
        Fixed operator*(Fixed const & el) const;
        Fixed operator/(Fixed const & el) const;

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        int toInt(void) const;
        float toFloat(void) const;

    private:
        int _fixedPoint;
        static const int _FRACTIONALBITS = 8;
        int _leftShiftFractionalBits(int fractionalBits = _FRACTIONALBITS) const;
        float _rightShiftFractionalBits(int fractionalBits = _FRACTIONALBITS) const;
};

std::ostream& operator<<(std::ostream& o, Fixed const & fixedPoint);

#endif
