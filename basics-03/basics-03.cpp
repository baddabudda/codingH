// Вывод бита с входящим индексом

#include <iostream>

int main()
{
	int x,i;
	std::cout << "Enter the number and index: ";
	std::cin >> x >> i;
	x = x >> i; // 1101001, i = 3. вывод: 1. 1101
	x = x & 1;
	std::cout << x << std::endl;
	system("pause");
}
