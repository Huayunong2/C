#include<stdio.h>
void print(int(*p)[5], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", *(*(p+i)+ j));
			//(p+i)相当于拿到了二维数组的第i行，也相当于第i行的数组名
			//数组名表示首元素的地址，其实也是第i行第一个元素的地址
		}
		printf("\n");
	}
}
int main()
{
	int i = 0;
	int arr[3][5] = { {2,3,4,5,6} , {7,8,9,6,5} , {2,5,7,4,1} };
	print(arr, 3, 5);
}