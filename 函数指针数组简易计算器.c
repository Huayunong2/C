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
	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };//pfArr��һ������ָ�����飬Ҳ�Ǹ�ת�Ʊ�
	do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�������!\n");
			break;
		}
		if (input >= 1 && input<= 4)
		{
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = (*pfArr[input])(x, y);
			printf("ret = %d\n", ret);
		}
		else
		{
			printf("ѡ�����!\n");
		}
	} while (input);
	return 0;
}