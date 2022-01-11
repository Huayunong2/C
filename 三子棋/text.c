//测试游戏性
#include "game.h"
void menu()
{
	printf("                   *****************************\n");
	printf("                   *********1.开始游戏**********\n");
	printf("                   *********0.退出游戏**********\n");
	printf("                   *****************************\n");
}
void game() //存储数据，需要二维数组
{
	char board[ROW][COL];
	//初始化棋盘-空格↓
	InitBoard(board, ROW, COL);
	//打印棋盘-打印数组内容↓
	DisplayBoard(board,ROW,COL);
	//开始下棋
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL); //玩家下棋
		ret = IS_win(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL); //显示
		ComputerMove(board, ROW, COL);//电脑下棋
		ret = IS_win(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);//显示
	}
	if (ret == '*')
	{
		printf("玩家赢了！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了！\n");
	}
	else
	{
		printf("本次游戏平局！\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择:\n");
			break;
		}
	} while (input);
	return 0;
}