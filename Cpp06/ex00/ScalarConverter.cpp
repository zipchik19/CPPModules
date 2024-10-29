#include "ScalarConverter.hpp"

// Function to handle char conversion
static void charConvert(const std::string& param) {
    std::cout << "char: " << param[0] << std::endl;
    std::cout << "int: " << static_cast<int>(param[0]) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(param[0]) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(param[0]) << std::endl;
}

// Function to handle int conversion
static void intConvert(const std::string& param) {
    int n = std::atoi(param.c_str());

    if (n < 0 || n > 127)
        std::cout << "char: impossible" << std::endl;
    else if (n < 32 || n == 127)
        std::cout << "char: non-displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(n) << std::endl;

    std::cout << "int: " << n << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
}

// Function to handle float conversion
static void floatConvert(const std::string& param) {
    float n = std::atof(param.c_str());

    if (n < 0 || n > 127)
        std::cout << "char: impossible" << std::endl;
    else if (n < 32 || n == 127)
        std::cout << "char: non-displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(n) << std::endl;

    std::cout << "int: " << static_cast<int>(n) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(2) << n << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(2) << static_cast<double>(n) << std::endl;
}

// Function to handle double conversion
static void doubleConvert(const std::string& param) {
    double n = std::atof(param.c_str());

    if (n < 0 || n > 127)
        std::cout << "char: impossible" << std::endl;
    else if (n < 32 || n == 127)
        std::cout << "char: non-displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(n) << std::endl;

    std::cout << "int: " << static_cast<int>(n) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(n) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(2) << n << std::endl;
}

// Functions for edge cases
static void minInfConvert() {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << INT_MIN << std::endl;
    std::cout << "float: " << __FLT_MIN__ << std::endl;
    std::cout << "double: " << __DBL_MIN__ << std::endl;
}

static void maxInfConvert() {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << INT_MAX << std::endl;
    std::cout << "float: " << __FLT_MAX__ << std::endl;
    std::cout << "double: " << __DBL_MAX__ << std::endl;
}

static void nanConvert() {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: 0" << std::endl;
    std::cout << "float: 0" << std::endl;
    std::cout << "double: 0" << std::endl;
}

static void error() {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: 0" << std::endl;
    std::cout << "float: 0" << std::endl;
    std::cout << "double: 0" << std::endl;
}

// Input validation and conversion dispatch
static void checkInput(const std::string& param) {
    if (std::isprint(param[0]) && !std::isdigit(param[0])) {
        if (param.length() == 1)
            charConvert(param);
        else if (param == "-inf" || param == "-inff")
            minInfConvert();
        else if (param == "+inf" || param == "+inff")
            maxInfConvert();
        else if (param == "nan" || param == "nanf")
            nanConvert();
        else
            error();
    } 
    else if (param[param.length() - 1] == 'f') {
        bool isValid = true;
        size_t i = 0;
        while (i < param.length() - 1) {
            if (!std::isdigit(param[i]) && param[i] != '.') {
                isValid = false;
                break;
            }
            i++;
        }
        if (isValid)
            floatConvert(param);
        else
            error();
    } 
    else if (param.find('.') != std::string::npos) {
        bool isValid = true;
        size_t i = 0;
        while (i < param.length()) {
            if (!std::isdigit(param[i]) && param[i] != '.') {
                isValid = false;
                break;
            }
            i++;
        }
        if (isValid)
            doubleConvert(param);
        else
            error();
    } 
    else if (std::isdigit(param[0])) {
        bool isValid = true;
        size_t i = 0;
        while (i < param.length()) {
            if (!std::isdigit(param[i])) {
                isValid = false;
                break;
            }
            i++;
        }
        if (isValid)
            intConvert(param);
        else
            error();
    } 
    else {
        error();
    }
}

// Static convert method
void ScalarConverter::convert(const std::string& param) {
    checkInput(param);
}
