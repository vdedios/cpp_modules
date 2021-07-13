#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

# include "Bureaucrat.hpp"

# ifndef MAX_GRADE
#  define MAX_GRADE 1
# endif

# ifndef MIN_GRADE
#  define MIN_GRADE 150
# endif

class Bureaucrat;

class Form {
    public:
        Form(void);
        Form(std::string name, int requiredGradeToSign, int requiredGradeToExec);
        Form(Form const &);
        virtual ~Form(void);
        Form & operator=(Form const &);
        std::string getName(void) const;
        int getRequiredGradeToSign(void) const;
        int getRequiredGradeToExec(void) const;
        bool getIsSigned(void) const;
        void beSigned(Bureaucrat const &);
        virtual void execute(Bureaucrat const &) const = 0;

        class GradeTooHighException: public std::exception {
            public:
                const char * what() const throw();
        };

        class GradeTooLowException: public std::exception {
            public:
                const char * what() const throw();
        };

        class NotSigned: public std::exception {
            public:
                const char * what() const throw();
        };

    private:
        std::string const   _name;
        int         const   _requiredGradeToSign;
        int         const   _requiredGradeToExec;
        bool                _isSigned;

        void _handleGradeException(int grade);
};

std::ostream& operator<<(std::ostream& o, Form const & form);
std::ostream& operator<<(std::ostream& o, Form::GradeTooHighException const & e);
std::ostream& operator<<(std::ostream& o, Form::GradeTooLowException const & e);
std::ostream& operator<<(std::ostream& o, Form::NotSigned const & e);


#endif
