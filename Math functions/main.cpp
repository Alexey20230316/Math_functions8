#include<iostream>
#include"MayHeader.h"

	

int main()
{
	setlocale(LC_ALL, "Russian");

	int a = 0;//������ �����
	int b = 0;//������ �����
	int c = 0;// ����� ��������� � �����
	int d = 1; // �����

		while (d)
		{
			std::cout << "������� ������ ����� :  "; std::cin >> a;
			std::cout << std::endl << "������� ������ ����� :  "; std::cin >> b;
			std::cout << std::endl << "�������� ��������(0 - �����, 1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������) :  ";
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
				std::cout << "��� ����� ��������" << std::endl << std::endl;
			}

		}
	


}


