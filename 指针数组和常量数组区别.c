#include<stdio.h>
int main()
{
	//��Ϊ���Ǳ������ԻῪ�ٲ�ͬ�Ŀռ䣬���ʹ�ò�ͬ�ĵ�ַ����a
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	if (arr1 == arr2)
		printf("arr1 == arr2\n");
	else
		printf("arr1 != arr2\n");
	//�����϶�ָ����ͬһ����һ����ַ������ȡ�Ķ���a�ĵ�ַ
	const char* str1 = "abcdef";
	const char* str2 = "abcdef";
	if (str1 == str2)
		printf("str1 == str2\n");
	else
		printf("str1 != str2\n");
	return 0;
}