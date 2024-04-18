#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP
#include <iostream>
#include "../includes/Form.hpp"

class Form;

class Bureaucrat {
	private:
		int	_grade;
		const std::string _name;
	protected:
		void	setName(const std::string& name);
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();
		std::string	getName() const;
		unsigned int	getGrade() const;
		void	increaseGrade();
		void	decreaseGrade();
		void	setGrade(const int grade);
		void	signForm(Form &form);

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

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif // Bureaucrat_HPP
