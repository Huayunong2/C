#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strstr(const char* str,const char* substr)
{
	const char* s1 = str;
	const char* s2 = substr;
	const char* cur = str;
	assert(str && substr);
	if (*substr == '\0')
	{
		return (char*)str;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = substr;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abbcca";
	char arr2[] = "bbc";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("Ã»ÕÒµ½!\n");
	}
	else
	{
		printf("%s", ret);
	}
	return 0;
}