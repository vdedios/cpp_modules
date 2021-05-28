#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

# define FIELD_SIZE 10
# define MAX_CONTACTS 8

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void 	add();
		void	search() const;
		void	askFor(std::string question, std::string *answer) const;

	private:
		Contact	_contacts[8];
		int		_registeredContacts;
		void	_displayAvailableContacts(void) const;
		void 	_printParsedContactField(std::string field) const;
};

#endif
