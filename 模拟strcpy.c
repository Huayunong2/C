#include<stdio.h>
#include<assert.h>
void my_strcpy(char* dest, const char* src)
{
	assert(src != NULL); //���ԣ�arr2�����ڿ�ָ��
	assert(dest != NULL);
	while (*dest++ = *src++)
	{
		; //hello�Ŀ���
	}
}
int main()
 {
	char arr1[] = "xxxxx";
	char arr2[] = "hello";
	printf("�ı�ǰ:%s\n", arr1);
	my_strcpy(arr1, arr2); //Ŀ��ռ���ʼ��ַ Դ�ռ���ʼ��ַ
	printf("�ı��:%s", arr1);
	return 0;
}