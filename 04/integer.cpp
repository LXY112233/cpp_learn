#include <iostream>
#include <cstdint>

int main()
{
    // sizeof 不是函数，是一个操作符
    // sizeof()返回的类型是size_t，这是一个描述内存大小的类型
    // 表达内存、表达元素的个数，建议使用size_t

    // Byte是计算机内存的最小单位，比如bool类型，就算只有1和0，其实一个bit就够了，但是仍占用一个Byte

    // 1 Bytes = 8 bits, char是一个整数
    std::cout << "char: " << sizeof(char) << std::endl;
    // 2 Bytes = 16 bits,
    std::cout << sizeof(char16_t) << std::endl;
    // 4 Bytes = 32 bits
    std::cout << sizeof(char32_t) << std::endl;

    std::cout << "---" << std::endl; 

    // 4 Bytes = 32 bits, 最高位为符号位
    std::cout << sizeof(int) << std::endl;
    // 2 Bytes
    std::cout << sizeof(short) << std::endl; 

    std::cout << sizeof(unsigned int) << std::endl;

    std::cout << "---" << std::endl; 

    // 8 bits = 1 Byte
    std::cout << sizeof(int8_t) << std::endl;
    // 64 bits = 8 Bytes
    std::cout << sizeof(uint64_t) << std::endl;

    // cstdint库里可以用来做范围检测的宏定义，可以做防溢出处理
    std::cout << INT8_MAX << std::endl;
    std::cout << INT16_MAX << std::endl;

    return 0;
}