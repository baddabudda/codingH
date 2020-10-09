// dynamic-arrays-03

#include <iostream>
#include <ctime>
#include <iomanip>

int main()
{
    srand(time(0));
    int rows, columns;
    std::cin >> rows;
    std::cin >> columns;
    int** arr1;
    arr1 = new int* [rows];
    for (int i = 0; i < rows; ++i)
    {
        arr1[i] = new int[columns];
    }
    std::cout << "Array 1: " << '\n';
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            arr1[i][j] =  -100 + rand() % 200;
            std::cout << std::setw(7) << arr1[i][j];
        }
        std::cout << '\n';
    }
    int min = 101, max = -101;
    int temp_r, temp_c;
    for (int i = 0; i < rows; ++i)
    {
        max = -101;
        min = 101;
        for (int j = 0; j < columns; ++j)
        {
            if (arr1[i][j] > max)
            {
                max = arr1[i][j];
                temp_c = j;
            }
        }
        for (int k = 0; k < rows; ++k)
        {
            if (arr1[k][temp_c] < min)
            {
                min = arr1[k][temp_c];
                temp_r = k;
            }
        }
        if (min == max)
        {
            std::cout << "Saddle point has coordinates (row,column): " << temp_r << ' ' << temp_c << std::endl;
        }
    }
    system("pause");
}
