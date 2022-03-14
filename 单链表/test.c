#include "Seqlist.h"
void Test()
{
	SListNode* slist = NULL;
	SListNode* n1 = malloc(sizeof(SListNode));
	SListNode* n2 = malloc(sizeof(SListNode));
	SListNode* n3 = malloc(sizeof(SListNode));
	slist = n1;
	SListNodePrint(slist);
}
void test2()
{
	SListNode* slist = NULL;
	SListPushBack(&slist, 13);
	SListPushBack(&slist, 99);
	SListPushBack(&slist, 1); //要传二级指针过才能影响
	SListPushFront(&slist, 2); //头插
	SListNodePrint(slist);
	SListPopBack(&slist); //尾删
	SListPopFront(&slist); //头删
	SListNodePrint(slist);
	SListNode* pos = SListFind(slist, 99);
	if (pos != NULL)
	{
		printf("找到了：%p\n", pos);
		SListInsert(&slist, pos, 30); //99前插入
		SListInsertAfter(pos, 29); //99后插入
		SListNodePrint(slist);
		SListEraseAfter(pos); //pos后删除
		SListErase(&slist, pos); //pos位置删除
	}
	SListNodePrint(slist);
}
int main()
{
	/*Test();*/
	test2();
	return 0;
}
