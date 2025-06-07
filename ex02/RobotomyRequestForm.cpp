#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm",
	72, 45), target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	// AForm::checkExecutable(executor);
	std::cout << "* drilling noises *\n";
	std::srand(std::time(0));
	if (std::rand() % 2)
		std::cout << target << " has been robotomized successfully.\n";
	else
		std::cout << "Robotomy failed on " << target << ".\n";
}
