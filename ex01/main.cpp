#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat bob("Bob", 10);
		Form formA("FormA", 45, 30);
		std::cout << bob << std::endl;
		std::cout << formA << std::endl;
		bob.signForm(formA);
		std::cout << formA << std::endl;
		Bureaucrat alice("Alice", 60);
		alice.signForm(formA);
		std::cout << formA << std::endl;
		
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
