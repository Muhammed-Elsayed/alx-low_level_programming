#include "main.h"
#include <stdio.h>

void times_table(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)		
		{
			printf("%d", i * j);
			if (j != 9)
				printf(", ");
		}
		printf("\n");

	}



}
