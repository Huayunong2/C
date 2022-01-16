#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int (*pfARR[4])(int, int) = { Add,Sub,Mul,Div }; //函数指针数组
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int ret = pfARR[i](8, 4);
		printf("%d\n", ret);
	}
	return 0;
}