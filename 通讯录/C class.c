#include "text.h"
/* 1.存放1000个联系人信息
* 2.信息:名字，年龄，电话，住址，性别
* 3.增加联系人
* 4.删除联系人
* 5.查找联系人
* 6.修改联系人
* 7.排序(年龄/名字)
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
		printf("请输入功能:");
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