#include <iostream>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &) {}

Intern &Intern::operator=(const Intern &)
{
    return *this;
}

Intern::~Intern() {}

AForm *createShrubbery(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}

AForm *createRobotomy(const std::string &target)
{
    return new RobotomyRequestForm(target);
}

AForm *createPresidential(const std::string &target)
{
    return new PresidentialPardonForm(target);
}

struct FormPair
{
    const char *name;
    AForm *(*creator)(const std::string &);
};

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
    FormPair forms[3] = {
        {"shrubbery creation", createShrubbery},
        {"robotomy request", createRobotomy},
        {"presidential pardon", createPresidential}};

    for (int i = 0; i < 3; ++i)
    {
        if (formName == forms[i].name)
        {
            std::cout << "👉" << "Intern creates " << formName << std::endl;
            return forms[i].creator(target);
        }
    }

    std::cerr << "Error: form \"" << formName << "\" not found" << std::endl;
    return NULL;
}
