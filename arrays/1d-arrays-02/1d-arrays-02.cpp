// 1d-arrays-02

#include <iostream>

int main()
{
    char str[256];
    std::cout << "Enter some letters: ";
    std::cin.getline(str, 256, '\n');
    for (int i = 0; i < strlen(str); ++i)
    {
        if (int(str[i] <= 90 && int(str[i] >= 65)))
        {
            str[i] += 32;
        }
        else if (int(str[i] <= 122 && int(str[i] >= 97)))
        {
            str[i] -= 32;
        }
    }
    std::cout << "New stroke is: ";
    for (int i = 0; i < strlen(str); ++i)
    {
        std::cout << str[i];
    }
}
