#include "Bingo.h"

int out(int arr[5][5])
{
	int x, y, sum, cnt = 0;
	if (cnt == 3)
		return 1;
	for (y = 0; y < SIZE3; y++)//가로줄 확인
	{
		sum = 0;
		for (x = 0; x < SIZE3; x++)
		{
			sum += arr[y][x];
		}
		if (sum == 0)
		{
			cnt++;
		}
	}
	for (x = 0; x < SIZE3; x++)//세로줄 확인
	{
		sum = 0;
		for (y = 0; y < SIZE3; y++)
		{
			sum += arr[y][x];
		}
		if (sum == 0)
		{
			cnt++;
		}
	}
	sum = 0;
	for (x = 0; x < SIZE3; x++)//대각선 확인 
	{
		sum += arr[x][x];
	}
	if (sum == 0)
	{
		cnt++;
	}
	sum = 0;
	for (x = 0; x < SIZE3; x++)
	{
		sum += arr[x][SIZE3 - x - 1];
	}
	if (sum == 0)
	{
		cnt++;
	}
	if (cnt == 3)
		return 1;
	return 0;
}

int out2(int arr[3][3])
{
	int x, y, sum, cnt = 0;
	if (cnt == 3)
		return 1;
	for (y = 0; y < SIZE; y++)//가로줄 확인
	{
		sum = 0;
		for (x = 0; x < SIZE; x++)
		{
			sum += arr[y][x];
		}
		if (sum == 0)
		{
			cnt++;
		}
	}
	for (x = 0; x < SIZE; x++)//세로줄 확인
	{
		sum = 0;
		for (y = 0; y < SIZE; y++)
		{
			sum += arr[y][x];
		}
		if (sum == 0)
		{
			cnt++;
		}
	}
	sum = 0;
	for (x = 0; x < SIZE; x++)//대각선 확인 
	{
		sum += arr[x][x];
	}
	if (sum == 0)
	{
		cnt++;
	}
	sum = 0;
	for (x = 0; x < SIZE; x++)
	{
		sum += arr[x][SIZE - x - 1];
	}
	if (sum == 0)
	{
		cnt++;
	}
	if (cnt == 3)
		return 1;
	return 0;
}