#include<stdio.h>
#include<ctype.h>
#include<assert.h>
//int main()
//{
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr4[5] = { 0 };
//	memcpy(arr4, arr3+5, 5 * sizeof(arr3[0]));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr4[i]);
//	}
//	return 0;
//}
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;

	}
	return ret;
}
int main()
{
	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr4[5] = { 0 };
	my_memcpy(arr4, arr3, 5*sizeof(arr3[0]));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr4[i]);
	}
	return 0;
}