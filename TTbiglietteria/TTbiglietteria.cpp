#include <iostream>

int main()
{
    int age;
    std::cout << "Quanti anni hai?" << std::endl;
    std::cin >> age;
    if (age > 60 || age < 5)
    {
        std::cout << "il biglietto e' gratis";
    }
    else if (age > 15 && age < 60)
    {
        std::cout << "il bigletto costa 10 euro";
    }
    else if (age < 15 && age>5)
    {
        std::cout << "il biglietto costa 5 euro";
    }
    return 0;
}