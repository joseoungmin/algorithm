#include <stdio.h>

int  main(void)
{
	int arr[9][9] = {0, }, max = -1, x, y;
	
	for (int i=0; i<9; i++)
	{
		for (int j=0; j<9; j++)
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				y = i;
				x = j;
			}
		}
	}
	printf("%d\n%d %d\n", max, y + 1, x + 1);
	return (0);
}
