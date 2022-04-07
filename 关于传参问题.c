#include <stdio.h>
void Test1(int* pp1, int* pp2)
{
	int* tmp = pp1;
	pp1 = pp2;
	pp2 = tmp;
}
void Test2(int** pp1, int** pp2)
{
	int* tmp = *pp1;
	*pp1 = *pp2;
	*pp2 = tmp;
}
int main()
{
	int a = 20;
	int b = 30;
	int* p1 = &a;
	int* p2 = &b;


	printf("p1:%p\n", p1);
	printf("p2:%p\n", p2);
	Test1(p1, p2);
	printf("----------传入后----------\n");
	printf("p1:%p\n", p1);
	printf("p2:%p\n", p2);

	printf("\n\n\n");

	printf("p1:%p\n", p1);
	printf("p2:%p\n", p2);
	Test2(&p1, &p2);
	printf("----------传入后----------\n");
	printf("p1:%p\n", p1);
	printf("p2:%p\n", p2);
	//结论:要改变谁就传谁的地址，接收谁的地址就加一层指针
	return 0;
}