#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
    : Form("robotomy", 72, 45)
    , _target("") {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("robotomy", 72, 45)
    , _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & robotomyRequestForm) {
    *this = robotomyRequestForm;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & robotomyRequestForm) {
    this->_target = robotomyRequestForm.getTarget();
    return *this;
}

std::string RobotomyRequestForm::getTarget(void) const {
    return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & bureaucrat) const {
    if (this->getIsSigned()) {
        if (bureaucrat.getGrade() > this->getRequiredGradeToExec()) {
            throw Form::GradeTooLowException();
        } else {
            std::cout << "TRRRRTRRRRR" << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
        }
    } else {
        throw Form::NotSigned();
    }
}
