#include <stdio.h>
//##������Ϊ��##������������Ž�ϳ�һ������
#define CAT(C, num) C##num
//#������Ϊ��n�����滻��������������ַ���""n""
//#define PRINT(n) printf("the value of "#n" is %d\n", n)
int main()
{
	//#������
	//int a = 10;
	////printf("the value of a is %d\n", a);
	//PRINT(a);

	//int b = 20;
	////printf("the value of a is %d\n", b);
	//PRINT(b);
	int Class104 = 10000;
	printf("%d\n", CAT(Class, 104));
}