#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj1("burik1", 16);
        obj1.DecrementGrade();
        std::cout << obj1.getName() <<" "<<obj1 << std::endl;
        Bureaucrat obj2("burik2", 160);
        obj1.IncrementGrade();
        std::cout << obj2.getName() <<" "<<obj1 << std::endl;
    }
    catch(const std::exception& ex)
    {
        std::cerr << ex.what()<<std::endl;
    }
}