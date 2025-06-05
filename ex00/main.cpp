#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat a("Alice", 1);
		std::cout << a << std::endl;
		a.incrementGrade(); // Should throw
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("Bob", 149);
		std::cout << b << std::endl;
		b.decrementGrade(); // Should throw
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat c("Charlie", 75);
		std::cout << c << std::endl;
		c.incrementGrade();
		std::cout << "After increment: " << c << std::endl;
		c.decrementGrade();
		std::cout << "After decrement: " << c << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat d("David", 0); // Should throw on creation
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught during construction: " << e.what() << std::endl;
	}
	return (0);
}
