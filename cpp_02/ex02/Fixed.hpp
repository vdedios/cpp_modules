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

        Fixed& operator=(Fixed const &member);
        bool operator>(Fixed const &el) const;
        bool operator>=(Fixed const &el) const;
        bool operator<(Fixed const &el) const;
        bool operator<=(Fixed const &el) const;
        bool operator==(Fixed const &el) const;
        bool operator!=(Fixed const &el) const;
        Fixed operator+(Fixed const &el) const;
        Fixed operator-(Fixed const & el) const;
        Fixed operator*(Fixed const & el) const;
        Fixed operator/(Fixed const & el) const;
        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int n);
        Fixed operator--(int n);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        int toInt(void) const;
        float toFloat(void) const;
        static Fixed& min(Fixed &el1, Fixed &el2);
        static Fixed const & min(Fixed const &el1, Fixed const &el2);
        static Fixed& max(Fixed &el1, Fixed &el2);
        static Fixed const & max(Fixed const &el1, Fixed const &el2);

    private:
        int _fixedPoint;
        static const int _FRACTIONALBITS = 8;
        int _leftShiftFractionalBits(int fractionalBits = _FRACTIONALBITS) const;
        float _rightShiftFractionalBits(int fractionalBits = _FRACTIONALBITS) const;
};

std::ostream& operator<<(std::ostream& o, Fixed const & fixedPoint);

#endif
