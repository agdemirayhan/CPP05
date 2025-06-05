#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign,
	int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign),
	gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned),
	gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		isSigned = other.isSigned;
	return (*this);
}

Form::~Form()
{
}

const std::string &Form::getName() const
{
	return (name);
}

bool Form::getIsSigned() const
{
	return (isSigned);
}

int Form::getGradeToSign() const
{
	return (gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (gradeToExecute);
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > gradeToSign)
		throw GradeTooLowException();
	isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form grade too low!");
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "Form " << f.getName() << " [Sign grade: " << f.getGradeToSign() << 
	",Execute grade: " << f.getGradeToExecute() << ",Signed: " << (f.getIsSigned() ? "Yes" : "No") << "]";
	return (os);
}
