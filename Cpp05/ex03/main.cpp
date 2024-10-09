#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	{
		Intern Intern;
		AForm* forma;
		forma = Intern.makeForm("robotomy request", "Home");
		delete forma;
		forma = Intern.makeForm("shrubbery creation", "Home");
		delete forma;
		forma = Intern.makeForm("presidential pardon", "Home");
		delete forma;
		forma = Intern.makeForm("prsidential pardon", "Home");
		delete forma;
	}
	return (0);
}