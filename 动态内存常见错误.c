#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//列1:(ERR)
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100); //虽然申请了空间，但是出了函数被销毁了，str还是空指针
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world"); //str是空指针，非法访问，程序崩溃
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//列2:(ERR)
//char* GetMemory(void)
//{
//	char p[] = "hello world";//返回栈空间时地址已经被销毁了
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

//列3:(ERR)
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
//	//没有free释放内存
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
//	if (str != NULL) //因为之前对str指向的空间已经被释放了，不能再使用，形成非法访问
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