// dynamic-arrays-06

#include <iostream>
# include <ctime>

int main()
{
	int n, a, b, flag = 0;
	std::cout << "Enter n, a, b: ";
	std::cin >> n >> a >> b;
	int* arr;
	arr = new int [n];
	srand(time(0));
	int idxMx = 0, idxMn = 0;
	int mx, mn;
	for (int i = 0; i < n; ++i)
	{
		if ((a < 0 && b > 0) || (a > 0 && b < 0))
		{
			arr[i] = a + rand() % (abs(a) + abs(b) + 1);
		}
		else
		{
			arr[i] = a + rand() % abs(b - a + 1);
		}
		if (flag == 0)
		{
			mx = arr[i];
			mn = arr[i];
			flag = 1;
		}
		else
		{
			if (arr[i] > mx)
			{
				mx = arr[i];
				idxMx = i;
			}
			if (arr[i] < mn)
			{
				mn = arr[i];
				idxMn = i;
			}
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
	for (int i = 0; i < n; ++i)
	{
		if (i == idxMx)
		{
			arr[i] = mn;
		}
		else if (i == idxMn)
		{
			arr[i] = mx;
		}
		std::cout << arr[i] << ' ';
	}
	delete[] arr;
}