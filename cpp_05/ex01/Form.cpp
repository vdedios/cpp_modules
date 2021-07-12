#include "Form.hpp"

Form::Form(void)
    : _name(""), _requiredGradeToSign(0), _requiredGradeToExec(0), _isSigned(false) {
}

Form::Form(std::string name, int requiredGradeToSign, int requiredGradeToExec)
    : _name(name)
    , _requiredGradeToSign(requiredGradeToSign)
    , _requiredGradeToExec(requiredGradeToExec)
    , _isSigned(false) {
    this->_handleGradeException(this->_requiredGradeToExec);
    this->_handleGradeException(this->_requiredGradeToSign);
}

Form::Form(Form const & form)
    : _name(form.getName())
    , _requiredGradeToSign(form.getRequiredGradeToSign())
    , _requiredGradeToExec(form.getRequiredGradeToExec()) {
    *this = form;
}

Form::~Form(void) {
}

Form & Form::operator=(Form const & form) {
    this->_isSigned = form.getIsSigned();
    return *this;
}

std::string Form::getName(void) const {
    return this->_name;
}

int Form::getRequiredGradeToSign(void) const {
    return this->_requiredGradeToSign;
}

int Form::getRequiredGradeToExec(void) const {
    return this->_requiredGradeToExec;
}

bool Form::getIsSigned(void) const {
    return this->_isSigned;
}

void Form::beSigned(Bureaucrat const & bureaucrat) {
    if (bureaucrat.getGrade() > this->_requiredGradeToSign
        || bureaucrat.getGrade() > this->_requiredGradeToExec) {
            throw Form::GradeTooLowException();
        }
    this->_isSigned = true;
}

void Form::_handleGradeException(int grade) {
    if (grade < MAX_GRADE) {
        throw Form::GradeTooHighException();
    } else if (grade > MIN_GRADE) {
        throw Form::GradeTooLowException();
    }
}

// Class exceptions

const char * Form::GradeTooHighException::what(void) const throw() {
    return ("grade too high");
}

const char * Form::GradeTooLowException::what(void) const throw() {
    return ("grade too low");
}

// Stream

std::ostream& operator<<(std::ostream& o, Form const & form) {
    o << form.getName()
      << " requires grade to sign <"
      << form.getRequiredGradeToSign()
      << "> and requires grade to exec <"
      << form.getRequiredGradeToExec()
      << std::string(">. It is currently ") + (form.getIsSigned() ? "signed." : "unsigned.");
    return o;
}

std::ostream& operator<<(std::ostream& o, Form::GradeTooHighException const & e) {
    o << e.what();
    return o;
}

std::ostream& operator<<(std::ostream& o, Form::GradeTooLowException const & e) {
    o << e.what();
    return o;
}
