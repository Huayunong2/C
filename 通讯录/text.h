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

//ͨѶ¼��Ϣ
typedef struct PeoInfo
{
	char name[NameMax];
	int age;
	char sex[SexMax];
	char addr[AddrMax];
	char tele[TeleMax];
}PeoInfo;

//ͨѶ¼��С
typedef struct Addresser
{
	/*PeoInfo data[DataMax];*/
	PeoInfo* data; //�������
	int capacity; //��¼�������
	int sz; //��¼��Ч����
}Addresser;

//��ʼ��ͨѶ¼
void InitAddresser(Addresser* pc);

//���ͨѶ¼
void Add_This(Addresser* pc);

//��ʾͨѶ¼
void Show_This(const Addresser* pc);

//ɾ��ͨѶ¼
void Dele_This(Addresser* pc);

//ͨѶ¼����
void FindPeople(Addresser* pc);

//�޸�ͨѶ¼
void ModifyPeople(Addresser* pc);

//ͨѶ¼����
void QsortPeople(Addresser* pc);

//����ͨѶ¼
void DestoryAddresser(Addresser* pc);

//����ͨѶ¼
void SaveAddress(Addresser* pc);