// 1d-arrays-03

#include <iostream>

int main()
{
    char str[256];
    std::cout << "Enter something: ";
    std::cin.getline(str, 256, '\n');
    for (int i = 0; i < strlen(str); ++i)
    {
        if (str[i] != '1' && str[i] != '0')
        {
            std::cout << "This isn't binary" << '\n';
            break;
        }
        if (i == strlen(str) - 1)
        {
            std::cout << "This number is binary" << '\n';
        }
    }
}
