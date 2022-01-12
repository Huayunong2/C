#include<stdio.h>
int main()
{
	const int n = 10;
	int num = 20;
	//const修饰指针变量的时候
	//const如果放在*的左边，修饰的是*p，表示指针指向的内容，是不能通过指针来改变的，但是指针变量本身是可以修改的
	const int* p = &n; //p是指针变量
	*p = 20; //*p是指针指向的内容
	int *const pa = &num;
	//当const放在*的右边时，修饰的是p，表示指针变量本身不能被改变，但是可以改变指针指向的内容
	pa = 30;
	return 0;
}