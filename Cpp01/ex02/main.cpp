#include <iostream>

int main()
{
	std::string str = "HI THIS SI BRAIN";
    std::string *stringPTR = *str;
    std::string stringREF = &str;

    std::cout<<"The address in memory of the string - "<<&str<<std::endl;
    std::cout<<"The address by using stringPTR - "<<stringPTR<<std::endl;
    std::cout<<"Tje address of the string using stringREF - "<<&stringREF::std::endl;

    std::cout<<"The string - "<<str<<std::endl;
    std::cout<<"The string using the pointer - "<<*stringPTR<<std::endl;
    std::cout<<"The string using reference - "<<stringREF<<std::endl;


}