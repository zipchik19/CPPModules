#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("John Doe", 1);

        ShrubberyCreationForm shrubberyForm("school");
        RobotomyRequestForm robotomyForm("John");
        PresidentialPardonForm pardonForm("Alice");

        // Attempt to execute forms
        try {
            bureaucrat.signForm(shrubberyForm);
            bureaucrat.executeForm(shrubberyForm);

        } catch (const std::exception& e) {
            std::cout << "Exception caught: shrubberyForm" << e.what() << std::endl;
        }

        try {
            bureaucrat.signForm(robotomyForm);
            bureaucrat.executeForm(robotomyForm);
        } catch (const std::exception& e) {
            std::cout << "Exception caught: robotomyForm" << e.what() << std::endl;
        }
        try {
            bureaucrat.signForm(pardonForm);
            bureaucrat.executeForm(pardonForm);
        } catch (const std::exception& e) {
            std::cout << "Exception caught: pardonForm" << e.what() << std::endl;
        }
    }catch (const std::exception& e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        // Create forms
    }
    return 0;
}


// int main()
// {
//     Bureaucrat buro("John", 2);
//     ShrubberyCreationForm shrubbery("Shrubbery");
//     RobotomyRequestForm robotomy("Robot");
//     buro.signForm(shrubbery);
//     shrubbery.beSigned(buro);
//     robotomy.beSigned(buro);
// }