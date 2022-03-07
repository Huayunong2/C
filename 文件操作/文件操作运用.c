#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	/*FILE* pf = fopen("test.txt", "w");*/ //写文件
	FILE* pf = fopen("test.txt", "r"); //读文件
	if (NULL == pf) //判断
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//写文件(一个一个写)
	//char i = 'A';
	//for (i = 'A'; i <= 'Z'; i++)
	//{
	//	fputc(i, pf);
	//	fputc(' ', pf);
	//	/*fputc(i, stdout);*/ //stdin 标准输入流 stdout 标准输出流 stderr标准错误流 当程序运行起来时会默认打开这三个流
	//}
	
	//读文件(一个一个读)
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//

	//一行写入
	/*fputs("hello world\n",pf);*/

	//读一行
	char buf[1000] = { 0 };
	fgets(buf, 1000, pf);
	printf("%s", buf);
	fclose(pf);
	pf = NULL;
	return 0;
}