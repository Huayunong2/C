#include <stdio.h>
//##的作用为把##分离的两个符号结合成一个符号
#define CAT(C, num) C##num
//#的作用为让n不被替换，而是让他变成字符串""n""
//#define PRINT(n) printf("the value of "#n" is %d\n", n)
int main()
{
	//#的作用
	//int a = 10;
	////printf("the value of a is %d\n", a);
	//PRINT(a);

	//int b = 20;
	////printf("the value of a is %d\n", b);
	//PRINT(b);
	int Class104 = 10000;
	printf("%d\n", CAT(Class, 104));
}