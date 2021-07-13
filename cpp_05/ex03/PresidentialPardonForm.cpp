#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
    : Form("presidential", 25, 5)
    , _target("") {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("presidential", 25, 5)
    , _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & presidentialPardonForm) {
    *this = presidentialPardonForm;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & presidentialPardonForm) {
    this->_target = presidentialPardonForm.getTarget();
    return *this;
}

std::string PresidentialPardonForm::getTarget(void) const {
    return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & bureaucrat) const {
    if (this->getIsSigned()) {
        if (bureaucrat.getGrade() > this->getRequiredGradeToExec()) {
            throw Form::GradeTooLowException();
        } else {
            std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
        }
    } else {
        throw Form::NotSigned();
    }
}

Form *PresidentialPardonForm::construct(std::string target) {
    return new PresidentialPardonForm(target);
}