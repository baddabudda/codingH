#include <iostream>

int main()
{
    std::cout << "Enter the number: ";
    int num, i=1;
    std::cin >> num;
    while (i < num)
    {
        i <<= 1;
    }
    std::cout << "i: " << i << std::endl;
    if ((num & i) == i)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    system("pause");
}
