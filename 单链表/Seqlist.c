#include "Seqlist.h"
void SListNodePrint(SListNode* phead)
{
	/*assert(phead);*/ //链表可能为空,assert过于暴力会直接终止程序
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
SListNode* BuySListNode(SLTDataType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
		if (newnode == NULL)
		{
			printf("malloc fail!");
			exit(-1);
		}
		else
		{
			newnode->data = x;
			newnode->next = NULL;
		}
		return newnode;
}
void SListPushBack(SListNode** pphead, SLTDataType x)
{
	assert(pphead);
	SListNode* newnode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找尾
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void SListPushFront(SListNode** pphead, SLTDataType x)
{
	assert(pphead);
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
void SListPopBack(SListNode** pphead)
{
	/*assert(pphead);*/
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SListNode* prev = NULL;
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;

		//	Second
		//	while(tail->next->next != NULL)
		//	{
		//		tail = tail->next;
		//	}
		//	free(tail->next);
		//	tail->next = NULL;
	}
}
void SListPopFront(SListNode** pphead)
{
	assert(pphead);
	if (*pphead == NULL)
	{
		return;
	}
	else
	{
		SListNode* next = *pphead;
		*pphead = (*pphead)->next;
		free(next);
		next = NULL;
	}
}
SListNode* SListFind(SListNode* phead, SLTDataType x)
{
	if (phead == NULL)
	{
		return;
	}
	SListNode* cur = phead;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void SListInsert(SListNode** pphead, SListNode* pos, SLTDataType x)
{
	assert(pphead);
	assert(pos);
	if (pos == *pphead)
	{
		SListPushFront(pphead, x);
	}
	else
	{
		SListNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		SListNode* newnode = BuySListNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}
void SListInsertAfter(SListNode* pos, SLTDataType x)
{
	assert(pos);
	SListNode* next = pos->next;
	SListNode* newnode = BuySListNode(x);
	pos->next = newnode;
	newnode->next = next;
}
void SListErase(SListNode** pphead, SListNode* pos)
{
	assert(pphead);
	assert(pos);
	SListNode* prev = *pphead;
	if (*pphead == pos)
	{
		SListPopFront(pphead);
	}
	else
	{
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	SListNode* next = pos->next;
	if (next != NULL)
	{
		pos->next = next->next;
		free(next);
		next = NULL;
	}
}
void SListDestroy(SListNode** pphead)
{
	assert(pphead);
	SListNode* cur = *pphead;
	while (cur != NULL)
	{
		SListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}