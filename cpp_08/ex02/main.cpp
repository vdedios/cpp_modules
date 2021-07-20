#include <iostream>
#include <stack>
#include <ctime>
#include "mutantstack.hpp"

int main()
{
    {
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);

        std::cout << mstack.top() << std::endl;

        mstack.pop();

        std::cout << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        std::cout << *it << std::endl;
        std::cout << *ite << std::endl;

        ++it;
        --it;

        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }

        std::stack<int> s(mstack);
    }

    {
        std::cout << "\n--- Aditional tests ---" << std::endl;

        MutantStack<int> mstack;
        srand(time(NULL));
        for (int i = 0; i < 20; i++ ) {
            mstack.push(rand() % 20);
        }

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        std::cout << "Begin: " << *it << std::endl;
        std::cout << "End: " << *(ite - 1) << std::endl;
        for (MutantStack<int>::iterator i = it; i != ite; i++) {
            std::cout << *i << std::endl;
        }
    }
    return (0);
}