//#include "heap.h"
//void HeapInit(HP* php)
//{
//	assert(php);
//	php->a = NULL;
//	php->size = 0;
//	php->capacity = 0;
//}
//void HeapPrint(HP* php)
//{
//	assert(php);
//	for (size_t i = 0; i < php->size; i++)
//	{
//		printf("%d ", php->a[i]);
//	}
//	printf("\n");
//}
//void HeapDestory(HP* php)
//{
//	assert(php);
//	free(php->a);
//	php->a = NULL;
//	php->size = php->capacity = 0;
//}
//void Swap(HPDataType* pa, HPDataType* pb) //交换
//{
//	HPDataType tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//void AdjustUp(HPDataType* a, size_t child) //向上调整，形成大堆小堆
//{
//	//找下标
//	size_t parent = (child - 1) / 2; //右孩子减一减二都一样
//	while (child > 0)
//	{
//		if (a[child] > a[parent]) //大小堆切换
//		{
//			Swap(&a[child], &a[parent]);
//			child = parent;
//			parent = (child - 1) / 2;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//void HeapPush(HP* php, HPDataType x)
//{
//	assert(php);
//	if (php->size == php->capacity)
//	{
//		size_t newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
//		HPDataType* tmp = realloc(php->a, sizeof(HPDataType) * newcapacity);
//		if (tmp == NULL)
//		{
//			printf("realloc fail!");
//			exit(-1);
//		}
//		php->a = tmp;
//		php->capacity = newcapacity;
//	}
//	php->a[php->size] = x;
//	php->size++;
//	AdjustUp(php->a, php->size - 1);
//}
//void AdjustDown(HPDataType* a, size_t size, size_t root)
//{
//	size_t parent = root;
//	size_t child = parent * 2 + 1;
//	while (child < size)
//	{
//		//选出左右孩子谁更小
//		if (child + 1 < size && a[child + 1] < a[child])
//		{
//			++child;
//		}
//		//如果孩子小于父亲则交换
//		if (a[child] < a[parent])
//		{
//			Swap(&a[child], &a[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//void HeapPop(HP* php) //堆顶数据，最小/最大
//{
//	assert(php);
//	assert(php->size > 0);
//	Swap(&php->a[0], &php->a[php->size - 1]);
//	php->size--;
//	AdjustDown(php->a, php->size, 0);
//}
//bool HeapEmpty(HP* php)
//{
//	assert(php);
//	return php->size == 0;
//}
//size_t HeapSize(HP* php)
//{
//	assert(php);
//	return php->size;
//}
//HPDataType HeapTop(HP* php)
//{
//	assert(php);
//	assert(php->size > 0);
//	return php->a[0];
//}