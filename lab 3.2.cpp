#include <iostream>

int main() {
    double x; // вхідний аргумент
    double a; // вхідний параметр
    double b; // вхідний параметр
    double c; // вхідний параметр
    double F; // результат обчислення виразу

    std::cout << "a = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;
    std::cout << "c = "; std::cin >> c;
    std::cout << "x = "; std::cin >> x;

    // спосіб 1: розгалуження в скороченій формі
    if (x - 1 < 0 && b - x != 0)
        F = (a * (x * x) + b);
    else if (x - 1 > 0 && b + x == 0)
        F = (x - a) / x;
    else
        F = x / c;

    std::cout << std::endl;
    std::cout << "1) F = " << F << std::endl;

    // спосіб 2: розгалуження в повній формі
    if (x - 1 < 0 && b - x != 0)
        F = (a * (x * x) + b);
    else if (x - 1 > 0 && b + x == 0)
        F = (x - a) / x;
    else
        F = x / c;

    std::cout << "2) F = " << F << std::endl;

    return 0;
}



