#include <iostream>

int SimpleFunc(int a = 10);
//int SimpleFunc(void);

int main(void)
{
	std::cout << SimpleFunc() << std::endl;
	/*함수 오버로딩과 디폴트 선언을 동시에 할 때는 주의해야 한다
	이 경우에는 SimpleFunc()을 선언할 때 SimpleFunc(int a = 10)이 호출되는지 SimpleFunc(void)가
	호출되는지 모호하여 에러가 발생한다*/
	return 0;
}

int SimpleFunc(int a)
{
	return a + 1;
}

/*
int SimpleFunc(void)
{
	return 10;
}
*/