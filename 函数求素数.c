#include<stdio.h>
int is_prime(int j)
{
	int n=0;
	for(n=2;n<j-1;n++)
	{
		if(j%n==0)
		return 0;
	}
	return 1;
} 
int main()
{
	int i=0;
	int count=0;
	int o=1;
	for(i=100;i<=200;i++)
	{
	if(is_prime(i)==1)
	{
		printf("%d ",i);
		count++;
		if(o++%3==0)
		printf("\n");
	}
    }
    printf("\n%d\n",count);
    return 0;
}