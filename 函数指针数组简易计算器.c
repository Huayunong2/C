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
void menu()
{
	printf("----1.Add 2.Sub 3.Mul 4.Div 0.Exit----\n");
}
int main()
{
	int input = 0;
	int ret = 0;
	int x = 0;
	int y = 0;
	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };//pfArr是一个函数指针数组，也是个转移表
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器!\n");
			break;
		}
		if (input >= 1 && input<= 4)
		{
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = (*pfArr[input])(x, y);
			printf("ret = %d\n", ret);
		}
		else
		{
			printf("选择错误!\n");
		}
	} while (input);
	return 0;
}