#include <iostream>

int main()
{
	int x, i, temp = 1;
	std::cout << "Enter the number and index: ";
	std::cin >> x >> i;
	temp <<= i;
	std::cout << "a) " <<(x | temp) << std::endl;
	std::cout << "b) " << (x & (~temp)) << std::endl;
	std::cout << "c) " << (x ^ temp) << std::endl;
	system("pause");
}
