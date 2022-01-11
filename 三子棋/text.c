//������Ϸ��
#include "game.h"
void menu()
{
	printf("                   *****************************\n");
	printf("                   *********1.��ʼ��Ϸ**********\n");
	printf("                   *********0.�˳���Ϸ**********\n");
	printf("                   *****************************\n");
}
void game() //�洢���ݣ���Ҫ��ά����
{
	char board[ROW][COL];
	//��ʼ������-�ո��
	InitBoard(board, ROW, COL);
	//��ӡ����-��ӡ�������ݡ�
	DisplayBoard(board,ROW,COL);
	//��ʼ����
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL); //�������
		ret = IS_win(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL); //��ʾ
		ComputerMove(board, ROW, COL);//��������
		ret = IS_win(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);//��ʾ
	}
	if (ret == '*')
	{
		printf("���Ӯ�ˣ�\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ�ˣ�\n");
	}
	else
	{
		printf("������Ϸƽ�֣�\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��:\n");
			break;
		}
	} while (input);
	return 0;
}