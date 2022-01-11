//关于游戏相关的函数声明，头文件包含
//符号定义
#include<stdio.h> //头文件的包含
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//函数声明
void InitBoard(char board[ROW][COL], int row, int col);//初始化棋盘
void DisplayBoard(char board[ROW][COL], int row, int col); //打印棋盘
void PlayerMove(char board[ROW][COL], int row, int col); //玩家下棋
void ComputerMove(char board[ROW][COL],int row, int col);//电脑下棋
char IS_win(char board[ROW][COL], int row, int col);