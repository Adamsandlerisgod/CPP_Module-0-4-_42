#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP
#include <iostream>

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
		int	getGrade() const;
		void	increaseGrade(const unsigned int change);
		void	decreaseGrade(const unsigned int change);
		void	setGrade(const int grade);
		
		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw() {
						return ("Grade too high!");
				}
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw() {
						return ("Grade too !");
				}
		};
		
};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif // Bureaucrat_HPP
