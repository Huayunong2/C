#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf_s("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�");
			break;
		}
		else
		{
			printf("�����������������")��
		}
		if (i == 3)
		{
			printf("����ȫ���˳�����");
		}
		return 0;
	}
}