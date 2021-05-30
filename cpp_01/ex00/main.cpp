#include "Pony.hpp"

void	ponyOnTheHeap() {
	Pony	*heapPony = new Pony(2, 21.0, "white");

    std::cout << "age: " << heapPony->age << std::endl;
    std::cout << "weight: " << heapPony->weight << std::endl;
    std::cout << "color: " << heapPony->color << std::endl;

	delete heapPony;
}

void	ponyOnTheStack() {
	Pony	stackPony(1, 20.1, "brown");

    std::cout << "age: " << stackPony.age << std::endl;
    std::cout << "weight: " << stackPony.weight << std::endl;
    std::cout << "color: " << stackPony.color << std::endl;
}

int	main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
}