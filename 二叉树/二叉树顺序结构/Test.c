//#include "heap.h"
//void TestHeap()
//{
//	HP hp;
//	HeapInit(&hp);
//	HeapPush(&hp, 0);
//	HeapPush(&hp, 1);
//	HeapPush(&hp, 4);
//	HeapPush(&hp, 2);
//	HeapPush(&hp, 8);
//	HeapPush(&hp, 9);
//	HeapPrint(&hp);
//	HeapPop(&hp);
//	HeapPrint(&hp);
//	HeapDestory(&hp);
//}
////要求:时间复杂度O(N*logN)
////     空间复杂度O(1)
////void HeapSort(int* a, int size)
////{
////	HP hp;
////	HeapInit(&hp);
////	//O(N*logN)
////	for (int i = 0; i < size; i++)
////	{
////		HeapPush(&hp, a[i]);
////	}
////	size_t j = 0;
////	//O(N*logN)
////	while (!HeapEmpty(&hp))
////	{
////		a[j] = HeapTop(&hp);
////		j++;
////		HeapPop(&hp);
////	}
////}
//void HeapSort(int* a, int size) //堆排序 = 选择排序
//{
//	//向上建堆
//	int n = 1;
//	/*for (child = 1; child < size; child++)
//	{
//		AdjustUp(a, child);
//	}*/
//	//向下建堆
//	for (int n = (size - 1 - 1) / 2; n >= 0; --n)
//	{
//		AdjustDown(a, size, n);
//	}
//	size_t end = size - 1;
//	while (end > 0)
//	{
//		Swap(&a[0], &a[end]);
//		AdjustDown(a, end, 0);
//		--end;
//	}
//}
//void PrintTopK(int* a, int n, int k)
//{
//	// 1. 建堆--用a中前k个元素建堆
//	int* kminHeap = (int*)malloc(sizeof(int) * k);
//	assert(kminHeap);
//
//	for (int i = 0; i < k; ++i)
//	{
//		kminHeap[i] = a[i];
//	}
//
//	// 建小堆
//	for (int j = (k - 1 - 1) / 2; j >= 0; --j)
//	{
//		AdjustDown(kminHeap, k, j);
//	}
//
//	// 2. 将剩余n-k个元素依次与堆顶元素交换，不满则则替换
//	for (int i = k; i < n; ++i)
//	{
//		if (a[i] > kminHeap[0])
//		{
//			kminHeap[0] = a[i];
//			AdjustDown(kminHeap, k, 0);
//		}
//	}
//
//	for (int j = 0; j < k; ++j)
//	{
//		printf("%d ", kminHeap[j]);
//	}
//	printf("\n");
//	free(kminHeap);
//}
//
//void TestTopk()
//{
//	int n = 10000;
//	int* a = (int*)malloc(sizeof(int) * n);
//	srand(time(0));
//	for (size_t i = 0; i < n; ++i)
//	{
//		a[i] = rand() % 1000000;
//	}
//	a[665] = 1001112;
//	a[1231] = 1005652;
//	a[531] = 1000003;
//	a[51] = 1000014;
//	a[12] = 1000225;
//	a[35] = 1000006;
//	a[9999] = 1999999;
//	a[9822] = 1314520;
//	a[1] = 1003030;
//	a[0] = 1100000;
//	PrintTopK(a, n, 10);
//}
//
//int main()
//{
//	/*TestHeap();*/
//	int a[] = { 12,10,11,6,4,0,1,5,3,1,3 };
//	HeapSort(a, sizeof(a) / sizeof(a[0]));
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	TestTopk();
//	return 0;
//}