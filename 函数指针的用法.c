#include<stdio.h>
int my_test(const char* arr)
{
	printf("����ָ�����\n");
	return 0;
}
int main()
{
	int (*p2)(const char*) = my_test; //������һ��ָ������ָ�����p2��int��ʾָ��������ص����ͣ������б�ʾָ��������������ε�����
	(*p2)("hehe"); //ֻ��p2Ҳ���ԣ������߼��Ը�ǿ
	return 0;
}