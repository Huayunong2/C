#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void menu();
struct stu //�ṹ�嶨��
{
	char name[10];
	int age;
	float score;
};
int cmp_int(const void* e1, const void* e2) //qsort������������ĺ���
{
	return *(int*)e1 - *(int*)e2;
}
void CmpInt() //���ζ��庯��
{
	int i = 0;
	int j = 0;
	int arr[10] = { 0 };
	printf("������10������:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &j);
		arr[i] = j;
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int); //������Ԫ��,�����С,����ÿ��Ԫ�ش�С,������
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int cmp_struct_score(const void* e1, const void* e2) //qsort����stu�ṹ���е�score����
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
int cmp_struct_age(const void* e1, const void* e2)//qsort����stu�ṹ���е�age����
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_struct_name(const void* e1, const void* e2)//qsort����stu�ṹ���е�name����
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name); //��ͬ����0,����str1>str2����1,str1<str2����-1
}
void CmpStruct() //�ṹ�嶨�庯��
{
	int i = 0;
	int input = 0;
	struct stu s[] = { {"zhangsan",18,89.5f},{"lisi",19,88.0f},{"wangwu",19,90.5f} };
	int sz = sizeof(s) / sizeof(s[0]);
	do
	{
		printf("1.�÷����� 2.�������� 3.�������� 0.�˳�\n");
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
		printf("1.�������� 2.����ṹ�� 0.�˳�\n");
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