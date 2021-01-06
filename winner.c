#include "Bingo.h"
void winner(int winner)
{
	switch (winner) {
	case 1:printf("¡Ù¡Ú Player WIN ¡Ú¡Ù\n"); break;
	case 2:printf("¡Ú Computer WIN ¡Ú\n"); break;
	case 3:printf("¡Ù DRAW ¡Ù\n"); break;
	default:printf("Error\n"); break;
	}
}
