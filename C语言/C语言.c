//函数求闰年
//#include<stdio.h>
//int is_leap_year(int n) //一个函数如果不写返回类型，默认返回int类型
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d是闰年", y);
//		}
//	}
//	return 0;
//}
//


//函数求素数
//#include<stdio.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= n - 1; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d是素数\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//}


//#include<stdio.h>
//int binary_search(int a[], int k,int s) //如果没有传sz，仅传arr，那么就仅传了首地址
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1; //找不到了
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d", ret);
//	}
//	return 0;
//}

//#include<stdio.h>
//void add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//转换
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "***********";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}

//嵌套调用
//#include<stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//初级调用
//#include<stdio.h>
//max_ab(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数:");
//	scanf("%d %d", &a, &b);
//	int max = max_ab(a, b);
//	printf("%d", max);
//}

//链式访问
// 列一:
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
// 列二:
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", strcpy(arr1, arr2));
//	return 0;
//}
//列三:
//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 5))); //printf后面打印字符数
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
	//声明函数，告知本程序有此函数
//	int add(int,int);
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}

//函数的声明:.h文件(头文件)进行声明,.c文件进行函数定义
//#include<stdio.h>
//#include "add.h"
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int a = add(x,y);
//	printf("%d", a);
//}

//最简单的递归-函数自己调用自己
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//}


//递归初步使用
//#include<stdio.h>
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num); //print函数可以打印参数部分数字的每一位
//	return 0;
//}

//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//函数阶乘
//#include<stdio.h>
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}


//求第n斐波那契数(前两个数之和等于第三个数)
//递归可以求解，但是效率太低
//#include<stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}


//思维训练，1/1+1/2-1/3+1/4...-1/100=?
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double j = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		j += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%f\n", j);
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//冒泡排序
//#include<stdio.h>
//void bubble_sort(int arr[], int s)
//{
//	int i = 0;
//	for (i = 0; i < s - 1; i++) //一趟冒泡排序
//	{
//		int j = 0;
//		for(j = 0; j < sz - 1 - i; j++)
//      if (arr[j] > arr[j + 1])
//		{
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//	printf("%d", arr[9]);
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//冒泡排序
//	int sz = sizeof(arr) / sizeof(arr[0]); //确定趟数
//	bubble_sort(arr, sz);
//	return 0;
//}

//#include<stdio.h>
//int f(int x, int y)
//{
//	return x / y + x % y;
//}
//int main()
//{
//	float a = 1.5, b = 2.5, c = f(a, b);
//	printf("%.2f", c);
//	return 0;
//}