﻿﻿
#include <iostream>
#include <clocale>

int main() {
	::setlocale(LC_ALL, "Russian");

	//Задача 1
	//Напишите программу, в которой пользователь вводит 10 чисел, а программа выводит минимальное из них.

	std::cout << "\t10 чисел\n";
	std::cout << "\tВведите 1-ое число -> ";
	int min{};
	std::cin >> min;
	for (int i = 2; i <= 10; i++) {
		std::cout << "\tВведите " << i << "-ое число -> ";
		int n{};
		std::cin >> n;
		if (n < min) {
			min = n;
		}
	}
	std::cout << "\tМинимальное число " << min << "\n\n";


	//Задача 2
	/*Пользователь вводит число N, после чего вводит N чисел.После каждого введённого числа программа
	сообщает пользователю, больше ли его число, чем предыдущее.Для первого числа в последовательности
	никакое сообщение не выводится.*/

	int n{}, x{};

	std::cout << "\tN чисел\n";
	std::cout << "\tВведите N число -> ";
	std::cin >> n;
	std::cout << "\tВведите 1-ое число из " << n << " чисел -> ";
	std::cin >> x;
	for (int j = 2; j <= n; j++) {
		std::cout << "\tВведите " << j << "-ое число из " << n << " чисел -> ";
		int m{};
		std::cin >> m;
		if (m > x)
			std::cout << "\tБольше\n\n";
		x = m;
	}

	//Задача 3
	//Пользователь вводит неотрицательные числа A и B, а программа возводит число A в степень B.

	int a{}, b{};

	std::cout << "\n\tСтепень числа\n";
	std::cout << "\tВведите число -> ";
	std::cin >> a;
	std::cout << "\tВведите степень числа -> ";
	std::cin >> b;
	if (b == 0)
		a = 1;
	else
		for (int i = 1; i < b; i++)
			a *= a;
	std::cout << "\tОтвет: " << a;

	return 0;
}