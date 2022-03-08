#include <stdio.h>
#include <windows.h>
int main()
{
	FILE* pf = fopen("text.txt", "w");
	fputs("abcdef", pf);
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现没有内容!");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);
	printf("再睡眠10秒，此时，再次打开test.txt文件，文件有内容了!");
	Sleep(10000);
	fclose(pf);
	pf = NULL;
	return 0;
}