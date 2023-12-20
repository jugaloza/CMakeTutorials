#include <iostream>
#include "my_math/addition.hpp"
#include "my_math/division.hpp"

int main()
{
    float a, b, result;

    std::cin >> a;
    std::cin >> b;

    std::cout << "Addition of two numbers : " << addition(a,b)<< std::endl;
    std::cout << "Division  : " << division(a,b) << std::endl;

    //std::cout << "First Program" << std::endl;
    return 0;
}