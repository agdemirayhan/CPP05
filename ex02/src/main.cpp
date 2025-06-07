#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try{

        Bureaucrat b("Alice", 425);
        
        ShrubberyCreationForm s("home");
        RobotomyRequestForm r("Bender");
        PresidentialPardonForm p("Ford");
        
        b.signForm(s);
        b.signForm(r);
        b.signForm(p);
        
        b.executeForm(s);
        b.executeForm(r);
        b.executeForm(p);
    }
    catch(std::exception &b)
    {
        std::cerr << "Exception: " << b.what() << std::endl;
    }
    return 0;
}
