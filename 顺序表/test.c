#include "Seqlist.h"
void menu()
{
	printf("*************************************\n");
	printf("***  1.β�� 2.ͷ�� 3.βɾ 4.ͷɾ  ***\n");
	printf("***  5.�Բ� 6.��ɾ 7.���� 8.��ӡ  ***\n");
	printf("***            0.�˳�             ***\n");
	printf("*************************************\n");
}
 int main()
{
	 SeqList s;
	 SeqListInit(&s);
	 int option = -1;
	 do
	 {
		 menu();
		 printf("��ѡ�����:>");
		 scanf("%d", &option);
		 int val = 0;
		 switch (option)
		 {
		 case 1:
			 printf("��������Ҫβ�������:>");
			 scanf("%d", &val);
			 SeqListPushBack(&s, val);
			 SeqListPrint(&s);
			 break;
		 case 3:
			 printf("βɾ�ɹ�!\n");
			 SeqListPopBack(&s);
			 SeqListPrint(&s);
		 case 8:
			 SeqListPrint(&s);
		 case 0:
			 printf("�˳�!\n");
		 }
	 } while (option);
}
 //SeqList s;
	//SeqListInit(&s);
	//SeqListPushBack(&s, 1);
	//SeqListPushBack(&s, 2);
	//SeqListPushBack(&s, 3);
	////ʱ�临�Ӷ�O(1)
	//SeqListPushBack(&s, 4);//β��
	///*SeqListPopBack(&s);*///βɾ
	////ʱ�临�Ӷ�O(n)
	//SeqListPushFront(&s, 0); //ͷ��
	//SeqListPopFront(&s);//ͷɾ
	//SeqListInsert(&s, 0, 99);//��posλ�ú����
	//SeqListErase(&s, 0); //��posλ��ɾ��
	//SeqListPrint(&s);
	//SeqListDestroy(&s);