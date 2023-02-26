#include <stdio.h>

int main(void)
{
	int	N, K, cnt = 0, del = 0;
	char	arr[5000] = {0,};

	scanf("%d %d", &N, &K);
	printf("<");
	for (int i = 0; del < N; i++)
	{
		if (i == N)
			i = 0;
		if (arr[i] == 0)
			cnt++;
		if (cnt == K)
		{
			arr[i] = 1;
			cnt  = 0;
			printf("%d", i + 1);
			if (del != N - 1)
				printf(", ");
			del++;
		}
	}
	printf(">\n");
	return (0);
}
