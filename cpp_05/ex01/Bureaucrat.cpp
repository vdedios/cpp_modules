#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name(""), _grade(150) {
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade) {
    this->_handleGradeException(this->_grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat): _name(bureaucrat.getName()), _grade(bureaucrat.getGrade()) {
}

Bureaucrat::~Bureaucrat(void) {
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & bureaucrat) {
    this->_grade = bureaucrat.getGrade();
    return (*this);
}

std::string Bureaucrat::getName(void) const{
    return this->_name;
}

int Bureaucrat::getGrade(void) const{
    return this->_grade;
}

void Bureaucrat::incGrade(void) {
    this->_handleGradeException(this->_grade - 1);
    this->_grade -= 1;
}

void Bureaucrat::decGrade(void) {
    this->_handleGradeException(this->_grade + 1);
    this->_grade += 1;
}

void Bureaucrat::signForm(Form & form) const {
    try {
        form.beSigned(*this);
        std::cout
            << this->_name
            << " signs "
            << form.getName()
            << std::endl;
    } catch(Form::GradeTooLowException & e) {
        std::cout
            << this->_name
            << " cannot sign "
            << form.getName()
            << " because of "
            << e
            << "."
            << std::endl;
    }
}

void Bureaucrat::_handleGradeException(int grade) {
    if (grade < MAX_GRADE) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > MIN_GRADE) {
        throw Bureaucrat::GradeTooLowException();
    }
}

// Class exceptions

const char * Bureaucrat::GradeTooHighException::what(void) const throw() {
    return ("Grade too high");
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw() {
    return ("Grade too low");
}

// Stream

std::ostream& operator<<(std::ostream& o, Bureaucrat const & bureaucrat) {
    o << bureaucrat.getName()
      << ", bureaucrat grade "
      << bureaucrat.getGrade();
    return o;
}

std::ostream& operator<<(std::ostream& o, Bureaucrat::GradeTooHighException const & e) {
    o << e.what();
    return o;
}


std::ostream& operator<<(std::ostream& o, Bureaucrat::GradeTooLowException const & e) {
    o << e.what();
    return o;
}