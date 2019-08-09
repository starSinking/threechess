#ifndef _GAME_H_
#define _GAME_H_
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Initboard(char board[][3], int row, int col);
void ShowBoard(char board[][3], int row, int col);
void PlayMove(char board[][3], int row, int col);
char IsWin(char board[][3], int row, int col);
void ComputerMove(char board[][3], int row, int col);
#endif
