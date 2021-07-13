#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <ctime>

# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm: public Form {
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm & operator=(RobotomyRequestForm const &);
        void execute(Bureaucrat const &) const;
        std::string  getTarget(void) const;
    
        static Form *construct(std::string target);

    private:
        std::string _target;
};

#endif
