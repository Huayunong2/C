#include <stdio.h>
void FindArr(int arr[3][3], int r, int c, int k)
{
	int x = 0;
	int y = c - 1;
	while (y >= 0 && x <= r - 1)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			printf("找到了，下标为:x=%d y=%d\n", x, y);
			break;
		}
	}
	printf("找不到这个数!\n");
}
int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 0;
	scanf("%d", &k);
	FindArr(arr, 3, 3, k);
	return 0;

}