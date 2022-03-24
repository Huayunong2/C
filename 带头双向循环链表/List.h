#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef int LTDataType;
typedef struct ListNode {
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;
//void ListInit(LTNode* phead);
LTNode* ListInit();
void ListPrint(LTNode* phead);
LTNode* BuyLTNode(LTDataType x);
void ListPushBack(LTNode* phead, LTDataType x);
void ListPopBack(LTNode* phead);
void ListPushFront(LTNode* phead, LTDataType x);
void ListPopFront(LTNode* phead);
LTNode* ListFind(LTNode* phead, LTDataType x);
void ListInsert(LTNode* pos, LTDataType x); //pos÷Æ«∞≤Â»Î
void ListErase(LTNode* pos);