#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "xxxxxxxxxxxxxxxx";
//	char arr2[] = "he";
//	strncpy(arr1, arr2, 5); //arr2不够的话之后补'\0'
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[30]= "ww";
//	char arr2[] = "sss";
//	strncat(arr1, arr2, 3); //遇到\0停下或者追加到\0，如果超出被追加的长度则不会则只增加最大长度
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