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
			//(p+i)�൱���õ��˶�ά����ĵ�i�У�Ҳ�൱�ڵ�i�е�������
			//��������ʾ��Ԫ�صĵ�ַ����ʵҲ�ǵ�i�е�һ��Ԫ�صĵ�ַ
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