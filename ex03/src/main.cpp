#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"  // Required for delete to work properly
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Intern someRandomIntern;
        AForm* form;

        form = someRandomIntern.makeForm("robotomy request", "Bender");
        if (form) {
            Bureaucrat b("Alice", 1);
            b.signForm(*form);
            b.executeForm(*form);
            delete form;
        }

        form = someRandomIntern.makeForm("shrubbery creation", "Garden");
        if (form) {
            Bureaucrat b("Bob", 149);
            b.signForm(*form);
            b.executeForm(*form);
            delete form;
        }

        form = someRandomIntern.makeForm("presidential pardon", "Ford Prefect");
        if (form) {
            Bureaucrat b("Charlie", 1);
            b.signForm(*form);
            b.executeForm(*form);
            delete form;
        }

        form = someRandomIntern.makeForm("nonexistent form", "Nobody");
        if (form)
            delete form;

    } catch (const std::exception& e) {
        std::cerr << "Unhandled exception: " << e.what() << std::endl;
    }
    return 0;
}
