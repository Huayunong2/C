//����������
//#include<stdio.h>
//int is_leap_year(int n) //һ�����������д�������ͣ�Ĭ�Ϸ���int����
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
//			printf("%d������", y);
//		}
//	}
//	return 0;
//}
//


//����������
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
//			printf("%d������\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//}


//#include<stdio.h>
//int binary_search(int a[], int k,int s) //���û�д�sz������arr����ô�ͽ������׵�ַ
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
//	return -1; //�Ҳ�����
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d", ret);
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

//ת��
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

//Ƕ�׵���
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

//��������
//#include<stdio.h>
//max_ab(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������:");
//	scanf("%d %d", &a, &b);
//	int max = max_ab(a, b);
//	printf("%d", max);
//}

//��ʽ����
// ��һ:
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
// �ж�:
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
//����:
//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 5))); //printf�����ӡ�ַ���
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
	//������������֪�������д˺���
//	int add(int,int);
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}

//����������:.h�ļ�(ͷ�ļ�)��������,.c�ļ����к�������
//#include<stdio.h>
//#include "add.h"
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int a = add(x,y);
//	printf("%d", a);
//}

//��򵥵ĵݹ�-�����Լ������Լ�
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//}


//�ݹ����ʹ��
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
//	print(num); //print�������Դ�ӡ�����������ֵ�ÿһλ
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


//�����׳�
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


//���n쳲�������(ǰ������֮�͵��ڵ�������)
//�ݹ������⣬����Ч��̫��
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


//˼άѵ����1/1+1/2-1/3+1/4...-1/100=?
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


//ð������
//#include<stdio.h>
//void bubble_sort(int arr[], int s)
//{
//	int i = 0;
//	for (i = 0; i < s - 1; i++) //һ��ð������
//	{
//		int j = 0;
//		if (arr[j] > arr[j + 1])
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
//	//ð������
//	int sz = sizeof(arr) / sizeof(arr[0]); //ȷ������
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