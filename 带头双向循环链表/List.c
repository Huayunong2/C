#include "SeqList.h"
LTNode* BuyLTNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		printf("malloc fail!\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
//void ListInit(LTNode** pphead)
//{
//	assert(pphead);
//	*pphead = BuyLTNode(0);
//	(*pphead)->next = *pphead;
//	(*pphead)->prev = *pphead;
//}
LTNode* ListInit()
{
	LTNode* phead = BuyLTNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
void ListPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
}
void ListInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newnode = BuyLTNode(x);
	pos->prev->next = newnode;
	newnode->prev = pos->prev;
	pos->prev = newnode;
	newnode->next = pos;
	/* LTNode* newnode = BuyLTNode(x);
	* LTNode* posPrev = pos->prev;
	* newnode->next = pos;
	* pos->prev = newnode;
	* posPrev->next = newnode;
	* newnode->prev = posPrev;
	*/
}
//驼峰法
//函数和类型所有单词首字母大写
//变量第一个单词小写，后续单词首字母大写
void ListErase(LTNode* pos) //删除pos前一个值
{
	assert(pos);
	LTNode* p = pos->prev;
	LTNode* n = pos->next;
	free(pos); //在这里置空只会改变形参的值，不改变实参的值
	p->next = n;
	n->prev = p;
}
void ListPushBack(LTNode* phead, LTDataType x)
{
	/*assert(phead);
	LTNode* tail = phead->prev;
	LTNode* newnode = BuyLTNode(x);
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;*/
	ListInsert(phead, x);
}
void ListPopBack(LTNode* phead)
{
	assert(phead);//链表为空
	assert(phead->next != phead);//仅有哨兵位
	ListErase(phead->prev);
	/*LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;
	free(tail);
	tail = NULL;
	tailPrev->next = phead;
	phead->prev = tailPrev;*/
}
void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	ListInsert(phead->next, x);
}
void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListErase(phead->next);
}
LTNode* ListFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}