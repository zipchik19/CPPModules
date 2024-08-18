#include "Harl.hpp"

Harl::Harl()
{

}

void Harl::debug()
{
	std::cout<<"DEBUG"<<std::endl;
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void Harl::info()
{
	std::cout<<"INFO"<<std::endl;
	std::cout<< " I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning()
{
	std::cout<<"WARNING"<<std::endl;
	std::cout<<"I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error()
{
	std::cout<<"ERROR"<<std::endl;
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	for(; i<4 && lvls[i].compare(level); i++);
	(this->*ptr[i])();
}