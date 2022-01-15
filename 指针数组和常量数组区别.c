#include<stdio.h>
int main()
{
	//因为这是变量所以会开辟不同的空间，则会使用不同的地址储存a
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	if (arr1 == arr2)
		printf("arr1 == arr2\n");
	else
		printf("arr1 != arr2\n");
	//本质上都指向了同一个第一个地址，所以取的都是a的地址
	const char* str1 = "abcdef";
	const char* str2 = "abcdef";
	if (str1 == str2)
		printf("str1 == str2\n");
	else
		printf("str1 != str2\n");
	return 0;
}