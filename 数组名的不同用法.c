#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a)); //数组名单独放在sizeof内部，计算整个数组的大小，16个字节
	printf("%d\n", sizeof(a + 0)); //a表示首元素地址，a+0还是数组首元素地址，4/8个字节
	printf("%d\n", sizeof(*a)); //a表示的首元素地址，解引用后还是首元素地址，4
	printf("%d\n", sizeof(a + 1)); //a表示首元素的地址，a+1后是第二个元素的地址，4/8
	printf("%d\n", sizeof(a[1])); //表示第二个元素地址，4
	printf("%d\n", sizeof(&a)); //表示整个数组的地址，数组的地址也是地址，4/8
	printf("%d\n", sizeof(*&a)); //&a表示整个数组的地址，相当于int(*)[4]数组指针，解引用后就是4个int类型的数组，16
	printf("%d\n", sizeof(&a+1)); //跳过一个数组后的地址，4/8
	printf("%d\n", sizeof(&a[0])); //整个数组中第一个元素的地址，4/8
	printf("%d\n", sizeof(&a[0]+1)); //第二个元素的地址，4/8
	return 0;
}