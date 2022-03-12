#include "Seqlist.h"
void menu()
{
	printf("*************************************\n");
	printf("***  1.尾插 2.头插 3.尾删 4.头删  ***\n");
	printf("***  5.自插 6.自删 7.查找 8.打印  ***\n");
	printf("***         9.修改 0.退出         ***\n");
	printf("*************************************\n");
}
}
 int main()
{
	 SeqList s;
	 SeqListInit(&s);
	 int option = -1;
	 do
	 {
		 menu();
		 printf("请选择代码:>");
		 scanf("%d", &option);
		 int val = 0;
		 switch (option)
		 {
		 case 1:
			 printf("请输入你要尾插的数据:>");
			 scanf("%d", &val);
			 SeqListPushBack(&s, val);
			 SeqListPrint(&s);
			 break;
		 case 3:
			 printf("尾删成功!\n");
			 SeqListPopBack(&s);
			 SeqListPrint(&s);
		 case 8:
			 SeqListPrint(&s);
		 case 0:
			 printf("退出!\n");
		 }
	 } while (option);
}
 //SeqList s;
	//SeqListInit(&s);
	//SeqListPushBack(&s, 1);
	//SeqListPushBack(&s, 2);
	//SeqListPushBack(&s, 3);
	////时间复杂度O(1)
	//SeqListPushBack(&s, 4);//尾加
	///*SeqListPopBack(&s);*///尾删
	////时间复杂度O(n)
	//SeqListPushFront(&s, 0); //头加
	//SeqListPopFront(&s);//头删
	//SeqListInsert(&s, 0, 99);//在pos位置后插入
	//SeqListErase(&s, 0); //在pos位置删除
	//SeqListPrint(&s);
	//SeqListDestroy(&s);