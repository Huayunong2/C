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
	SListPushBack(&slist, 1); //Ҫ������ָ�������Ӱ��
	SListPushFront(&slist, 2); //ͷ��
	SListNodePrint(slist);
	SListPopBack(&slist); //βɾ
	SListPopFront(&slist); //ͷɾ
	SListNodePrint(slist);
	SListNode* pos = SListFind(slist, 99);
	if (pos != NULL)
	{
		printf("�ҵ��ˣ�%p\n", pos);
		SListInsert(&slist, pos, 30); //99ǰ����
		SListInsertAfter(pos, 29); //99�����
		SListNodePrint(slist);
		SListEraseAfter(pos); //pos��ɾ��
		SListErase(&slist, pos); //posλ��ɾ��
	}
	SListNodePrint(slist);
}
int main()
{
	/*Test();*/
	test2();
	return 0;
}
