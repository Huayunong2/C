#include "text.h"
/* 1.存放1000个联系人信息
* 2.信息:名字，年龄，电话，住址，性别
* 3.增加联系人
* 4.删除联系人
* 5.查找联系人
* 6.修改联系人
* 7.排序(年龄/名字)
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
		printf("请输入功能:");
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
			SaveAddress(&Add); //保存通讯录
			DestoryAddresser(&Add); //销毁通讯录
			printf("保存成功!");
			printf("退出通讯录!");
			break;
		default:
			printf("无效输入!\n");
			break;
		}
	} while (input);
}