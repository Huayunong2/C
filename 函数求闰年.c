//函数求闰年
#include<stdio.h>
int is_leap_year(int n) //一个函数如果不写返回类型，默认返回int类型
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y) == 1)
		{
			printf("%d是闰年", y);
		}
	}
	return 0;
}

