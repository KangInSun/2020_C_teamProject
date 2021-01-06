#include "Bingo.h"
void game5x5() {
	int num, uw = 0, cw = 0;
	initialize();
	system("cls");
	do {
		printf("忙式式式式式式式式式式式式  User 式式式式式式式式式式式式式式式忖 \n");
		print_bingo(ubingo);
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		num = get(0);
		erase_bingo(ubingo, num);
		erase_bingo(cbingo, num);
		num = get(1);
		erase_bingo(ubingo, num);
		erase_bingo(cbingo, num);
		//綵堅 諫撩 �挫�
		uw = out(ubingo);
		cw = out(cbingo);
	} while ((cw == 0) && (uw == 0));
	printf("忙式式式式式式式式式   User result 式式式式式式式式式式忖 \n"); print_bingo(ubingo);
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	printf("忙式式式式式式式   Computer result 式式式式式式式式忖 \n"); print_bingo(cbingo);
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

	winner(cw * 2 + uw);
}