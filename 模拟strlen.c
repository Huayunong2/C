#include<stdio.h>
#include<assert.h>
size_t my_strlen(const char* str)
{
	assert(str);
	size_t count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr1[] = "hello";
	printf("ַ字符串个数为:%d", my_strlen(arr1));
}