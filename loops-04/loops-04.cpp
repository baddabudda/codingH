#include <iostream>

int main()
{
    int height;
    std::cout << "Enter triangle's half height: ";
    std::cin >> height;
    height = (height / 2) + 1;
    for (int i = 1; i <= (height * 2) - 1; i += 2)
    {
        for (int j = 1; j <= ((height * 2) - 1 - i) / 2; j++)
        {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i = (height * 2) - 3; i >= 1; i -= 2)
    {
        for (int j = 1; j <= ((height * 2) - 1 - i) / 2; j++)
        {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    system("pause");
}
