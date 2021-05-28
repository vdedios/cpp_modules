#include <iostream>

#include "Contact.class.hpp"

Contact::Contact(void) {
    return ;
}

Contact::~Contact(void) {
    return ;
}

void Contact::printInfo(void) const{
	std::cout << std::endl;
	std::cout << "First Name: " << this->firstName << std::endl;
	std::cout << "Last Name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal address: " << this->postalAddress << std::endl;
	std::cout << "Email: " << this->email << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Birthday date: " << this->birthdayDate << std::endl;
	std::cout << "Favorite meal: " << this->favoriteMeal << std::endl;
	std::cout << "Underwear: " << this->underwear << std::endl;
	std::cout << "Color: " << this->color << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
	std::cout << std::endl;
}
