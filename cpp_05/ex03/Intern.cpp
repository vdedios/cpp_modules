#include "Intern.hpp"

Intern::Intern(void) {
}

Intern::Intern(Intern const & intern) {
    *this = intern;
}

Intern::~Intern(void) {
}

Intern & Intern::operator=(Intern const & intern) {
    (void)intern;
    return *this;
}

Form * Intern::makeForm(std::string formName, std::string target) {
    for (int i = 0; i < KNOWN_FORMS; i++) {
        if (this->_knownForms[i].formName == formName ) {
            std::cout << "Intern creates " << formName << "." << std::endl;
            return this->_knownForms[i].construct(target);
        }
    }
    throw Intern::UnknownForm();
    return NULL;
}

const char * Intern::UnknownForm::what(void) const throw() {
    return ("unknown form");
}

Intern::t_form Intern::_knownForms[KNOWN_FORMS] = {
    { "shrubbery creation", ShrubberyCreationForm::construct },
    { "robotomy request", RobotomyRequestForm::construct },
    { "presidential pardon", PresidentialPardonForm::construct },
};

std::ostream& operator<<(std::ostream& o, Intern::UnknownForm const & e) {
    o << e.what();
    return o;
}