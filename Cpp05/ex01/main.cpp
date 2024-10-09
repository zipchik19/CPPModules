#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("Xelaci burik", 6);
        Form form("Xelaci Form", 2, 150);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
        std::cout << bureaucrat << std::endl;
    }catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    } 
}