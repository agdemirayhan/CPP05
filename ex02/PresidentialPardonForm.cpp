#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm",
	25, 5), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

// void PresidentialPardonForm::execute(Bureaucrat const &executor) const
// {
// 	AForm::checkExecutable(executor);
// 	std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
// }
