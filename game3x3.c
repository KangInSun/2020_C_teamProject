#include "Bingo.h"
void game3x3() {
	int num, uw = 0, cw = 0;
	initialize2();
	system("cls");
	do {
		printf("��������������  User ���������������� \n\n");
		print_bingo2(ubingo2);
		printf("��������������������������������������������\n");
		
		num = get2(0);
		erase_bingo2(ubingo2, num);
		erase_bingo2(cbingo2, num);
		num = get2(1);
		erase_bingo2(ubingo2, num);
		erase_bingo2(cbingo2, num);
		//���� �ϼ� Ȯ��
		uw = out2(ubingo2);
		cw = out2(cbingo2);
	} while ((cw == 0) && (uw == 0));
	printf("������   User result ������ \n\n"); print_bingo2(ubingo2);
	printf("������������������������������������������\n\n");

	printf("����  Computer result ���� \n\n"); print_bingo2(cbingo2);
	printf("��������������������������������������������\n");


	winner(cw * 2 + uw);
}