#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//��1:(ERR)
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100); //��Ȼ�����˿ռ䣬���ǳ��˺����������ˣ�str���ǿ�ָ��
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world"); //str�ǿ�ָ�룬�Ƿ����ʣ��������
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//��2:(ERR)
//char* GetMemory(void)
//{
//	char p[] = "hello world";//����ջ�ռ�ʱ��ַ�Ѿ���������
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��3:(ERR)
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//û��free�ͷ��ڴ�
//}
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL) //��Ϊ֮ǰ��strָ��Ŀռ��Ѿ����ͷ��ˣ�������ʹ�ã��γɷǷ�����
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}