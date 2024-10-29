#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        std::string str(av[1]);
        ScalarConverter::convert(str);
    } else {
        std::cerr << "error" << std::endl;
    }
}