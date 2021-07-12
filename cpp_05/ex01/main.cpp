
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

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
    Form *smartContract = NULL;
    Bureaucrat *unknown = NULL;
    Bureaucrat *admin = NULL;

    // Exceed form grade
    try {
        smartContract = new Form("smartContract", 0, 140);

        std::cout << *smartContract << std::endl;
    } catch (Form::GradeTooHighException & e) {
        std::cout << e << std::endl;
    } catch (Form::GradeTooLowException & e) {
        std::cout << e << std::endl;
        cleanForm(&smartContract);
    }

    // Not enough grade
    try {
        smartContract = new Form("smartContract", 10, 140);
        unknown = new Bureaucrat("unknown", 150);

        unknown->signForm(*smartContract);
    } catch (Form::GradeTooLowException & e) {
        std::cout << e << std::endl;
        cleanForm(&smartContract);
        cleanBureaucrat(&unknown);
    }

    // Successful sign
    try {
        smartContract = new Form("smartContract", 10, 140);
        admin = new Bureaucrat("admin", 1);

        admin->signForm(*smartContract);
    } catch (Form::GradeTooLowException & e) {
        std::cout << e << std::endl;
        cleanForm(&smartContract);
        cleanBureaucrat(&admin);
    }
    return 0;
}