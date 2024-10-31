#include "Array.hpp"
#include <string>
int main( void ) {
    const int elems = 15;
    Array<std::string> a(elems);
    const Array<std::string> b(elems);

    // b[0] = "barev";
    a[0] = "barev";


    for (size_t i = 0; i < elems; i++) {
        a[i] = std::to_string(i) + "barev";
    }
    for (size_t i = 0; i < elems; i++) {
        std::cout << a[i] << std::endl;
    }
    std::cout << std::endl;
    const Array<std::string> test(a);
    test[5];
    std::cout << "test = " << test[5] << std::endl;
    try {
        Array<std::string> test = a;
        Array<std::string> test1;
        test1 = a;
        std::cout << test[14] << std::endl;
        std::cout << test1[13] << std::endl;
        std::cout << test.size() << std::endl;
        std::cout << test1.size() << std::endl;
        std::cout << a.size() << std::endl;
        std::cout << a[-1] << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    // system("leaks template");
    return 0;
}