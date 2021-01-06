#include "Bingo.h"
int guide()
{
    _sleep(500);
    printf("\n---------- 초기화 ----------\n");
    _sleep(1300);
    printf("1. BINGO GAME 번호 선택하기.\n");
    printf("2. 내 MATRIX의 값 입력 받기.\n");
    _sleep(1300);
    printf("--------- 실제 게임 --------\n");
    _sleep(1200);
    printf("        < MY TURN >\n");
    _sleep(1300);
    printf("3. 내가 숫자 부르기.\n");
    printf("4. 내 MATRIX와 COMPUTER MATRIX에서 불러진 숫자 지우기.\n");

    printf("5. 내가 BINGO인지, COMPUTER가 BINGO가 되었는지 확인하기.\n");
    _sleep(1300);
    printf("     < COMPUTER TURN >\n");
    _sleep(1200);
    printf("6. COMPUTER가 숫자 부르기\n");
    printf("7. 내 MATRIX와 COMPUTER MATRIX에서 불려진 숫자 지우기.\n");
    printf("8. 내가 BINGO인지, COMPUTER가 BINGO가 되었는지 확인하기.\n");
    printf("9. THREE TIMES부터 다시 SET.\n");
}