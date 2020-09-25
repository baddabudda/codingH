#include <iostream>

int main()
{
    std::cout << "Enter the number: ";
    int num, counter = 0;
    std::cin >> num;
    for (int i = 1; i <= num; i <<= 1)
    {
        if ((num & i) != 0)
        {
            counter += 1;
        }
    }
    std::cout << counter << std::endl;
    system("pause");
}
