#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");

	short number;

	std::cin >> number;

	if (number > 3)
	{
		std::cout << "Число " << number << " больше чем 3";
	}
}