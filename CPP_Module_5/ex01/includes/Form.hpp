#ifndef Form_HPP
# define Form_HPP
#include <iostream>
#include "../includes/Bureaucrat.hpp"
 
class Bureaucrat;

class Form {
	private:
		const std::string	_formName;
		bool	_signed;
		const unsigned int	_gradeToSign;
		const unsigned int _gradeToExec;

	protected:
		void	setName(const std::string& name);
		
	public:
		Form();
		Form(const std::string formName, unsigned int gradeSign, unsigned int gradeExec);
    	Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();
		std::string	getName() const;
		unsigned int	getGradetoSign() const;
		unsigned int	getGradetoExec() const;
		bool	getSignedstatus() const;
		void	setGradetoSign(const unsigned int grade);
		void	setGradetoExec(const unsigned int grade);
		void	setSignedStatus(const bool signed_status);

		void	beSigned(const Bureaucrat &bureacrat);

		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw() {
						return ("Grade too high!");
				}
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw() {
						return ("Grade too Low!");
				}
		};
};

std::ostream	&operator<<( std::ostream &o, Form const &other );

#endif // Form_HPP
