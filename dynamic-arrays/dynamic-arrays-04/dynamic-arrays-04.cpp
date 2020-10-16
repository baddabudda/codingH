// 10.10
# include <iostream>

int main()
{
	int n, sumElem = 1;
	std::cout << "Enter N: ";
	std::cin >> n;
	int* arr = new int[n+1];
	arr[0] = 1;
	for (int i = 1; i < n + 1; ++i)
	{
		arr[i] = 1;
		for (int j = 1; j <= i; ++j)
		{
			arr[i] *= 2;
		}
		sumElem += arr[i];
	}
	for (int i = 0; i < n + 1; ++i)
	{
		std::cout << arr[i] << '\t';
	}
	delete[] arr;
	std::cout << '\n' << "Sum = " << sumElem << std::endl;
}