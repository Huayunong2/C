#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void menu();
struct stu //结构体定义
{
	char name[10];
	int age;
	float score;
};
int cmp_int(const void* e1, const void* e2) //qsort进行整形排序的函数
{
	return *(int*)e1 - *(int*)e2;
}
void CmpInt() //整形定义函数
{
	int i = 0;
	int j = 0;
	int arr[10] = { 0 };
	printf("请输入10个整数:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &j);
		arr[i] = j;
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int); //数组首元素,数组大小,数组每个元素大小,函数名
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int cmp_struct_score(const void* e1, const void* e2) //qsort进行stu结构体中的score降序
{
	if (((struct stu*)e1)->score > ((struct stu*)e2)->score)
	{
		return -1;
	}
	else if (((struct stu*)e1)->score < ((struct stu*)e2)->score)
	{
		return 1;
	}
	else
		return 0;
}
int cmp_struct_age(const void* e1, const void* e2)//qsort进行stu结构体中的age升序
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_struct_name(const void* e1, const void* e2)//qsort进行stu结构体中的name降序
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name); //相同返回0,否则str1>str2返回1,str1<str2返回-1
}
void CmpStruct() //结构体定义函数
{
	int i = 0;
	int input = 0;
	struct stu s[] = { {"zhangsan",18,89.5f},{"lisi",19,88.0f},{"wangwu",19,90.5f} };
	int sz = sizeof(s) / sizeof(s[0]);
	do
	{
		printf("1.得分排序 2.名字排序 3.年龄排序 0.退出\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			qsort(s, sz, sizeof(s[0]), cmp_struct_score);
			for (i = 0; i < sz; i++)
			{
				printf("%s %d %f\n", s[i].name, s[i].age, s[i].score);
			}
			break;
		case 2:
			qsort(s, sz, sizeof(s[0]), cmp_struct_name);
			for (i = 0; i < sz; i++)
			{
				printf("%s %d %f\n", s[i].name, s[i].age, s[i].score);
			}
			break;
		case 3:
			qsort(s, sz, sizeof(s[0]), cmp_struct_age);
			for (i = 0; i < sz; i++)
			{
				printf("%s %d %f\n", s[i].name, s[i].age, s[i].score);
			}
			break;
		case 0:
			menu();
			break;
		default:
			printf("NULL!\n");
			break;
		}
	} while (input);
}
void menu()
{
	int input = 0;
	do
	{
		printf("1.排序整形 2.排序结构体 0.退出\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			CmpInt();
			break;
		case 2:
			CmpStruct();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("NULL!\n");
			break;
		}
	} while (input);
}
int main()
{
	menu();
	return 0;
}