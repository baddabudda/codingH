#include <iostream>

int main()
{
    int height;
    std::cout << "Enter triangle's height: ";
    std::cin >> height;
    for (int i = 1; i <= (height*2)-1; i+=2)
    {
        for (int j = 1; j <= ((height*2)-1-i) / 2; j++)
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
