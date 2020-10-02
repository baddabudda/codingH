// 1d-arrays-06

#include <iostream>

int main()
{
    char strNum[100];
    int result = 0, st10, numSys, counter = 0, maxNum = 1, resR = 0;
    std::cout << "Enter the number: ";
    std::cin.getline(strNum, 100, '\n');
    std::cout << "Enter the base of preferable numeral system: ";
    std::cin >> numSys;
    // from str to dec
    for (int i = strlen(strNum) - 1; i >= 0; --i)
    {
        st10 = 1;
        for (int j = i; j < strlen(strNum) - 1; ++j)
        {
            st10 *= 10;
        }
        result += (int(strNum[i]) - 48) * st10;

    }
    // finding the amount of iterations
    while (result / (maxNum * numSys) > 0)
    {
        counter += 1;
        maxNum *= numSys;
    }
    std::cout << maxNum << std::endl;
    // from dec to another numsys
    for (int i = 0; i <= counter; ++i)
    {
        while (result >= maxNum)
        {
            resR += 1;
            result -= maxNum;
        }
        maxNum /= numSys;
        if (resR == 15)
        {
            std::cout << 'F';
        }
        else if (resR == 14)
        {
            std::cout << 'E';
        }
        else if (resR == 13)
        {
            std::cout << 'D';
        }
        else if (resR == 12)
        {
            std::cout << 'C';
        }
        else if (resR == 11)
        {
            std::cout << 'B';
        }
        else if (resR == 10)
        {
            std::cout << 'A';
        }
        else
        {
            std::cout << resR;
        }
        resR = 0;
    }
    std::cout << '\n';
}
