// AForm.cpp
#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string &name, int signGrade, int execGrade,
	const std::string &target) : name(name), isSigned(false),
	signGrade(signGrade), execGrade(execGrade), target(target)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

AForm::~AForm()
{
}

const std::string &AForm::getName() const
{
	return (name);
}
bool AForm::getIsSigned() const
{
	return (isSigned);
}
int AForm::getSignGrade() const
{
	return (signGrade);
}
int AForm::getExecGrade() const
{
	return (execGrade);
}
const std::string &AForm::getTarget() const
{
	return (target);
}

void AForm::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > signGrade)
		throw GradeTooLowException();
	isSigned = true;
}

void AForm::canExecute(Bureaucrat const &executor) const
{
	if (!isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > execGrade)
		throw GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form not signed!");
}

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << f.getName() << " (Sign grade: " << f.getSignGrade() << 
	", Exec grade: " << f.getExecGrade() << ", Signed: " << (f.getIsSigned() ? "yes" : "no") << ")";
	return (os);
}
