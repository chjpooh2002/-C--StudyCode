#include <iostream>

int main(void)
{
	int n;
	int sum = 0;
	for (int i = 1; i < 6; i++)
	{
		std::cout << i << "��° ���� �Է�: ";
		std::cin >> n;
		sum += n;
	}
	std::cout << "�հ�: " << sum << std::endl;
	return 0;
}