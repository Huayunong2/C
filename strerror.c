#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE* pf = fopen("text.txt","r");
	if (NULL == pf)
	{
		printf("%s\n", strerror(errno));
	}
	return 0;
}