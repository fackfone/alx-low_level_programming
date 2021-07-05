#include "holberton.h"
#include <stdio.h>
/**
 * main -check the code for ALX School Students
 */

int main(void)
{
	char board[8][8] = {
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
	};

	print_chessboard(board);
	return (0);
}
