#include<stdio.h>
int Bubble(const void* e1, const void* e2) //qsort进行整形排序的函数
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void Bubble_sort(void *base,int sz,int width,int(*Bubble)(const void*e1,const void* e2)) //width宽度,计算偏移量
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (Bubble((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width); //两个元素交换
			}
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	Bubble_sort(arr, sz, sizeof(arr[0]), Bubble);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}