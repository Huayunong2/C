//������Ϸ��صĺ���������ͷ�ļ�����
//���Ŷ���
#include<stdio.h> //ͷ�ļ��İ���
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//��������
void InitBoard(char board[ROW][COL], int row, int col);//��ʼ������
void DisplayBoard(char board[ROW][COL], int row, int col); //��ӡ����
void PlayerMove(char board[ROW][COL], int row, int col); //�������
void ComputerMove(char board[ROW][COL],int row, int col);//��������
char IS_win(char board[ROW][COL], int row, int col);