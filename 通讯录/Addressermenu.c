#include "text.h"
/* 1.���1000����ϵ����Ϣ
* 2.��Ϣ:���֣����䣬�绰��סַ���Ա�
* 3.������ϵ��
* 4.ɾ����ϵ��
* 5.������ϵ��
* 6.�޸���ϵ��
* 7.����(����/����)
*/
enum Oprion
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};
void menu()
{
	printf("*************************************************\n");
	printf("***** 1.add     2.del            ****************\n");
	printf("***** 3.search  4.modify  5.show ****************\n");
	printf("***** 6.sort    0.exit           ****************\n");
	printf("*************************************************\n");
}
int main()
{
	int input = 0;
	Addresser Add;
	InitAddresser(&Add);
	do
	{
		menu();
		printf("�����빦��:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Add_This(&Add);
			break;
		case DEL:
			Dele_This(&Add);
			break;
		case SEARCH:
			FindPeople(&Add);
			break;
		case MODIFY:
			ModifyPeople(&Add);
			break;
		case SHOW:
			Show_This(&Add);
			break;
		case SORT:
			QsortPeople(&Add);
			break;
		case EXIT:
			SaveAddress(&Add); //����ͨѶ¼
			DestoryAddresser(&Add); //����ͨѶ¼
			printf("����ɹ�!");
			printf("�˳�ͨѶ¼!");
			break;
		default:
			printf("��Ч����!\n");
			break;
		}
	} while (input);
}