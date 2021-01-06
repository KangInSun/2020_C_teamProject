#include "Bingo.h"
void game3x3() {
	int num, uw = 0, cw = 0;
	initialize2();
	system("cls");
	do {
		printf("忙式式式式式式  User 式式式式式式式忖 \n\n");
		print_bingo2(ubingo2);
		printf("戌式式式式式式式式式式式式式式式式式式式式戎\n");
		
		num = get2(0);
		erase_bingo2(ubingo2, num);
		erase_bingo2(cbingo2, num);
		num = get2(1);
		erase_bingo2(ubingo2, num);
		erase_bingo2(cbingo2, num);
		//綵堅 諫撩 �挫�
		uw = out2(ubingo2);
		cw = out2(cbingo2);
	} while ((cw == 0) && (uw == 0));
	printf("忙式式   User result 式式忖 \n\n"); print_bingo2(ubingo2);
	printf("戌式式式式式式式式式式式式式式式式式式式戎\n\n");

	printf("忙式  Computer result 式忖 \n\n"); print_bingo2(cbingo2);
	printf("戌式式式式式式式式式式式式式式式式式式式式戎\n");


	winner(cw * 2 + uw);
}