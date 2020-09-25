// Задача 1: подсчёт корней квадратного уравнения
#include <iostream>
#include <cmath>

int main()
{
    long double a, b, c, d;
    std::cin >> a >> b >> c;
    d = sqrt(pow(b, 2) - 4 * a * c);
    if (a != 0) {
        if (d > 0) {
            std::cout << "x1 = " << (-b + d) / (2 * a) << "\tx2 = " << (-b - d) / (2 * a) << std::endl;
        }
        else if (d == 0) {
            std::cout << "x1,2 = " << (-b + d) / (2 * a) << std::endl;
        }
        else {
            std::cout << "No roots \n";
        }
    }
    else {
        std::cout << "x = " << -c / b << std::endl;
    }
    system("pause");
}