// Задача 2: попадает ли точка с введёнными координатами в кольцо

#include <iostream>
#include <cmath>

int main()
{
    long double x, y, R, r;
    std::cin >> x >> y >> R >> r;
    if (r < sqrt(pow(x, 2) + pow(y, 2)) && sqrt(pow(x, 2) + pow(y, 2)) < R) {
        std::cout << "Belongs to the ring" << std::endl;
    }
    else {
        std::cout << "Doesn't belong to the ring" << std::endl;
    }
    system("pause");
}
