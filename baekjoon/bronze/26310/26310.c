#include <stdio.h>

int main(void)
{
	char	contry[30];
	int		n, num, rank = 1, taiwan;
	double	score[6] = {0,};
	double	d_arr[5] = {0.06, 0.14, 0.24, 0.56, 0.3};

	scanf("%d", &n);
	for (int i = 0; i < 6; i++)
	{
		scanf("%s", contry);
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &num);
			score[i] += d_arr[j] * num;
		}
		if (contry[0] == 'T')
			taiwan = i;
	}
	for (int i = 0; i < 6; i++)
		if (score[taiwan] < score[i])
			rank++;
	printf("%d", n / 6 + (n % 6 >= rank));
	return (0);
}
