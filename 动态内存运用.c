#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	/*int* p = (int*)malloc(40);*/
	int* p = (int*)calloc(10, sizeof(int));//����Ҫ��ʼ���������������Զ���ʼ����0
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
	int*ptr = (int*)realloc(p, 80); //realloc(NULL,80) == malloc(80)
	if (NULL != ptr)
	{
		p = ptr;
		ptr == NULL;
	}
	free(p); //�ͷź󣬱��Ұָ����
	p = NULL;
	return 0;
}