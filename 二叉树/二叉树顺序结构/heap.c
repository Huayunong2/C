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
//void Swap(HPDataType* pa, HPDataType* pb) //����
//{
//	HPDataType tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//void AdjustUp(HPDataType* a, size_t child) //���ϵ������γɴ��С��
//{
//	//���±�
//	size_t parent = (child - 1) / 2; //�Һ��Ӽ�һ������һ��
//	while (child > 0)
//	{
//		if (a[child] > a[parent]) //��С���л�
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
//		//ѡ�����Һ���˭��С
//		if (child + 1 < size && a[child + 1] < a[child])
//		{
//			++child;
//		}
//		//�������С�ڸ����򽻻�
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
//void HeapPop(HP* php) //�Ѷ����ݣ���С/���
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