#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "hyunong@qq.com";
	const char* p = "@.";
	char buf[50] = { 0 };
	strcpy(buf, arr);
	/*char* str = strtok(buf, p);
	printf("%s\n", str);
	str = strtok(NULL, p);
	printf("%s\n", str);
	str = strtok(NULL, p);
	printf("%s\n", str);
	str = strtok(NULL, p);
	printf("%s\n", str);*/
	char* str = NULL;
	for (str = strtok(buf, p); str != NULL; str = strtok(NULL, p))
	{
		printf("%s\n", str);
	}
	return 0;
}