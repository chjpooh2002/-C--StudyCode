#include <iostream>

int main(void)
{
	char name[100];
	char phonenumber[100];
	std::cout << "�̸��� �Է��Ͻÿ�: ";
	std::cin >> name;
	std::cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
	std::cin >> phonenumber;
	std::cout << "�̸�: " << name << std::endl << "��ȭ��ȣ: " << phonenumber;
	return 0;
}
