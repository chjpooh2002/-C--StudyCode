#include <iostream>

int main(void)
{
	char name[100];
	char phonenumber[100];
	std::cout << "이름을 입력하시오: ";
	std::cin >> name;
	std::cout << "전화번호를 입력하시오: ";
	std::cin >> phonenumber;
	std::cout << "이름: " << name << std::endl << "전화번호: " << phonenumber;
	return 0;
}
