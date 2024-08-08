#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
    std::string input;
    std::string info[5];
    while(1)
    {
        std::cout<< "Write the command: ADD, EXIT or SEARCH"<<std::endl;
        getline(std::cin, input);
        if(input.empty())
            exit(0);
        if (!input.compare("EXIT"))
        {
            std::cout<<"Program finished"<<std::endl;
            return 0;
        }
        else if(!input.compare("ADD"))
        {
            for(int i = 0;i < 5;i++)
                {
                    if(i == 0)
                    {
                        std::cout << std::setw(10) << "First Name \t" << "|  ";
                        getline(std::cin, info[i]);
                    }
                    else if (i == 1)
                    {
                        std::cout << std::setw(10) << "Last Name \t" << "|  ";
                        getline(std::cin, info[i]);
                    }
                    else if(i == 2)
                    {
                        std::cout << std::setw(10) << "Nickname \t" << "|  ";
                        getline(std::cin, info[i]);
                    }
                    else if(i == 3)
                    {
                        std::cout << std::setw(10) << "Phone Number \t" << "|  ";
                        getline(std::cin, info[i]);
                        for (std::string::iterator it = info[i].begin(); it != info[i].end(); ++it) 
                        {
                            if(!isdigit(*it))
                            {
                                    std::cout << "Error: Phone number must contain only integers." << std::endl << std::endl;;
                                    i = -1;
                                    break;
                            }
                        }
                    }
                    else if (i == 4)
                    {                        
                        std::cout << std::setw(10) << "Darkest Secret \t" << "|  ";
                        getline(std::cin, info[i]);
                    }
                    
                }
                        std::cout << "Print the command:" << std::endl;
                        phonebook.add(info);
        }
        else if(!input.compare("SEARCH"))
        {
                phonebook.search();
                std::cout << "Print the command:" << std::endl;
        }
        else
        {
            std::cout<<"Wrong command, try again:"<<std::endl;
        }
    }
	return 0;
}