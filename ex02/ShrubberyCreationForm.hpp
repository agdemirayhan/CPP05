#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
  private:
	std::string target;

  public:
	ShrubberyCreationForm(std::string const &target);
	virtual ~ShrubberyCreationForm();
	void execute(Bureaucrat const &executor) const;
};

#endif
