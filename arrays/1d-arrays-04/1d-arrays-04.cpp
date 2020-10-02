// 1d-arrays-04

#include <iostream>

long pow(int x)
{
    int respow = 128;
    for (int i = 0; i < x; ++i)
    {
        respow /= 2;
    }
    return respow;
}

int main()
{
    int result = 0;
    char str[9];
    std::cout << "Enter binary: ";
    std::cin.getline(str, 9);
    std::cout << strlen(str) << std::endl;
    for (int i = 0; i <  strlen(str); ++i)
    {
        result += pow(i)* (int(str[i]) - 48);
        std::cout << pow(i) << std::endl;
        std::cout << result << std::endl;
    }
    std::cout << "From bin to dec: " << result << '\n';
}
