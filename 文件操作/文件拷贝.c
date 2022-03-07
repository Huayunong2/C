#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	FILE* pr = fopen("data.txt","r");
	if (NULL == pr)
	{
		printf("open pr:%s", strerror(errno));
		return 0;
	}
	FILE* pw = fopen("data2.txt", "w");
	if(NULL == pw)
	{
		printf("open pw:%s", strerror(errno));
		fclose(pr);
		pr = NULL;
		return 0;
	}
	int ch = 0;
	while (((ch = fgetc(pr)) != EOF))
	{
		fputc(ch, pw);
	}
	printf("¿½±´³É¹¦!");
	fclose(pr);
	pr = NULL;
	fclose(pw);
	pw = NULL;
	return 0;
}