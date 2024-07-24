#pragma once
#include <string>
using std::string;

class Contact
{
	public:
		Contact();
		~Contact();
	private:
		string firstname;
		string lastname;
		string nicname;
		int phonenumber;
		string secret;
		void add();
};