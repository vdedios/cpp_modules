#include <string>
#include <iomanip>
#include "iter.hpp"

class Test {
    public:
        Test(std::string name): _name(name) {}
        std::string getName(void) const { return this->_name; }

    private:
        std::string _name;
};

std::ostream & operator<<(std::ostream &o, Test const & t) {
    o << t.getName();
    return o;
}

template< typename T>
void getValue(T const & val) {
    std::cout << val << std::endl;
}

int main(void) {
    std::string arr[] = {"test1", "test2", "test3", "test4"};
    iter<std::string, void>(arr, 4, getValue<std::string>);

    int arrInt[] = {1, 2, 3, 4, 5};
    iter<int, void>(arrInt, 5, getValue<int>);

    Test arrClass[] = {Test("paco"), Test("laura"), Test("pepe"), Test("carmen")};
    iter<Test, void>(arrClass, 4, getValue<Test>);
    return (0);
}