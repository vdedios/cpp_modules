#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
    : Form("shrubbery", 145, 137)
    , _target("") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("shurbbery", 145, 137)
    , _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & shrubberyCreationForm) {
    *this = shrubberyCreationForm;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & shrubberyCreationForm) {
    this->_target = shrubberyCreationForm.getTarget();
    return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const {
    return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & bureaucrat) const {
    std::ofstream targetFile(this->_target + "_shruberry");
    std::string const tree = 
    "     0     \n"
    "    000    \n"
    "   00000   \n"
    "  0000000  \n"
    " 000000000 \n"
    "00000000000\n"
    "    ||     \n";
    
    if (this->getIsSigned()) {
        if (bureaucrat.getGrade() > this->getRequiredGradeToExec()) {
            throw Form::GradeTooLowException();
        } else {
            targetFile << tree;
        }
    } else {
        throw Form::NotSigned();
    }
}

Form *ShrubberyCreationForm::construct(std::string target) {
    return new ShrubberyCreationForm(target);
}