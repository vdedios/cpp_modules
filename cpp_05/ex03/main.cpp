
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

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
    Intern someRandomIntern;
    Form* form = someRandomIntern.makeForm("robotomy request", "Bender");
    Bureaucrat *admin = new Bureaucrat("admin", 10);

    try {
        admin->signForm(*form);
        admin->executeForm(*form);

        delete form;
        form = NULL;
        form = someRandomIntern.makeForm("robotom request", "Bender");
    } catch (Form::GradeTooHighException & e) {
        std::cout << e << std::endl;
        cleanForm(&form);
        cleanBureaucrat(&admin);
    } catch (Form::GradeTooLowException & e) {
        std::cout << e << std::endl;
        cleanForm(&form);
        cleanBureaucrat(&admin);
    }  catch (Form::NotSigned & e) {
        std::cout << e << std::endl;
        cleanForm(&form);
        cleanBureaucrat(&admin);
    } catch (Intern::UnknownForm & e) {
        std::cout << e << std::endl;
        cleanForm(&form);
        cleanBureaucrat(&admin);
    }
    return 0;
}
