#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;
typedef struct SeqList {
	SLDataType* a;
	int size; //�洢���ݵĸ���
	int capacity; //�����ݵĴ�С
}SeqList;
void SeqListPrint(SeqList* psl); //��ӡ
void SeqListInit(SeqList* psl); //��ʼ��
void SeqListDestroy(SeqList* psl);
void SeqListCheckCapacity(SeqList* psl); //����
void SeqListPushBack(SeqList* psl, SLDataType x);
void SeqListPopBack(SeqList* psl);
void SeqListPushFront(SeqList* psl, SLDataType x);
void SeqListPopFront(SeqList* psl);
//��posλ�ò���x
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);
//ɾ��posλ�õ�����
void SeqListErase(SeqList* psl, size_t pos);
//Find
int SeqListFind(SeqList* psl, SLDataType x);