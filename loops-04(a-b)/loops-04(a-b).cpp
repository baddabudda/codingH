#include <iostream>

int main()
{
    int height;
    std::cout << "Enter triangle's  height: ";
    std::cin >> height;
    height = (height/2) + 1;
    // ���� 4�
    for (int i = 1; i <= (height * 2) - 1; i += 2)
    {
        for (int j = 1; j <= ((height * 2) - 1 - i) / 2; j++)
        {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j)
        {
            if (j == 1 | j == i) 
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
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
            if (j == 1 | j == i)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    // ���� 4�
    for (int i = 1; i <= (height * 2) - 1; i += 2)
    {
        for (int j = 1; j <= ((height * 2) - 1 - i) / 2; j++)
        {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j)
        {
            if (j % 2 != 0)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
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
            if (j % 2 != 0)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    system("pause");
}
