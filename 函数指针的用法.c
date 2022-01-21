#include<stdio.h>
int my_test(const char* arr)
{
	printf("函数指针测试\n");
	return 0;
}
int main()
{
	int (*p2)(const char*) = my_test; //定义了一个指向函数的指针变量p2，int表示指针变量返回的类型，括号中表示指针变量向函数所传参的类型
	(*p2)("hehe"); //只用p2也可以，用上逻辑性更强
	return 0;
}