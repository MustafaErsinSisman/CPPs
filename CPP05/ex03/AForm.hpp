#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>

# include "Bureaucrat.hpp"

# define RST	"\033[0m"

# define D	"\033[1;30m"
# define R	"\033[1;31m"
# define G	"\033[1;32m"
# define Y	"\033[1;33m"
# define B	"\033[1;34m"
# define M	"\033[1;35m"
# define C	"\033[1;36m"
# define W	"\033[1;37m"

# define DB	"\033[40m"
# define RB	"\033[41m"
# define GB	"\033[42m"
# define YB	"\033[43m"
# define BB	"\033[44m"
# define MB	"\033[45m"
# define CB	"\033[46m"
# define WB	"\033[47m"

class AForm
{
	public:
		AForm();
		AForm(const std::string& name, int signGrade, int execGrade);
		AForm(const AForm& copy);
		AForm& operator=(const AForm& copy);
		virtual ~AForm();

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};


		const std::string& getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned(const Bureaucrat& b);

		void execute(Bureaucrat const & executor) const;

	protected:
		virtual void executeFunction() const = 0;

	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int execGrade;
};

std::ostream& operator<<(std::ostream& out, const AForm& f);

#endif