#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	/*FILE* pf = fopen("test.txt", "w");*/ //д�ļ�
	FILE* pf = fopen("test.txt", "r"); //���ļ�
	if (NULL == pf) //�ж�
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//д�ļ�(һ��һ��д)
	//char i = 'A';
	//for (i = 'A'; i <= 'Z'; i++)
	//{
	//	fputc(i, pf);
	//	fputc(' ', pf);
	//	/*fputc(i, stdout);*/ //stdin ��׼������ stdout ��׼����� stderr��׼������ ��������������ʱ��Ĭ�ϴ���������
	//}
	
	//���ļ�(һ��һ����)
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//

	//һ��д��
	/*fputs("hello world\n",pf);*/

	//��һ��
	char buf[1000] = { 0 };
	fgets(buf, 1000, pf);
	printf("%s", buf);
	fclose(pf);
	pf = NULL;
	return 0;
}