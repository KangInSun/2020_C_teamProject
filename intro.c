#include "Bingo.h"
int intro()
{
    int a;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (7,13));
    printf("\t\t\t\t\t忙式式式式式式式式式式式式式忖 \n");
    printf("\t\t\t\t\t弛  ! BINGO !  弛 \n");
    printf("\t\t\t\t\t戌式式式式式式式式式式式式式戎 \n");
    printf("\t\t\t\t\t    1. 3 X 3\n\n");
    printf("\t\t\t\t\t    2. 5 X 5\n\n");
    printf("\t\t\t\t\t 3. GAME GUIDE\n\n");
    printf("\t\t\t\t\t  4. GAME END\n\n");
    printf("\t\t\t\t     ≠ PUSH THE NUMBER  : ");
    scanf("%d", &a);
    return a;
}