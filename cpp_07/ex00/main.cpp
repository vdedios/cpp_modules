#include <iostream>
#include <iomanip>
#include "whatever.hpp"

class Test {
    public:
        Test(): _num(0) {}
        Test(int num): _num(num) {}
        bool operator>(Test const & test) const { return this->_num > test.getNum(); }
        bool operator<(Test const & test) const { return this->_num < test.getNum(); }
        Test & operator=(Test const & test) {
            this->_num = test.getNum();
            return (*this);
        }
        int getNum(void) const { return this->_num; }

    private:
        int _num;
};

std::ostream & operator<<(std::ostream &o, Test const & t) {
    o << t.getNum();
    return o;
}

int main( void ) {
    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    Test e(10);
    Test f(12);
    ::swap(e, f);
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
    return 0;
}
