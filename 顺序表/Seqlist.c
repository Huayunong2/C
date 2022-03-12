#include "Seqlist.h"
//size 数组元素个数 capacity 扩容 a 数组内容
void SeqListPrint(SeqList* psl)
{
	assert(psl);
	for (int i = 0; i < psl->size; ++i)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}
void SeqListInit(SeqList* psl)
{
	assert(psl);
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}
void SeqListDestroy(SeqList* psl)
{
	assert(psl);
	free(psl->a);
	psl->a = NULL;
	psl->capacity = psl->size = 0;
}
void SeqListCheckCapacity(SeqList* psl)
{
	assert(psl);
	if (psl->size == psl->capacity)
	{
		size_t newCapacity = psl->capacity == 0 ? 4 : psl->capacity * 2;
		SLDataType* tmp = realloc(psl->a, sizeof(SLDataType) * newCapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			psl->a = tmp;
			psl->capacity = newCapacity;
		}
	}
}
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	assert(psl);
	//满了则扩容
	SeqListCheckCapacity(psl);
	psl->a[psl->size] = x;
	psl->size++;
}
void SeqListPopBack(SeqList* psl)
{
	assert(psl);
	if (psl->size > 0)
	{
		psl->size--;
	}
}
void SeqListPushFront(SeqList* psl, SLDataType x)
{
	assert(psl);
	SeqListCheckCapacity(psl); //扩容
	int end = psl->size - 1; //让end等于最后一个元素
	while (end >= 0)
	{
		psl->a[end + 1] = psl->a[end]; //让元素依次往后移
		--end;
	}
	psl->a[0] = x; //将加入的元素放在首位
	psl->size++;
}
void SeqListPopFront(SeqList* psl)
{
	assert(psl);
	if (psl->size > 0)
	{
		int begin = 1;
		while (begin < psl->size)
		{
			psl->a[begin - 1] = psl->a[begin];
			++begin;
		}
		--psl->size;
	}
}
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{
	//暴力检查
	assert(psl);
	assert(pos < psl->size);
	//温和检查
	/*if (pos > psl->size)
	{
		printf("pos 越界:%d\n", pos);
		return;
	}*/
	SeqListCheckCapacity(psl);
	size_t end = psl->size - 1;
	while (end > pos) //注意整形提升
	{
		psl->a[end] = psl->a[end - 1];
		--end;
	}
	psl->a[pos] = x;
	psl->size++;
}
void SeqListErase(SeqList* psl, size_t pos)
{
	assert(psl);
	assert(pos < psl->size);
	size_t begin = pos + 1;
	while (begin < psl->size)
	{
		psl->a[begin - 1] = psl->a[begin];
		++begin;
	}
	psl->size--;
}
int SeqListFind(SeqList* psl, SLDataType x)
{
	assert(psl);
	for (int i = 0; i < psl->size; ++i)
	{
		if (psl->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void SeqListModify(SeqList* psl, size_t pos, SLDataType x)
{
    assert(psl);
    assert(pos < psl->size);
    psl->a[pos] = x;
}