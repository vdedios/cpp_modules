
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void cleanForm(Form **form) {
    if (*form) {
        delete *form;
        *form = NULL;
    }
}

void cleanBureaucrat(Bureaucrat **bureaucrat) {
    if (*bureaucrat) {
        delete *bureaucrat;
        *bureaucrat = NULL;
    }
}

int main( void ) {
    Form *shrubbery = new ShrubberyCreationForm("peon");
    Form *robotomy = new RobotomyRequestForm("vice-president");
    Form *presidential = new PresidentialPardonForm("president");
    Bureaucrat *admin = new Bureaucrat("admin", 10);

    try {
        admin->signForm(*shrubbery);
        admin->signForm(*robotomy);
        admin->signForm(*presidential);
        admin->executeForm(*shrubbery);
        admin->executeForm(*robotomy);
        admin->executeForm(*presidential);
    } catch (Form::GradeTooLowException & e) {
        std::cout << e << std::endl;
        cleanForm(&shrubbery);
        cleanForm(&robotomy);
        cleanForm(&presidential);
        cleanBureaucrat(&admin);
    }
    return 0;
}
