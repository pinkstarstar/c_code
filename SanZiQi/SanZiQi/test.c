#define _CRT_SECURE_NO_WARNINGS 1

#include "SanZiQi.h"

void menu()
{
	printf("*****************************\n");
	printf("*****0.exit       1.play*****\n");
	printf("*****************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	Init_Board(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		Sleep(1000);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家胜利\n");
	else if (ret == '#')
		printf("电脑胜利\n");
	else
		printf("平局\n");

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
