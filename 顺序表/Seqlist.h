#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;
typedef struct SeqList {
	SLDataType* a;
	int size; //存储数据的个数
	int capacity; //存数据的大小
}SeqList;
void SeqListPrint(SeqList* psl); //打印
void SeqListInit(SeqList* psl); //初始化
void SeqListDestroy(SeqList* psl);
void SeqListCheckCapacity(SeqList* psl); //扩容
void SeqListPushBack(SeqList* psl, SLDataType x);
void SeqListPopBack(SeqList* psl);
void SeqListPushFront(SeqList* psl, SLDataType x);
void SeqListPopFront(SeqList* psl);
//在pos位置插入x
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);
//删除pos位置的数据
void SeqListErase(SeqList* psl, size_t pos);
//Find
int SeqListFind(SeqList* psl, SLDataType x);
//修改
void SeqListModify(SeqList* psl, size_t pos, SLDataType x);