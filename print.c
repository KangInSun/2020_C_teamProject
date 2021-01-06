#include "Bingo.h"

void print_bingo(int arr[5][5]) {

    int x, y;
   
    for (y = 0; y < SIZE3; y++)
    {
        for (x = 0; x < SIZE3; x++) {

           
            if (arr[y][x] != -1)
            {
                printf("%6d", arr[y][x]);
            }

            else {
                printf("XerrorX");
            }
        }
        printf("\n\n");
    }
}

void print_bingo2(int arr[3][3]) {

    int x, y;

    for (y = 0; y < SIZE; y++)
    {
        for (x = 0; x < SIZE; x++) {
            if (arr[y][x] != -1)
            {
                printf("%6d", arr[y][x]);
            }

            else {
                printf("XerrorX");
            }
        }
        printf("\n\n");
    }
}