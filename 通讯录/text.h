#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>

#define NameMax 20
#define SexMax 3
#define AddrMax 30
#define TeleMax 20
#define DataMax 1000
#define Default_SZ 3

//通讯录信息
typedef struct PeoInfo 
{
	char name[NameMax];
	int age;
	char sex[SexMax];
	char addr[AddrMax];
	char tele[TeleMax];
}PeoInfo;

//通讯录大小
typedef struct Addresser
{
	/*PeoInfo data[DataMax];*/
	PeoInfo* data; //存放数据
	int capacity; //记录最大容量
	int sz; //记录有效容量
}Addresser;

//初始化通讯录
void InitAddresser(Addresser* pc);

//添加通讯录
void Add_This(Addresser* pc);

//显示通讯录
void Show_This(const Addresser* pc);

//删除通讯录
void Dele_This(Addresser* pc);

//通讯录查找
void FindPeople(Addresser* pc);

//修改通讯录
void ModifyPeople(Addresser* pc);

//通讯录排序
void QsortPeople(Addresser* pc);

//销毁通讯录
void DestoryAddresser(Addresser* pc);