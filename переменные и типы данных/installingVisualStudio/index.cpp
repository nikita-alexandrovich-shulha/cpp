#include <iostream>

void main() {
	setlocale(LC_ALL, "RU");

	std::cout << "Hello World!" << std::endl;
	std::cout << "Congratulation ������!" << std::endl;

	int number = 25;

	std::cout << "����������: " << number << std::endl;

	int a, b;
	int c = 1, d = 2;

	std::cout << "������� ���������� \"a\"" << std::endl;
	std::cin >> a;

	std::cout << "������� ���������� \"b\"" << std::endl;
	std::cin >> b;

	std::cout << "���������� \"a\" = " << a << std::endl;
	std::cout << "���������� \"b\" = " << b << std::endl;
	std::cout << "���������� \"c\" = " << c << std::endl;
	std::cout << "���������� \"d\" = " << d << std::endl;

	/* ���� ������ */

	short num1 = 7; // -32K �� 32� | 2 byte
	int num2 = 7; // -2 bil �� 2 bil | 4 byte
	long num3 = 7; // -oo �� +oo | 8 byte
	float num4 = 7.7f; // ��� int ������ �����
	double num5 = 7.7f; // ��� long ������ �����

	unsigned short num5 = 7; // 0 �� 65� | 2 byte
	unsigned int num6 = 7; // 0 bil �� 4 bil | 4 byte
	unsigned long num7 = 7; // 0 �� +oo | 8 byte

	char character = 'q';

	bool booleanTrue = true;
	bool booleanFalse = false;
}