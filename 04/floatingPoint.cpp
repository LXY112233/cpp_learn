#include <iostream>
// 引入这个库，才可以使用setprecision()函数
#include <iomanip>

int main()
{
    float f1 = 1.2f;
    float f2 = f1 * 1000000000000000;
    std::cout << std::fixed << std::setprecision(15) << f1 << std::endl;
    std::cout << std::fixed << std::setprecision(15) << f2 << std::endl;
    return 0;
}