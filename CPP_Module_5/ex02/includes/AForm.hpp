#ifndef AForm_HPP
# define AForm_HPP
#include <iostream>
#include "../includes/Bureaucrat.hpp"
 
class Bureaucrat;

class AForm {
	private:
		const std::string	_formName;
		bool	_signed;
		const unsigned int	_gradeToSign;
		const unsigned int _gradeToExec;
		std::string		_target;

	protected:
		virtual void	setName(const std::string& name);
		
	public:
		AForm();
		AForm(const std::string formName, unsigned int gradeSign, unsigned int gradeExec);
    	AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual	~AForm();
		virtual	std::string	getName() const;
		unsigned int	getGradetoSign() const;
		unsigned int	getGradetoExec() const;
		virtual bool	getSignedstatus() const;
		virtual std::string	getTarget() const;
		virtual void	setTarget(const std::string& target) const;
		virtual void	setGradetoSign(const unsigned int grade);
		virtual void	setGradetoExec(const unsigned int grade);
		virtual void	setSignedStatus(const bool signed_status);

		virtual void	beSigned(const Bureaucrat &bureaucrat);

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

		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream	&operator<<( std::ostream &o, AForm const &other );

#endif // AForm_HPP
