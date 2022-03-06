#include<stdio.h>
int cheak_sys()
{
	/*int a = 1;
	return (*(char*)&a);*/
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = cheak_sys();
	if (ret == 1)
	{
		printf("Ð¡¶Ë");
	}
	else
	{
		printf("´ó¶Ë");
	}
	return 0;
}