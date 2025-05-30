#include <iostream>

// main函数有这两个参数
int main(int argc, char ** argv)
{
    for (int i = 0; i < argc; i++)
    {
        std::cout << i << ": " << argv[i] << std::endl;
    }
    
    return 0;
}

// ./argument hello world