#include <iostream>

int SimpleFunc(int a = 10);
//int SimpleFunc(void);

int main(void)
{
	std::cout << SimpleFunc() << std::endl;
	/*�Լ� �����ε��� ����Ʈ ������ ���ÿ� �� ���� �����ؾ� �Ѵ�
	�� ��쿡�� SimpleFunc()�� ������ �� SimpleFunc(int a = 10)�� ȣ��Ǵ��� SimpleFunc(void)��
	ȣ��Ǵ��� ��ȣ�Ͽ� ������ �߻��Ѵ�*/
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