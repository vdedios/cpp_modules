#include <iostream>
#include <unistd.h>
#include <sys/time.h>

class Base {
    public:
        virtual ~Base(void) {}
};
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate(void) {
    struct timeval curr;
    int index;

    gettimeofday(&curr, NULL);
    srand(curr.tv_usec);
    index = rand() % 3;
    if (index == 0) {
        return (new A());
    } else if (index == 1) {
        return (new B());
    } else {
        return (new C());
    }
}

void identify(Base *p) {
    if (dynamic_cast<A *>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B *>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C *>(p)) {
        std::cout << "C" << std::endl;
    }
}

void identify(Base& p) {
    try {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    } catch (std::bad_cast) {}

    try {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
    } catch (std::bad_cast) {}

    try {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
    } catch (std::bad_cast) {}
}

int main(void) {
    Base *base;

    base = generate();
    identify(base);
    identify(*base);
    return (0);
}