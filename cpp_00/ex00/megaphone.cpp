#include <iostream>
#include <cstring>

static void upper(char **argv) {
    int i = -1;

    while ((*argv)[++i]) {
        std::cout << (char)toupper((*argv)[i]);
        if (!(*argv)[i + 1] && *(argv + 1)) {
            std::cout << " ";
        }
    }
}

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } else {
        argv++;
        while (*argv) {
            upper(argv);
            argv++;
        }
        std::cout << std::endl;
    }
    return (0);
}
