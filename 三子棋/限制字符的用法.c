#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "xxxxxxxxxxxxxxxx";
//	char arr2[] = "he";
//	strncpy(arr1, arr2, 5); //arr2�����Ļ�֮��'\0'
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[30]= "ww";
//	char arr2[] = "sss";
//	strncat(arr1, arr2, 3); //����\0ͣ�»���׷�ӵ�\0�����������׷�ӵĳ����򲻻���ֻ������󳤶�
//	printf("%s", arr1);
//	return 0;
//}

int main()
{
	char arr1[30] = "abc";
	char arr2[] = "abcd";
	int ret = strncmp(arr1, arr2, 2); //
	printf("%d", ret);
	return 0;
}