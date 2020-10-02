// 1d-arrays-01
#include <iostream>
# include <ctime>

int main()
{
    int arlen, temp;
    std::cout << "Enter array's length: ";
    std::cin >> arlen;
    srand(time(0));
    int* arr = new int[arlen];
    for (int i = 0; i < arlen; ++i)
    {
        arr[i] = rand();
    }
    std::cout << std::endl;
    for (int i = 0; i < arlen / 2; ++i)
    {
        temp = arr[arlen - 1 - i];
        arr[arlen - 1 - i] = arr[i];
        arr[i] = temp;
    }
    std::cout << "Your inverted array is: ";
    for (int i = 0; i < arlen; ++i)
    {
        std::cout << arr[i] << ' ';
    }
    system("pause");
}