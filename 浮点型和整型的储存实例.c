#include<stdio.h>
int main()
{
	//˵�����������������ڴ��д洢��ʽһ�����������
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ:%d\n", n);
	printf("*pFloat��ֵΪ:%f\n", *pFloat); //�Ը������ӽ�ȥ����
	
	*pFloat = 9.0; //�Ը������ӽǣ��洢9.0
	printf("num��ֵΪ:%d\n", n);
	printf("pFloat��ֵΪ:%f\n", *pFloat);
	return 0;
}