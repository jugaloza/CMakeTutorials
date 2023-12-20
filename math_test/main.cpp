#include <iostream>
#include "my_math/addition.hpp"
#include "my_math/division.hpp"

int main()
{
    float a,b;
    std::cout << "Enter 2 numbers " << std::endl;
    std::cin>>a>>b;
    std::cout << "Addition :" << addition(a,b) << std::endl;
    std::cout << "DIvision :" << division(a,b) << std::endl;
    return 0;
}