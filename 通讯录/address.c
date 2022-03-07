#include "text.h"
void check_capacity(Addresser* pc) //����
{
	assert(pc);
	if (pc->sz == pc->capacity)
	{
		PeoInfo* tmp = realloc(pc->data, (pc->capacity + 2) * sizeof(PeoInfo));
		if (tmp != NULL)
		{
			pc->data = tmp;
			pc->capacity += 2;
			printf("���ݳɹ�!\n");
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
	//���ļ���������
	FILE* pf = fopen("Addresser.txt", "rb");
	if (pf == NULL)
	{
		printf("InitAddresser:open for reading:%s", strerror(errno));
		return;
	}
	PeoInfo buf = { 0 };
	//��ȡ�ļ�
	while (fread(&buf,sizeof(PeoInfo),1,pf))
	{
		check_capacity(pc);
		pc->data[pc->sz] = buf;
		pc->sz++;
	}
	//�ر��ļ�
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
	printf("�ռ����ͷ�!\n");
}
void Add_This(Addresser* pc) //add
{
	assert(pc);
	printf("------�����ϵ��------\n");
	check_capacity(pc);
	//������ϵ��
	printf("��������ϵ������:");
	scanf("%s", pc->data[pc->sz].name);
	printf("��������ϵ������:");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("��������ϵ���Ա�:");
	scanf("%s", pc->data[pc->sz].sex);
	printf("��������ϵ�˵绰:");
	scanf("%s", pc->data[pc->sz].tele);
	printf("��������ϵ��סַ:");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("���ӳɹ�!\n");
}
void Show_This(const Addresser* pc)
{
	assert(pc);
	int i = 0;
	printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "סַ");
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
			return i; //�ҵ��ˣ����ص�i���±�
		}
	}
	return -1;//�Ҳ���
}
void FindPeople(Addresser* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�����!\n");
	}
	char name[NameMax] = { 0 };
	printf("������Ҫ������ϵ�˵�����:");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("���ҵ��˲�����!\n");
	}
	else
	{
		int i = pos;
		printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%-10s\t%-5d\t%-5s\t%-13s\t%-20s\t\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}
void ModifyPeople(Addresser* pc)
{
	assert(pc);
	char name[NameMax] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷��޸�!\n");
	}
	printf("������Ҫ�޸���ϵ�˵�����:");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("�޸ĵ��˲�����!\n");
	}
	else
	{
		int i = pos;
		printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%-10s\t%-5d\t%-5s\t%-13s\t%-20s\t\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
		printf("��ʼ�޸�ָ����ϵ�˵���Ϣ!\n");
		printf("���޸���ϵ������:");
		scanf("%s", pc->data[i].name);
		printf("���޸���ϵ������:");
		scanf("%d", &(pc->data[i].age));
		printf("���޸���ϵ���Ա�:");
		scanf("%s", pc->data[i].sex);
		printf("���޸���ϵ�˵绰:");
		scanf("%s", pc->data[i].tele);
		printf("���޸���ϵ��סַ:");
		scanf("%s", pc->data[i].addr);
		printf("�޸ĳɹ�!\n");
	}
}
void Dele_This(Addresser* pc)
{
	char name[NameMax] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��!\n");
	}
	printf("������Ҫɾ����ϵ�˵�����:");
	scanf("%s", name);
	//����ָ����ϵ��-->ɾ��
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����!\n");
	}
	else //ɾ��
	{
		int j = 0;
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("ɾ��ָ����ϵ�˳ɹ�!\n");
		SaveAddress(pc);
	}
}
int cmp_struct_age(const void* e1, const void* e2) //qsort������������ĺ���
{

}
void QsortPeople(Addresser* pc)
{

}