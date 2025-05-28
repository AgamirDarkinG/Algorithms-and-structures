// homework_1_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int func(int* arr, int size, int n) {
	int count = 0;
	int left = 0;
	int right = size - 1;
	int middle;

	while (left < right) {
		middle = (left + right) / 2;
		if ((arr[middle - 1] <= n) && (arr[middle] > n)) {
			count = size - middle;
			return count;
		}
		else if (arr[middle] > n) {
			right = (middle - 1);
		}
		if (arr[middle] <= n) {
			left = middle + 1;
		}
	}
}

int main()
{
	setlocale(0, "");

	const int size = 9;
	int arr[size] = {14, 16, 19, 32, 32, 32, 56, 69, 72 };

	int n;
	int count;

	std::cout << "Введите точку отсчёта: ";
	std::cin >> n;
	count = func(arr, size, n);
	std::cout << "\nКоличество элементов в массиве больших, чем " << n << ": " << count;
}