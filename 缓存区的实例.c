#include <stdio.h>
#include <windows.h>
int main()
{
	FILE* pf = fopen("text.txt", "w");
	fputs("abcdef", pf);
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ�������û������!");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);
	printf("��˯��10�룬��ʱ���ٴδ�test.txt�ļ����ļ���������!");
	Sleep(10000);
	fclose(pf);
	pf = NULL;
	return 0;
}