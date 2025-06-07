#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <stdexcept>
# include <string>

class AForm
{
  private:
	const std::string name;
	bool isSigned;
	const int signGrade;
	const int execGrade;

  protected:
	const std::string target;

  public:
	AForm(const std::string &name, int signGrade, int execGrade,
		const std::string &target);
	virtual ~AForm();

	const std::string &getName() const;
	bool getIsSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;
	const std::string &getTarget() const;

	void beSigned(Bureaucrat const &b);
	void canExecute(Bureaucrat const &executor) const;

	virtual void execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
	class FormNotSignedException : public std::exception
	{
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const AForm &f);

#endif