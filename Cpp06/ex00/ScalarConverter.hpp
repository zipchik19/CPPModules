#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <climits>
#include <cfloat>

class ScalarConverter {
	public:
		static void convert(const std::string& param);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter&);
		~ScalarConverter();

		ScalarConverter& operator=(const ScalarConverter&);
};
