#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <fstream>
# include <string>

# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm: public Form {
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm & operator=(PresidentialPardonForm const &);
        void execute(Bureaucrat const &) const;
        std::string  getTarget(void) const;
    
    private:
        std::string _target;
};

#endif
