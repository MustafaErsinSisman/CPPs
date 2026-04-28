#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
		~RobotomyRequestForm();
		
		void makeRobotomy() const;
	private:
		const std::string target;
};

#endif