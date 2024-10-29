#include "Serializer.hpp"


int main(int ac, char **av) {
    (void)ac;
    (void)av;
    Data data;
    data.valueInt = 1;
    data.valueFloat = 1.1;
    uintptr_t ptr;
    ptr = Serializer::serialize(&data);
    Data *dataPtr = Serializer::deserialize(ptr);
    std::cout << &data << std::endl;
    std::cout << dataPtr << std::endl;
    std::cout << dataPtr->valueInt << std::endl;
    std::cout << dataPtr->valueFloat << std::endl;
}