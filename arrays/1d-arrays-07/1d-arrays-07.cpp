// 1d-arrays-07

#include <iostream>

int main()
{
    char str[100];
    int prMax = 0, max = 0;
    std::cin.getline(str, 100, '\n');
    for (int i = 0; i < strlen(str); ++i)
    {
        if (str[i] ==  '0')
        {
            prMax += 1;
        }
        if (str[i] == '1' | i == strlen(str)-1)
        {
            if (prMax >= max)
            {
                max = prMax;
            }
            prMax = 0;
        }
    }
    std::cout << max << "\n";
}
