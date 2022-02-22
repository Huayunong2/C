#include<stdio.h>


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////Text变量大小为20个字节;
//int main()
//{
//	p = (struct Test*)0x10000;
//	printf("%p\n", p + 0x1); //这里p是结构体指针，0x1就是加跳过一个Text结构体，20个字节转换为十六进制就是14
//	printf("%p\n", (unsigned long)p + 0x1); //p被强制转化为unsigned long，所以被看做一个数字，数字加1就是在原变量上面+1
//	printf("%p\n", (unsigned int*)p + 0x1); //被强制转换为unsigned int*，整形指针+1就是加4
//	//%p用地址打印，不省略；%x用十六进制打印，要省略
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1); //跳过整个数组
//	int* ptr2 = (int*)((int)a + 1); //当指针被强制转换为一个数据类型的时候，那么他就会变成被转换的强制类型，这里将a的第一个元素强制转换为了int类型，就是数字1，所以后面加几就是第几个字节，这里+1就是第二个元素的第一个字节
//	printf("%x %x", ptr1[-1], *ptr2); //ptr1[-1] -> *(ptr1-1)，ptr2是由大小端输出决定的，由于vs是小端输出，低地址在低位输出，因为只偏移了一个字节，所以本该输出0x02000000变成输出2000000
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) }; //逗号表达式，取最右边的值，所以这个二位数组的元素为1,3,5,0,0,0
//	int* p; 
//	p = a[0]; //a[0]表示第一行第一个元素的地址
//	printf("%d", p[0]); //p[0] -> *(p+0)就是第一行第一个元素的地址
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int (*p)[4]; //p是一个数组指针，p能够指向的数组是4个元素
//	p = a; //p[4][2] -> *(*(p+4))+2)
//	printf(" %p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); 
//	//-4 10000000000000000000000000000100 11111111111111111111111111111011 11111111111111111111111111111100 -> FFFFFFFC
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a; //*pa指向a
//	pa++; //pa++，所指向的a向下移动一个地址
//	printf("%s\n", *pa); //对*pa解引用就是a的第一个地址
//	return 0;
//}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n",**++cpp); //解引用++cpp拿到cp的值，再解引用cp拿到c的值
	printf("%s\n",*-- * ++cpp + 3); //解引用++cpp拿到cp"c+1"的值，再解引用--拿到c的值，这时得到c的首元素+3后面的值ER
	printf("%s\n", *cpp[-2] + 3); //同上(cpp[-2] --> *(cpp-2)
	printf("%s\n", cpp[-1][-1] + 1); //同上(cpp[-1][-1] --> *((*cpp-1)-1)
	return 0;
}