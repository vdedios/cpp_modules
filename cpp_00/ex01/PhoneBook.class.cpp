#include <iostream>
#include <iomanip>
#include <string>

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
    this->_registeredContacts = 0;
    return ;
}

PhoneBook::~PhoneBook(void) {
    return ;
}

void PhoneBook::add(void) {
    int i = this->_registeredContacts;

    if (i >= MAX_CONTACTS) {
        std::cout << "PhoneBook is full (max contacts is " << MAX_CONTACTS << ")." << std::endl;
    } else {
        this->askFor("First Name: ", &this->_contacts[i].firstName);
        this->askFor("Last Name: ", &this->_contacts[i].lastName);
        this->askFor("Nickname: ", &this->_contacts[i].nickname);
        this->askFor("Login: ", &this->_contacts[i].login);
        this->askFor("Email: ", &this->_contacts[i].email);
        this->askFor("Phone number: ", &this->_contacts[i].phoneNumber);
        this->askFor("Birthday date: ", &this->_contacts[i].birthdayDate);
        this->askFor("Favorite meal: ", &this->_contacts[i].favoriteMeal);
        this->askFor("Underwear: ", &this->_contacts[i].underwear);
        this->askFor("Color: ", &this->_contacts[i].color);
        this->askFor("Darkest secret: ", &this->_contacts[i].darkestSecret);
        this->_registeredContacts++;
    }
}

void PhoneBook::search(void) const{
    std::string             answer;
    std::string::size_type  sz = 0;
    int                     index;

    this->_displayAvailableContacts();
    this->askFor("Select desired contact index: ", &answer);
    try {
        index = std::stoi(answer, &sz);
    } catch (...) {
        std::cout << "Wrong index." << std::endl;
        return ;
    }
    if (index >= 0 && index < this->_registeredContacts && !answer[sz]) {
        this->_contacts[index].printInfo();
    } else {
        std::cout << "Wrong index." << std::endl;
    }
}

void PhoneBook::askFor(std::string question, std::string *answer) const{
    std::cout << question;
    getline(std::cin, *answer);
}

void PhoneBook::_printParsedContactField(std::string field) const{
    if (field.length() <= FIELD_SIZE) {
        std::cout << std::setw(FIELD_SIZE) << field;
    } else {
        std::cout << field.substr(0, 9);
        std::cout << ".";
    }
}

void PhoneBook::_displayAvailableContacts(void) const{
    int i = 0;

    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    while (i < this->_registeredContacts) {
        std::cout << "|";
        this->_printParsedContactField(std::to_string(i));
        std::cout << "|";
        this->_printParsedContactField(this->_contacts[i].firstName);
        std::cout << "|";
        this->_printParsedContactField(this->_contacts[i].lastName);
        std::cout << "|";
        this->_printParsedContactField(this->_contacts[i].nickname);
        std::cout << "|" << std::endl;
        i++;
    }
}
