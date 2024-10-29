#include "Rep.hpp"
#include <string>

Replace::Replace(std::string fileName, std::string s1, std::string s2)
{
	m_filname = fileName;
	m_from = s1;
	m_to = s2;
}

void Replace::mainFunc()
{
	std::ifstream inputfile(m_filname.c_str());
	std::ofstream outputfile(m_filname + ".replace");
	std::string line;
	std::string res;
	int founded = 0;
	if(!inputfile.is_open()){
		std::cout<<"ERROR while openning file"<<std::endl;
		exit(1);
	}
	while (getline(inputfile, line))
		res += line + '\n';
	
	for(int i = 0; res[i] != '\0'; i++)
	{
		founded = res.find(m_from, founded);
		if (founded == -1)
			break;
		res.erase(founded, m_from.length());
		res.insert(founded, m_to);
		founded += m_to.length() - 1;
	}
	outputfile << res <<std::endl;
	outputfile.close();
}