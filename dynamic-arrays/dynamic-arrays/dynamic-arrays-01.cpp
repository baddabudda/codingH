// dynamic-arrays-01

#include <iostream>
#include <ctime>

int main()

{
	int size, sc_pr = 0, m_norm = 0, l_norm = 0;
	std::cout << "Enter arrays' size: ";
	std::cin >> size;
	srand(time(0));
	int* arr1 = new int[size];
	int* arr2 = new int[size];
	int* arr3 = new int[size];
	std::cout << "arr1:\tarr2:" << '\n';
	for (size_t i = 0; i < size; ++i)
	{
		arr1[i] = -100 + rand() % 200;
		arr2[i] = -100 + rand() % 200;
		std::cout << arr1[i] << '\t' << arr2[i] << '\n';
		arr3[i] = arr1[i] + arr2[i];
		m_norm += abs(arr3[i]);
		if (arr3[i] > l_norm)
		{
			l_norm = arr3[i];
		}
		sc_pr += arr1[i] * arr2[i];
	}
	std::cout << "Array of sums: ";
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr3[i] << ' ';
		if (i == size - 1)
		{
			std::cout << '\n';
		}
	}
	std::cout << "Scalar product of generated arrays is: " << sc_pr << '\n';
	std::cout << "Matrix's norm (m): " << m_norm << '\n';
	std::cout << "Matrix's norm (l): " << l_norm << '\n';
	system("pause");
}