#include "Bingo.h"

void set_rand(int* array)
{
    int i;

    for (i = 0; i < BSIZE; i++) {
        array[i] = i + 1;
    }

    for (i = 0; i < BSIZE; i++)
    {
        swap(&array[i], &array[rand() % 25]);
    }
}

void set_rand2(int* array)
{
    int i;

    for (i = 0; i < BSIZE2; i++) {
        array[i] = i + 1;
    }

    for (i = 0; i < BSIZE2; i++)
    {
        swap(&array[i], &array[rand() % 9]);
    }
}