#include <iostream>

#include "mul.hpp"

int main()
{
    int a, b;
    int result;

    a = 3;
    b = 5;

    result = mul(a, b);
    
    std::cout << result << std::endl;
    
    return 0;
}