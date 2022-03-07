#include "text.h"
void check_capacity(Addresser* pc) //扩容
{
	assert(pc);
	if (pc->sz == pc->capacity)
	{
		PeoInfo* tmp = realloc(pc->data, (pc->capacity + 2) * sizeof(PeoInfo));
		if (tmp != NULL)
		{
			pc->data = tmp;
			pc->capacity += 2;
			printf("增容成功!\n");
		}
		else
		{
			printf("check_capacity():%s\n", strerror(errno));
		}
	}
}
void InitAddresser(Addresser* pc)
{
	assert(pc);
	pc->sz = 0;
	PeoInfo* tmp = (PeoInfo*)malloc(3 * sizeof(PeoInfo));
	if (NULL != tmp)
	{
		pc->data = tmp;
	}
	else
	{
		printf("InitAddresser():%s", strerror(errno));
		return;
	}
	pc->capacity = Default_SZ;
	//从文件加载数据
	FILE* pf = fopen("Addresser.txt", "rb");
	if (pf == NULL)
	{
		printf("InitAddresser:open for reading:%s", strerror(errno));
		return;
	}
	PeoInfo buf = { 0 };
	//读取文件
	while (fread(&buf,sizeof(PeoInfo),1,pf))
	{
		check_capacity(pc);
		pc->data[pc->sz] = buf;
		pc->sz++;
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}
void SaveAddress(Addresser* pc)
{
	FILE* pf = fopen("Addresser.txt", "wb");
	if (pf == NULL)
	{
		printf("SaveAddresser:%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}
void DestoryAddresser(Addresser* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
	printf("空间已释放!\n");
}
void Add_This(Addresser* pc) //add
{
	assert(pc);
	printf("------添加联系人------\n");
	check_capacity(pc);
	//输入联系人
	printf("请输入联系人姓名:");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入联系人年龄:");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入联系人性别:");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入联系人电话:");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入联系人住址:");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("增加成功!\n");
}
void Show_This(const Addresser* pc)
{
	assert(pc);
	int i = 0;
	printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "住址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s\t%-5d\t%-5s\t%-13s\t%-20s\t\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}

}
int FindByName(const Addresser* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i; //找到了，返回第i个下标
		}
	}
	return -1;//找不到
}
void FindPeople(Addresser* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法查找!\n");
	}
	char name[NameMax] = { 0 };
	printf("请输入要查找联系人的名字:");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("查找的人不存在!\n");
	}
	else
	{
		int i = pos;
		printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "住址");
		printf("%-10s\t%-5d\t%-5s\t%-13s\t%-20s\t\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}
void ModifyPeople(Addresser* pc)
{
	assert(pc);
	char name[NameMax] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法修改!\n");
	}
	printf("请输入要修改联系人的名字:");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("修改的人不存在!\n");
	}
	else
	{
		int i = pos;
		printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "住址");
		printf("%-10s\t%-5d\t%-5s\t%-13s\t%-20s\t\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
		printf("开始修改指定联系人的信息!\n");
		printf("请修改联系人姓名:");
		scanf("%s", pc->data[i].name);
		printf("请修改联系人年龄:");
		scanf("%d", &(pc->data[i].age));
		printf("请修改联系人性别:");
		scanf("%s", pc->data[i].sex);
		printf("请修改联系人电话:");
		scanf("%s", pc->data[i].tele);
		printf("请修改联系人住址:");
		scanf("%s", pc->data[i].addr);
		printf("修改成功!\n");
	}
}
void Dele_This(Addresser* pc)
{
	char name[NameMax] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除!\n");
	}
	printf("请输入要删除联系人的名字:");
	scanf("%s", name);
	//查找指定联系人-->删除
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在!\n");
	}
	else //删除
	{
		int j = 0;
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("删除指定联系人成功!\n");
		SaveAddress(pc);
	}
}
int cmp_struct_age(const void* e1, const void* e2) //qsort进行整形排序的函数
{

}
void QsortPeople(Addresser* pc)
{

}