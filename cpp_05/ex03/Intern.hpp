#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

# ifndef KNOWN_FORMS
#  define KNOWN_FORMS 3
# endif

class Intern {
    public:
        Intern(void);
        Intern(Intern const &);
        ~Intern(void);
        Intern & operator=(Intern const &);
        Form *makeForm(std::string formName, std::string target);
        class UnknownForm: public std::exception {
            public:
                const char * what() const throw();
        };

        typedef struct  s_form {
            std::string formName;
            Form       *(*construct)(std::string);
        }               t_form;

    private:
        static t_form _knownForms[KNOWN_FORMS];
};

std::ostream& operator<<(std::ostream& o, Intern::UnknownForm const & e);

#endif