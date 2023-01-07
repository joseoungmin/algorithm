#include <stdio.h>

int main(void)
{
	int	S;
	int	x;
	int	end;

	while (end != EOF)
	{
		end = scanf("%d %d", &S, &x);
		if (end != EOF)
			printf("%d\n", x / (S + 1));
	}
	return (0);
}
