#include <stdio.h>

int main(void)
{
	char	c = ' ';
	char	cnt_arr[123] = {0,};

	for (int i = 0; i < 2; i++)
	{
		c = ' ';
		while (c != '\n')
		{
			scanf("%c", &c);
			cnt_arr[c]++;
		}
	}
	for (int i = 97; i < 123; i++)
	{
		while (cnt_arr[i]-- > 0)
			printf("%c", i);
	}
	return (0);
}
