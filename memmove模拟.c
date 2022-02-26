#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (src > dest) //从前向后打印
	{
		while(num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else //src<=dest,从后向前打印
	{
		while(num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr4[5] = { 0 };
	my_memmove(arr3+2, arr3, 5 * sizeof(arr3[0]));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}
