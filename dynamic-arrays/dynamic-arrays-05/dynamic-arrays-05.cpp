// 10.10

#include <iostream>

int main()
{
	int n, m, counter = 1, sumG = 0, sumP = 0;
	std::cout << "Enter n, m: ";
	std::cin >> n;
	std::cin >> m;
	int** arr;
	arr = new int* [m];
	for (int i = 0; i < m; ++i)
	{
		arr[i] = new int[n];
	}
	for (int j = 0; j < n; ++j)
	{
		arr[0][j] = counter;
		++counter;
		std::cout << arr[0][j] << '\t';
	}
	sumG = arr[0][0];
	sumP = arr[0][n - 1];
	std::cout << '\n';
	for (int i = 1; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arr[i][j] = counter;
			++counter;
			if (i == j)
			{
				sumG += arr[i][j];
			}
			if (n-i-1 == j)
			{
				sumP += arr[i][j];
			}
			std::cout << arr[i][j] << '\t';
		}
		std::cout << '\n';
	}
	for (int i = 0; i < m; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
	std::cout << sumG << '\t' << sumP;
}