#include "text.h"
/* 1.���1000����ϵ����Ϣ
* 2.��Ϣ:���֣����䣬�绰��סַ���Ա�
* 3.������ϵ��
* 4.ɾ����ϵ��
* 5.������ϵ��
* 6.�޸���ϵ��
* 7.����(����/����)
*/
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
		case 1:
			Add_This(&Add);
			break;
		case 2:
			Dele_This(&Add);
			break;
		case 3:
			FindPeople(&Add);
			break;
		case 4:
			ModifyPeople(&Add);
			break;
		case 5:
			Show_This(&Add);
			break;
		case 6:
			QsortPeople(&Add);
			break;
		case 0:
			printf("Exit Addresser!");
			break;
		default:
			printf("Err!");
			break;
		}
	} while (input);
}