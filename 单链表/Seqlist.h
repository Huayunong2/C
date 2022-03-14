#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLTDataType;
typedef struct SLTistNode
{
	int data; //val
	struct SListNode* next; //存储下一个节点的地址
}SListNode, SLN;
void SListNodePrint(SListNode* phead);
void SListPushBack(SListNode** pphead, SLTDataType x);//尾插
void SListPushFront(SListNode** pphead, SLTDataType x);//头插
void SListPopBack(SListNode** pphead); //尾删
void SListPopFront(SListNode** pphead); //头删
SListNode* SListFind(SListNode* phead, SLTDataType x);
void SListInsert(SListNode** pphead, SListNode* pos, SLTDataType x);//pos之前插入
void SListInsertAfter(SListNode* pos, SLTDataType x);// pos之后插入
void SListErase(SListNode** pphead, SListNode* pos);//pos删除
void SListEraseAfter(SListNode* pos); //pos后删除
void SListDestroy(SListNode** pphead); //清空