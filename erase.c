#include "Bingo.h"

void erase_bingo(int arr[5][5], int number)
{
    int x, y;

    for (y = 0; y < SIZE3; y++)
    {
        for (x = 0; x < SIZE3; x++)
        {
            if (arr[y][x] == number)
            {
                arr[y][x] = 0;
            }
        }
    }
}

void erase_bingo2(int arr[3][3], int number)
{
    int x, y;

    for (y = 0; y < SIZE; y++)
    {
        for (x = 0; x < SIZE; x++)
        {
            if (arr[y][x] == number)
            {
                arr[y][x] = 0;
            }
        }
    }
}