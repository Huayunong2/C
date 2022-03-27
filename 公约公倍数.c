#include <stdio.h>
int Gcd(int a, int b)
{
	int min;
	if (a > b)
		min = b;
	else
		min = a;
	int gcd = 0;
	for (int i = 1; i < min; i++)
	{
		if (a % i == 0 && b % i == 0)
			gcd = i;
	} 
	return gcd;
}
int Min(int a, int b, int max)
{
	return a * b / max;
}
int main()
{
	int a, b;
	int min;
	int max;
	scanf("%d %d", &a, &b);
	max = Gcd(a, b);
	min = Min(a, b, max);
	printf("%d\n", max);
	printf("%d", min);
	return 0;
}