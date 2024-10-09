#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat bureaucrat("John Doe", 160);

    // Create forms
    ShrubberyCreationForm shrubberyForm("school");
    RobotomyRequestForm robotomyForm("John");
    PresidentialPardonForm pardonForm("Alice");

    // Attempt to execute forms
    try {
        shrubberyForm.beSigned(bureaucrat);
        shrubberyForm.execute(bureaucrat);
    } catch (const std::exception& e) {
        std::cout << "Exception caught: shrubberyForm" << e.what() << std::endl;
    }

    try {
        robotomyForm.beSigned(bureaucrat);
        robotomyForm.execute(bureaucrat);
    } catch (const std::exception& e) {
        std::cout << "Exception caught: robotomyForm" << e.what() << std::endl;
    }

    try {
        pardonForm.beSigned(bureaucrat);
        pardonForm.execute(bureaucrat);
    } catch (const std::exception& e) {
        std::cout << "Exception caught: pardonForm" << e.what() << std::endl;
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