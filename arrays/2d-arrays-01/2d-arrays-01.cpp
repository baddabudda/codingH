// 2d-arrays-01

#include <iostream>

int main()
{
    // vvod constant
    int const rows = 3;
    int const cols = 4;
    int a[rows][cols] = {};
    int num = 1, counter = 0;
    bool vector;
    std::cout << "Choose vector: 0 - row, 1 - column: ";
    std::cin >> vector;
    if (vector == false)
    {
        for (int i = 0; i < rows; ++i)
        {
            if (counter % 2 == 0)
            {
                for (int j = 0; j < cols; ++j)
                {
                    a[i][j] = num;
                    num += 1;

                }
            }
            else
            {
                for (int j = cols - 1; j >= 0; --j)
                {
                    a[i][j] = num;
                    num += 1;
                }
            }
            ++counter;
        }
    }
    else
    {
        for (int i = 0; i < cols; ++i)
        {
            if (counter % 2 == 0)
            {
                for (int j = 0; j < rows; ++j)
                {
                    a[j][i] = num;
                    num += 1;
                }
            }
            else
            {
                for (int j = rows - 1; j >= 0; --j)
                {
                    a[j][i] = num;
                    num += 1;
                }
            }
            ++counter;
        }
    }
    for (int i = 0; i < rows; ++i)
    {
        std::cout << "str " << i << " is: ";
        for (int j = 0; j < cols; ++j)
        {
            std::cout << a[i][j] << '\t';
        }
        std::cout << std::endl;
    }
}
