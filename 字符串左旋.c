#include <stdio.h>
#include<string.h>
void left(char arr[],int k)
{
    int i = 0;
    int len = strlen(arr);
    for (i = 0; i < k; i++)
    {
        int j = 0;
        char temp = arr[0];
        for (j = 0; j < len - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[len - 1] = temp;
    }
}
int main()
{
    int k = 0;
    char arr[] = "ABCD";
    scanf("%d", &k); //输入要左旋几个字符
    left(arr, k);
    printf("%s", arr);
}