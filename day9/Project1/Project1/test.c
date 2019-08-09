#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("********************\n");
	printf("********************\n");
	printf("****1、开始游戏*****\n");
	printf("****0、退出游戏*****\n");
	printf("********************\n");
	printf("********************\n");

}
void game()
{
	char ret = 0;
	char board[3][3] = { 0 };
	Initboard(board, 3, 3);
	ShowBoard(board, 3, 3);
	while (1)
	{
		PlayMove(board, 3, 3);
		ret = IsWin(board, 3, 3);
		if (ret != ' ')
		{
			break;
		}
		ShowBoard(board, 3, 3);
		ComputerMove(board, 3, 3);
		ret = IsWin(board, 3, 3);
		if (ret != ' ')
		{
			break;
		}
		ShowBoard(board, 3, 3);
	}
	if (ret == 'Q')
	{
		printf("平局\n");
	}
	else if (ret == 'X')
	{
		printf("玩家胜出\n");
	}
	else if (ret == 'O')
	{
		printf("电脑胜出\n");
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入你的操作：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
			    printf("退出游戏\n");
				break;
		default:
			printf("请输入正确的选项");
			break;

		}
	} while (input);
	return 0;
}