#include <iostream>

int main(void)
{
	int money;
	while (1)
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> money;
		if (money == -1)
			break;
		std::cout << "�̹� �� �޿�: " << 50 + money * 0.12 << "����" << std::endl;
	}
	std::cout << "���α׷��� �����մϴ�.";
	return 0;
}