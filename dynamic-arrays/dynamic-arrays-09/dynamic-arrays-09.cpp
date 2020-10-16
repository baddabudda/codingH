// dynamic-arrays-09

#include <iostream>
#include <ctime>
#include <iomanip>

int main()
{
	int n, m, a, b;
	std::cout << "Enter n, m, a, b: ";
	std::cin >> n >> m >> a >> b;
	int** arr;
	arr = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[m];
	}
	srand(time(0));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if ((a < 0 && b > 0) || (a > 0 && b < 0))
			{
				arr[i][j] = a + rand() % (abs(a) + abs(b) + 1);
			}
			else
			{
				arr[i][j] = a + rand() % abs(b - a + 1);
			}
			std::cout << std::setw(5) << arr[i][j];
		}
		std::cout << '\n';
	}
	std::cout << '\n';
	int* rwsArr;
	rwsArr = new int[n * m];
	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			rwsArr[k] = arr[i][j];
			std::cout << std::setw(5) << rwsArr[k];
			++k;
		}
	}
	delete[] rwsArr;
	std::cout << '\n';
	int* clmsArr;
	clmsArr = new int[n * m];
	k = 0;
	for (int j = 0; j < m; ++j)
	{
		for (int i = 0; i < n; ++i)
		{
			clmsArr[k] = arr[i][j];
			std::cout << std::setw(5) << clmsArr[k];
			++k;
		}
	}
	delete[] clmsArr;
	for (int i = 0; i < n; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
}