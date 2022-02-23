#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
	/*if (*str1 > *str2)
		return 1;

	else
		return -1;*/

}
int main()
{
	char arr1[] = "abc";
	char arr2[] = "ab";
	int ret = my_strcmp(arr1, arr2);
	if (ret > 0)
	{
		printf("arr1 > arr2");
	}
	else if (ret == 0)
	{
		printf("arr1 = arr2");
	}
	else
	{
		printf("arr1 < arr2");
	}
	return 0;
}