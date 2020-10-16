//

#include <iostream>
# include <ctime>

int main()
{
	int n, a, b;
	double cntrChElm = 0, amnt = 0;
	std::cout << "Enter n, a, b: ";
	std::cin >> n >> a >> b;
	int* arr;
	arr = new int[n];
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
		if (arr[i] >= 0 && arr[i]%2 == 0)
		{
			cntrChElm += arr[i];
			++amnt;
		}
		std::cout << arr[i] << ' ';
	}
	delete[] arr;
	std::cout << '\n' << cntrChElm/amnt;
}