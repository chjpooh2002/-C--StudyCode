#include <iostream>

int main(void)
{
	int n;
	std::cout << "���ڸ� �Է��Ͻÿ�: ";
	std::cin >> n;
	for (int i = 1; i < 10; i++)
	{
		std::cout << n << "x" << i << " = " << n * i << std::endl;
	}
	return 0;
}