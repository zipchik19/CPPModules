#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("Xelaci burik", 5);
        Form form("Xelaci Form", 10, 70);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
        std::cout << bureaucrat << std::endl;
    }catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    } 
}