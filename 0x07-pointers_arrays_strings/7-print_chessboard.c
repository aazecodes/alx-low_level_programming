#include "main.h"
/**
* print_chessboard - print chessboard given set 2D array
* @a: 2D array
*/
void print_chessboard(char (*a)[8])
{
	int chess, board;

	for (chess = 0; chess <= 7; chess++)
	{
		for (board = 0; board <= 7; board++)
		{
			_putchar(a[chess][board]);
		}
		_putchar('\n');
	}
}
