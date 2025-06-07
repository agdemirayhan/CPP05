#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
  private:
	std::string target;

  public:
	RobotomyRequestForm(std::string const &target);
	virtual ~RobotomyRequestForm();
	void execute(Bureaucrat const &executor) const;
};

#endif
