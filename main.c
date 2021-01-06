#include "Bingo.h"

int main()
{
	switch (intro()) 
	{
	case 1:game3x3(); break;
	case 2:game5x5(); break;
	case 3:guide(); break;
	default:printf("GAME END.");
		
	}
}