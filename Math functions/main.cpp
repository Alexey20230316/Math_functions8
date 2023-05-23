#include<iostream>
#include"MayHeader.h"

	

int main()
{
	setlocale(LC_ALL, "Russian");

	int a = 0;//первое число
	int b = 0;//второе число
	int c = 0;// число введенное с клавы
	int d = 1; // выход

		while (d)
		{
			std::cout << "¬ведите первое число :  "; std::cin >> a;
			std::cout << std::endl << "¬ведите второе число :  "; std::cin >> b;
			std::cout << std::endl << "¬ыберите операцию(0 - выход, 1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) :  ";
			std::cout << std::endl;
			std::cin >> c;
			std::cout << std::endl;

			switch (c)
			{
			case 0:
				d = 0;
				break;
			case 1:
				std::cout << sum(a, b) << std::endl;
				break;
			case 2:
				std::cout << minus(a, b) << std::endl;
				break;
			case 3:
				std::cout << multi(a, b) << std::endl;
				break;
			case 4:
				std::cout << divide(a, b) << std::endl;
				break;
			case 5:
				std::cout << expo(a, b) << std::endl;
				break;
			default:
				std::cout << "Ќет такой операции" << std::endl << std::endl;
			}

		}
	


}


