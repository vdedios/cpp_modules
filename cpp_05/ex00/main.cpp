
#include <iostream>
#include "Bureaucrat.hpp"

int main( void ) {
    try {
        Bureaucrat *bureaucrat = new Bureaucrat("paco", 1);

        std::cout << *bureaucrat << std::endl;

        std::cout << "incrementing grade..." << std::endl;
        bureaucrat->incGrade();
        std::cout << *bureaucrat << std::endl;
    } catch (Bureaucrat::GradeTooHighException & e) {
        std::cout << e << std::endl;
    } catch (Bureaucrat::GradeTooLowException & e) {
        std::cout << e << std::endl;
    }

    try {
        Bureaucrat *bureaucrat = new Bureaucrat("manuel", 150);

        std::cout << *bureaucrat << std::endl;

        std::cout << "decrementing grade..." << std::endl;
        bureaucrat->decGrade();
        std::cout << *bureaucrat << std::endl;
    } catch (Bureaucrat::GradeTooHighException & e) {
        std::cout << e << std::endl;
    } catch (Bureaucrat::GradeTooLowException & e) {
        std::cout << e << std::endl;
    }


    return 0;
}