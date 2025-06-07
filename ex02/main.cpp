#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat bob("Bob", 1);
	ShrubberyCreationForm shrub("garden");
	RobotomyRequestForm robo("Bender");
	PresidentialPardonForm pardon("Ford");
	bob.signForm(shrub);
	bob.signForm(robo);
	bob.signForm(pardon);
	bob.executeForm(shrub);
	bob.executeForm(robo);
	bob.executeForm(pardon);
	return (0);
}
