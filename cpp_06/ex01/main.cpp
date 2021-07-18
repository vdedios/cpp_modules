#include <iostream>

typedef struct  s_data {
    int         a;
    int         b;
    char        c;
    bool        d;
}               Data;

uintptr_t serialize(Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}

int main(void) {
    Data data;

    data.a = 1;
    data.b = 2;
    data.c = 'a';
    data.d = true;

    uintptr_t iPtr = serialize(&data);
    Data *dPtr = deserialize(iPtr);

    std::cout
        << "a"
        << data.a << std::endl
        << "b"
        << data.b << std::endl
        << "c"
        << data.c << std::endl
        << "d"
        << data.d << std::endl;

    std::cout
        << "a"
        << dPtr->a << std::endl
        << "b"
        << dPtr->b << std::endl
        << "c"
        << dPtr->c << std::endl
        << "d"
        << dPtr->d << std::endl;

    return (0);
}