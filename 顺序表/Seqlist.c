#include "Seqlist.h"
//size ����Ԫ�ظ��� capacity ���� a ��������
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
	//����������
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
	SeqListCheckCapacity(psl); //����
	int end = psl->size - 1; //��end�������һ��Ԫ��
	while (end >= 0)
	{
		psl->a[end + 1] = psl->a[end]; //��Ԫ������������
		--end;
	}
	psl->a[0] = x; //�������Ԫ�ط�����λ
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
	//�������
	assert(psl);
	assert(pos < psl->size);
	//�ºͼ��
	/*if (pos > psl->size)
	{
		printf("pos Խ��:%d\n", pos);
		return;
	}*/
	SeqListCheckCapacity(psl);
	size_t end = psl->size - 1;
	while (end > pos) //ע����������
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