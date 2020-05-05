#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Solve this puzzle by writing the shortest code.
 * Whitespaces (spaces, new lines, tabs...) are counted in the total amount of chars.
 * These comments should be burnt after reading!
 **/

int main()
{
	// the X position of the light of power
	int LX;
	// the Y position of the light of power
	int LY;
	// Thor's starting X position
	int TX;
	// Thor's starting Y position
	int TY;
	scanf("%d%d%d%d", &LX, &LY, &TX, &TY);

	// game loop
	while (1) {
		// The level of Thor's remaining energy, representing the number of moves he can still make.
		int remaining_turns;
		scanf("%d", &remaining_turns);

		// Write an action using printf(). DON'T FORGET THE TRAILING \n
		// To debug: fprintf(stderr, "Debug messages...\n");


		// A single line providing the move to be made: N NE E SE S SW W or NW
		if (TX < LX && TY == LY) {
			TX++;
			printf("E\n");
		} else if (TX > LX && TY == LY) {
			TX--;
			printf("W\n");
		} else if (TY < LY && TX == LX) {
			TY++;
			printf("S\n");
		} else if (TY > LY && TX == LX) {
			TY--;
			printf("N\n");
		} else if (TY < LY && TX < LX) {
			TY++;
			TX++;
			printf("SE\n");
		} else if (TY > LY && TX > LX) {
			TY--;
			TX--;
			printf("NW\n");
		} else if (TY < LY && TX > LX) {
			TY++;
			TX--;
			printf("SW\n");
		} else if (TY > LY && TX < LX) {
			TY--;
			TX++;
			printf("NE\n");
		}

	}

	return 0;
}
