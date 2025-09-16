#include <iostream>

void main() {
	setlocale(LC_ALL, "RU");

	std::cout << "Hello World!" << std::endl;
	std::cout << "Congratulation Никита!" << std::endl;

	int number = 25;

	std::cout << "Переменная: " << number << std::endl;

	int a, b;
	int c = 1, d = 2;

	std::cout << "Введите переменную \"a\"" << std::endl;
	std::cin >> a;

	std::cout << "Введите переменную \"b\"" << std::endl;
	std::cin >> b;

	std::cout << "Переменная \"a\" = " << a << std::endl;
	std::cout << "Переменная \"b\" = " << b << std::endl;
	std::cout << "Переменная \"c\" = " << c << std::endl;
	std::cout << "Переменная \"d\" = " << d << std::endl;

	/* Типы данных */

	short num1 = 7; // -32K до 32К | 2 byte
	int num2 = 7; // -2 bil до 2 bil | 4 byte
	long num3 = 7; // -oo до +oo | 8 byte
	float num4 = 7.7f; // как int только дробь
	double num5 = 7.7f; // как long только дробь

	unsigned short num5 = 7; // 0 до 65К | 2 byte
	unsigned int num6 = 7; // 0 bil до 4 bil | 4 byte
	unsigned long num7 = 7; // 0 до +oo | 8 byte

	char character = 'q';

	bool booleanTrue = true;
	bool booleanFalse = false;
}