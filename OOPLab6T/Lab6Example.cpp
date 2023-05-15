#include "Lab6Example.h"
#include <iostream>

void MenuExample() {
	std::cout << "     Menu Example   \n";
	std::cout << "    1   Example 1  \n";
	std::cout << "    2   Example 2  \n";
	std::cout << "    3   Example 3  \n";

	std::cout << "    4 or e  Exit \n";

}
void Example()
{
	std::cout << "OOP. Example for laboratory work #6.\n";

	char ch = '5';
	do {
		system("cls");
		MenuExample();
		ch = std::cin.get();

		std::cin.get();

		switch (ch) {
		case '1':  SpaceExample1::mainExample1();   break;
		case '2':  SpaceExample2::mainExample2();   break;
		case '3':  SpaceExample3::mainExample3();   break;
		case '4':  return;
		case 'e':  return;
		}
		std::cout << " Press any key and enter\n";
		ch = std::cin.get();
	} while (ch != '6');

	return ;
}



