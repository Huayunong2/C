#include<stdio.h>
#include<math.h>
int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        if (a == 0)
        {
            printf("Not quadratic equation");
        }
        else if (pow(b, 2) - 4 * a * c == 0)
        {
            if (b != 0)
            {
                printf("x1=x2=%.2lf\n", -b / (2 * a));
            }
            if (b == 0)
            {
                printf("x1=x2=%.2lf\n", -(-b) / (2 * a));
            }
        }
        else if (pow(b, 2) - 4 * a * c > 0)
        {
            printf("x1=%.2lf;x2=%.2lf\n", (-b - sqrt(b * b - 4 * a * c)) / (2 * a), (-b + sqrt(b * b - 4 * a * c)) / (2 * a));
        }
        else if (pow(b, 2) - 4 * a * c < 0)
        {
            if (b != 0)
            {
                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", -b / (2 * a), sqrt(-(b * b - 4 * a * c)) / (2 * a), -b / (2 * a), sqrt(-(b * b - 4 * a * c)) / (2 * a));
            }
            else if (b == 0)
            {
                printf("x1=0.00-%.2lfi;x2=0.00+%.2lfi\n", sqrt(-(b * b - 4 * a * c)) / (2 * a), sqrt(-(b * b - 4 * a * c)) / (2 * a));
            }
        }
    }
}