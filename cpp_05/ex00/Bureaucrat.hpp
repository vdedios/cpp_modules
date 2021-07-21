#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

# ifndef MAX_GRADE
#  define MAX_GRADE 1
# endif

# ifndef MIN_GRADE
#  define MIN_GRADE 150
# endif

class Bureaucrat {
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &);
        ~Bureaucrat(void);
        std::string getName(void) const;
        int getGrade(void)  const;
        void incGrade(void);
        void decGrade(void);

        class GradeTooHighException: public std::exception {
            public:
                const char * what() const throw();
        };

        class GradeTooLowException: public std::exception {
            public:
                const char * what() const throw();
        };

    private:
        std::string const   _name;
        int                 _grade;

        void _handleGradeException(int grade);
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const & bureaucrat);
std::ostream& operator<<(std::ostream& o, Bureaucrat::GradeTooHighException const & e);
std::ostream& operator<<(std::ostream& o, Bureaucrat::GradeTooLowException const & e);

#endif
