#include<stdio.h>
int main()
{
	int i = 0, j=0, sum = 1,sum2=0;
	for (j = 1; j <= 10;j++)
	{	
		sum = 1;
		for (i = 1; i <= 10; i++)
		{
			
			sum = sum * i;
		}
		sum2+= sum ;
	}
	
		printf("%d", sum2);
		return 0;
}
/*
#include<stdio.h>
int main()
{
	int i = 0,  sum = 1,sum2=0;
		for (i = 1; i <= 10; i++)
		{
			sum = sum * i;
			sum2 += sum;
		}
		printf("%d", sum2);
		return 0;
}
*/ 