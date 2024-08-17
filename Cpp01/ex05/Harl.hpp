#pragma once
#inlcude <iostream>

class Harl
{
	private:
		std::string m_level;
	public:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void complain(std::string level);
};