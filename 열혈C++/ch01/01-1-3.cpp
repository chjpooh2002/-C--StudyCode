#include <iostream>

int main(void)
{
	int n;
	std::cout << "숫자를 입력하시오: ";
	std::cin >> n;
	for (int i = 1; i < 10; i++)
	{
		std::cout << n << "x" << i << " = " << n * i << std::endl;
	}
	return 0;
}