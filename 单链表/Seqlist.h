#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLTDataType;
typedef struct SLTistNode
{
	int data; //val
	struct SListNode* next; //�洢��һ���ڵ�ĵ�ַ
}SListNode, SLN;
void SListNodePrint(SListNode* phead);
void SListPushBack(SListNode** pphead, SLTDataType x);//β��
void SListPushFront(SListNode** pphead, SLTDataType x);//ͷ��
void SListPopBack(SListNode** pphead); //βɾ
void SListPopFront(SListNode** pphead); //ͷɾ
SListNode* SListFind(SListNode* phead, SLTDataType x);
void SListInsert(SListNode** pphead, SListNode* pos, SLTDataType x);//pos֮ǰ����
void SListInsertAfter(SListNode* pos, SLTDataType x);// pos֮�����
void SListErase(SListNode** pphead, SListNode* pos);//posɾ��
void SListEraseAfter(SListNode* pos); //pos��ɾ��
void SListDestroy(SListNode** pphead); //���