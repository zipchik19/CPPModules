#pragma once
#include <string>
using std::string;

class Contact
{
	public:
		Contact();
		~Contact();
        void setFirstName(std::string firstname);
		void setLastName(std::string lastname);
		void setNickName(std::string nickname);
		void setPhoneNumber(std::string phonenumber);
		void setSecret(std::string secret);

        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getSecret();
	private:
		std::string m_firstname;
		std::string m_lastname;
		std::string m_nickname;
		std::string m_phonenumber;
		std::string m_secret;
};