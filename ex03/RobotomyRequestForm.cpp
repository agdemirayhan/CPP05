#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
    : AForm("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    canExecute(executor); 
    std::srand(std::time(0));
    std::cout << "* DRILLING NOISES *\n";
    if (std::rand() % 2)
        std::cout << getTarget() << " has been robotomized successfully.\n";
    else
        std::cout << "Robotomy failed on " << getTarget() << ".\n";
}
