#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern&) {}

Intern& Intern::operator=(const Intern&) {
    return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) {
    struct FormPair {
        std::string name;
        AForm* (*creator)(const std::string&);
    };

    FormPair forms[] = {
        { "shrubbery creation", [](const std::string& t) -> AForm* { return new ShrubberyCreationForm(t); } },
        { "robotomy request", [](const std::string& t) -> AForm* { return new RobotomyRequestForm(t); } },
        { "presidential pardon", [](const std::string& t) -> AForm* { return new PresidentialPardonForm(t); } }
    };

    for (int i = 0; i < 3; ++i) {
        if (formName == forms[i].name) {
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i].creator(target);
        }
    }

    std::cerr << "Error: form \"" << formName << "\" not found" << std::endl;
    return nullptr;
}
