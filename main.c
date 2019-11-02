#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include "functions.h"
#include "functions.c"

int main() {
	int counter = 0, i = 0, j = 0, choose, countwin = 0;
	char** matrix = create_board(7);
	char c = 'Y';
	printf("Welcome to Four in a row game!\n");
	printf("1)Start a game.\n2Exit.\n");
	scanf("%d", &choose);
	system("cls");
	switch (choose) {
	case 1:

		while (!check_tie(matrix) && !check_win(matrix, c, j, i)) {
			ask_for_move(counter);

			if (get_coordinate(&j, &i, matrix) == true) {
				if (c == 'X')
					put_Y(j, i, matrix);
				if (c == 'Y')
					put_X(j, i, matrix);
				counter++;
			}

			else {
				printf("Please enter correct coordinates\n");
				continue;
			}
			if (c == 'Y')
				c = 'X';
			else
				c = 'Y';

			print_board(matrix);
		}
		break;
	case 2:
		exit(1);
		break;
	default:
		break;

	}
}

