#ifndef SHRUBBERRYCREATIONFORM_HPP
# define SHRUBBERRYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include <string>

# include "Bureaucrat.hpp"
# include "Form.hpp"

class ShrubberyCreationForm: public Form {
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const &);
        void execute(Bureaucrat const &) const;
        std::string  getTarget(void) const;

        static Form *construct(std::string target);
    
    private:
        std::string _target;
};

#endif
