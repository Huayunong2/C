#include<stdio.h>
int main()
{
	//说明浮点数和整数在内存中存储方式一定是有区别的
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为:%d\n", n);
	printf("*pFloat的值为:%f\n", *pFloat); //以浮点数视角去看的
	
	*pFloat = 9.0; //以浮点数视角，存储9.0
	printf("num的值为:%d\n", n);
	printf("pFloat的值为:%f\n", *pFloat);
	return 0;
}