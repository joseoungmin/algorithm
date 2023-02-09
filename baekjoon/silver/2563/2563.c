#include <stdio.h>

int main(void)
{
	int	arr[100][100] = {0, };
	int	cnt = 0;
	int	n, x, y;

	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d", &x, &y);
		for (int i = y - 1; i < y + 9 && i < 100; i++)
			for (int j = x - 1; j < x + 9 && j < 100; j++)
				arr[i][j] = 1;
	}
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			cnt += (arr[i][j] == 1);
	printf("%d\n", cnt);
	return (0);
}
