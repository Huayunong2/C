#include "SeqList.h"
int main()
{
	/*LTNode* plist = NULL;*/
	/*ListInit(&plist);*/
	LTNode* plist = ListInit();
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 1);
	ListPrint(plist);

	ListPopBack(plist);
	ListPopBack(plist);
	printf("\n");
	ListPrint(plist);

	LTNode* pos = ListFind(plist, 2);
	if (pos)
	{
		printf("\n");
		ListInsert(pos, 5);
		ListPrint(plist);

		printf("\n");
		ListErase(pos);
		pos = NULL;
		ListPrint(plist);
	}
	else
		printf("not have this number!");
	
	printf("\n");
	ListPushFront(plist, 100);
	ListPrint(plist);
	printf("\n");
	ListPopFront(plist);
	ListPrint(plist);
    ListDestory(plist);
	phead = NULL;
	return 0;
}