// dynamic-arrays-02

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
    int** arr2;
    arr1 = new int* [rows];
    arr2 = new int* [rows];
    // Expanding arrays
    for (int i = 0; i < rows; ++i)
    {
        arr1[i] = new int[columns];
        arr2[i] = new int[columns];
    }
    // Initializing arr1
    std::cout << "Array 1: " << '\n';
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            arr1[i][j] = -100 + rand() % 200;
            std::cout << std::setw(7) << arr1[i][j];
        }
        std::cout << '\n';
    }
    // Initializing arr2
    std::cout << "Array 2: " << '\n';
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            arr2[i][j] = -100 + rand() % 200;
            std::cout << std::setw(7) << arr2[i][j];
        }
        std::cout << '\n';
    }
    // Initializing matrix's sum array
    int** arr3;
    arr3 = new int* [rows];
    for (int i = 0; i < rows; ++i)
    {
        arr3[i] = new int[columns];
    }
    // Matrix's sum
    std::cout << "Matrix's sum array: " << '\n';
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            std::cout << std::setw(7) << arr3[i][j];
        }
        std::cout << '\n';
    }
    // deleting arr2
    delete[] arr2;
    // Transposing arr1
    int** arr1_t;
    arr1_t = new int* [columns];
    for (int i = 0; i < columns; ++i)
    {
        arr1_t[i] = new int[rows];
    }
    // Filling transposed arr1
    std::cout << "Transposed arr1 is: " << '\n';
    for (int i = 0; i < columns; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            arr1_t[i][j] = arr1[j][i];
            std::cout << std::setw(7) << arr1_t[i][j];
        }
        std::cout << '\n';
    }
    // deleting arr3
    delete[] arr3;
    // Matrix's product
    int** matr_pr;
    matr_pr = new int* [rows];
    for (int i = 0; i < rows; ++i)
    {
        matr_pr[i] = new int[rows];
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            matr_pr[i][j] = 0;
        }
    }
    // Filling
    for (int i = 0; i < rows; ++i)
    {
            for (int l = 0; l < rows; ++l)
            {
                for (int k = 0; k < columns; ++k)
                {
                    matr_pr[i][l] += arr1[i][k] * arr1_t[k][l];
                }
            }
    }
    std::cout << "Matrix's product is: " << '\n';
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            std::cout << std::setw(7) << matr_pr[i][j];
        }
        std::cout << '\n';
    }
    delete[] matr_pr;
	system("pause");
}
