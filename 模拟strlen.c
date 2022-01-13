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
	printf("×Ö·û´®¸öÊıÎª:%d", my_strlen(arr1));
}