#include "Bingo.h"


void initialize()
{
    srand((unsigned int)time(NULL));
    set_rand((int*)ubingo);
    set_rand((int*)cbingo);
}

void initialize2()
{
    srand((unsigned int)time(NULL));
    set_rand2((int*)ubingo2);
    set_rand2((int*)cbingo2);
}
