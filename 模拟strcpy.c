#include<stdio.h>
#include<assert.h>
void my_strcpy(char* dest, const char* src)
{
	assert(src != NULL); //断言，arr2不等于空指针
	assert(dest != NULL);
	while (*dest++ = *src++)
	{
		; //hello的拷贝
	}
}
int main()
 {
	char arr1[] = "xxxxx";
	char arr2[] = "hello";
	printf("改变前:%s\n", arr1);
	my_strcpy(arr1, arr2); //目标空间起始地址 源空间起始地址
	printf("改变后:%s", arr1);
	return 0;
}