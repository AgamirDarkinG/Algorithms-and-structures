// homework_2_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

int fibonacci(int n)
{
    return n < 2 ? n : fibonacci(n - 2) + fibonacci(n - 1);
}

int main() {
    
    std::cout << "Введите число: ";
    int num{};
    std::cin >> num;

    for (int i = 0; i < num; ++i)
    {
        std::cout << fibonacci(i) << " ";
    }
    return 0;
}