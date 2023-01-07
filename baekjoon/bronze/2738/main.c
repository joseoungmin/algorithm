#include <stdio.h>

int main(void)
{
	int	x, y, i;
	int arr[10000] = {0,};
	int	num;

	scanf("%d %d\n", &x, &y);
	for (i=0; i<x*y; i++)
		scanf("%d", &arr[i]);
	for (i=0; i<x*y; i++)
	{
		if (i % y == 0 && i != 0)
			printf("\n");
		scanf("%d", &num);
		printf("%d ", arr[i] + num);
	}
	printf("\n");
	return (0);
}
